
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct ifaddrs {char* ifa_name; scalar_t__ ifa_addr; struct ifaddrs* ifa_next; } ;
struct TYPE_7__ {scalar_t__ ss_family; } ;
struct TYPE_5__ {scalar_t__ s_addr; } ;
struct TYPE_6__ {TYPE_1__ sin_addr; } ;
struct TYPE_8__ {int sdl; TYPE_3__ ss; TYPE_2__ sin; } ;
typedef TYPE_4__ sockunion_t ;
typedef scalar_t__ in_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ifaddrs*) ;
 scalar_t__ FUNC_3 (struct ifaddrs**) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static uint32_t
FUNC_5(in_addr_t VAR_2)
{
 struct ifaddrs *VAR_3;
 struct ifaddrs *VAR_4;
 char *VAR_5;
 int VAR_6;
 sockunion_t *VAR_7;

 if (FUNC_3(&VAR_4) < 0)
  return (0);

 VAR_6 = 0;
 VAR_5 = ((void*)0);







 for (VAR_3 = VAR_4; VAR_3 != ((void*)0); VAR_3 = VAR_3->ifa_next) {
  VAR_7 = (sockunion_t *)VAR_3->ifa_addr;
  if (VAR_7 && VAR_7->ss.ss_family == VAR_0 &&
      VAR_7->sin.sin_addr.s_addr == VAR_2) {
   VAR_5 = VAR_3->ifa_name;
   break;
  }
 }
 if (VAR_5 == ((void*)0))
  goto out;






 for (VAR_3 = VAR_4; VAR_3 != ((void*)0); VAR_3 = VAR_3->ifa_next) {
  VAR_7 = (sockunion_t *)VAR_3->ifa_addr;
  if (VAR_7 && VAR_7->ss.ss_family == VAR_1 &&
      FUNC_4(VAR_3->ifa_name, VAR_5) == 0) {
   VAR_6 = FUNC_0(&VAR_7->sdl);
   break;
  }
 }
 FUNC_1(VAR_6 != 0);

out:
 FUNC_2(VAR_4);
 return (VAR_6);
}

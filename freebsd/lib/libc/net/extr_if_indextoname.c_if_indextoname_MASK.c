
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_dl {int dummy; } ;
struct ifaddrs {int ifa_name; TYPE_1__* ifa_addr; struct ifaddrs* ifa_next; } ;
struct TYPE_2__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct sockaddr_dl*) ;
 int VAR_3 ;
 int FUNC_1 (struct ifaddrs*) ;
 scalar_t__ FUNC_2 (struct ifaddrs**) ;
 int FUNC_3 (char*,int ,int ) ;

char *
FUNC_4(unsigned int VAR_4, char *VAR_5)
{
 struct ifaddrs *VAR_6, *VAR_7;
 int VAR_8 = 0;

 if (FUNC_2(&VAR_6) < 0)
  return(((void*)0));

 for (VAR_7 = VAR_6; VAR_7 != ((void*)0); VAR_7 = VAR_7->ifa_next) {
  if (VAR_7->ifa_addr &&
      VAR_7->ifa_addr->sa_family == VAR_0 &&
      VAR_4 == FUNC_0((struct sockaddr_dl*)VAR_7->ifa_addr))
   break;
 }

 if (VAR_7 == ((void*)0)) {
  VAR_8 = VAR_1;
  VAR_5 = ((void*)0);
 }
 else
  FUNC_3(VAR_5, VAR_7->ifa_name, VAR_2);

 FUNC_1(VAR_6);

 VAR_3 = VAR_8;
 return(VAR_5);
}

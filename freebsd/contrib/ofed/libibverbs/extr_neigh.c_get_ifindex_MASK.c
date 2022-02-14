
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct ifaddrs {int ifa_name; int * ifa_addr; struct ifaddrs* ifa_next; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct sockaddr const*) ;
 int VAR_1 ;
 int FUNC_1 (struct ifaddrs*) ;
 int FUNC_2 (struct ifaddrs**) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(const struct sockaddr *VAR_2)
{
 struct ifaddrs *VAR_3, *VAR_4;
 int VAR_5 = -VAR_0;

 if (-1 == FUNC_2(&VAR_3))
  return VAR_1;

 for (VAR_4 = VAR_3; VAR_4 != ((void*)0); VAR_4 = VAR_4->ifa_next) {
  if (VAR_4->ifa_addr == ((void*)0))
   continue;

  if (FUNC_0(VAR_4->ifa_addr, VAR_2)) {
   VAR_5 = FUNC_3(VAR_4->ifa_name);
   break;
  }
 }

 FUNC_1(VAR_3);

 return VAR_5;
}

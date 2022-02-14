
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_dl {int dummy; } ;
struct ifaddrs {char* ifa_name; TYPE_1__* ifa_addr; struct ifaddrs* ifa_next; } ;
struct if_nameindex {char* if_name; scalar_t__ if_index; } ;
struct TYPE_2__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (struct ifaddrs*) ;
 scalar_t__ FUNC_2 (struct ifaddrs**) ;
 char* FUNC_3 (unsigned int) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;

struct if_nameindex *
FUNC_6(void)
{
 struct ifaddrs *VAR_1, *VAR_2;
 unsigned int VAR_3;
 int VAR_4;
 struct if_nameindex *VAR_5, *VAR_6;
 char *VAR_7;

 if (FUNC_2(&VAR_1) < 0)
  return(((void*)0));





 VAR_3 = 0;
 VAR_4 = 0;
 for (VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->ifa_next) {
  if (VAR_2->ifa_addr &&
      VAR_2->ifa_addr->sa_family == VAR_0) {
   VAR_4 += FUNC_5(VAR_2->ifa_name) + 1;
   VAR_3++;
  }
 }






 VAR_7 = FUNC_3((VAR_3 + 1) * sizeof(struct if_nameindex) + VAR_4);
 VAR_5 = (struct if_nameindex *)VAR_7;
 if (VAR_5 == ((void*)0))
  goto out;
 VAR_7 += (VAR_3 + 1) * sizeof(struct if_nameindex);






 VAR_6 = VAR_5;
 for (VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->ifa_next) {
  if (VAR_2->ifa_addr &&
      VAR_2->ifa_addr->sa_family == VAR_0) {
   VAR_6->if_index =
       FUNC_0((struct sockaddr_dl*)VAR_2->ifa_addr);
   VAR_6->if_name = VAR_7;
   FUNC_4(VAR_7, VAR_2->ifa_name);
   VAR_6++;
   VAR_7 += FUNC_5(VAR_7) + 1;
  }
 }



 VAR_6->if_index = 0;
 VAR_6->if_name = ((void*)0);
out:
 FUNC_1(VAR_1);
 return(VAR_5);
}

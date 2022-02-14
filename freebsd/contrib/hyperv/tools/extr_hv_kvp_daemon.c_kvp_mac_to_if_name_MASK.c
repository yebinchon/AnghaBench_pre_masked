
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_dl {scalar_t__ sdl_type; } ;
struct ifaddrs {int ifa_name; scalar_t__ ifa_addr; struct ifaddrs* ifa_next; } ;
struct ether_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (struct ether_addr*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ifaddrs*) ;
 int FUNC_4 (struct ifaddrs**) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int ) ;
 char FUNC_8 (char) ;

__attribute__((used)) static char *
FUNC_9(char *VAR_1)
{
 char *VAR_2 = ((void*)0);
 struct ifaddrs *VAR_3;
 struct ifaddrs *VAR_4;
 struct sockaddr_dl *VAR_5;
 int VAR_6;
 char *VAR_7, *VAR_8;

 VAR_6 = FUNC_4(&VAR_3);

 if (VAR_6 >= 0) {
  VAR_4 = VAR_3;
  do {
   VAR_5 = (struct sockaddr_dl *)(uintptr_t)VAR_3->ifa_addr;
   if (VAR_5->sdl_type == VAR_0) {
    VAR_7 = FUNC_5(FUNC_1((struct ether_addr *)(FUNC_0(VAR_5))));
    if (VAR_7 != ((void*)0)) {
     for (VAR_8 = VAR_7; *VAR_8 != '\0'; VAR_8++)
      *VAR_8 = FUNC_8(*VAR_8);

     if (FUNC_7(VAR_7, VAR_1, FUNC_6(VAR_1)) == 0) {

      VAR_2 = FUNC_5(VAR_3->ifa_name);
      FUNC_2(VAR_7);
      break;
     } else
      FUNC_2(VAR_7);
    }
   }
  } while ((VAR_3 = VAR_3->ifa_next) != ((void*)0));
  FUNC_3(VAR_4);
 }
 return (VAR_2);
}

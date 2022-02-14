
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr_dl {int dummy; } ;
struct sockaddr {int sa_family; } ;
typedef int nbuf ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int,int *,char*,int) ;
 char* FUNC_3 (struct sockaddr_dl*) ;
 int FUNC_4 (char*,char const*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct sockaddr *VAR_2, const char *VAR_3)
{




 switch (VAR_2->sa_family) {
 case 128:
  (void)FUNC_4("%s: link %s; ", VAR_3,
      FUNC_3((struct sockaddr_dl *)(void *)VAR_2));
  break;
 }
 (void)FUNC_0(VAR_1);
}

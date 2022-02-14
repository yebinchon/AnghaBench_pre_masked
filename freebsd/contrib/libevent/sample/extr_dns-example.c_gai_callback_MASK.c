
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct evutil_addrinfo {char* ai_canonname; scalar_t__ ai_family; scalar_t__ ai_addr; struct evutil_addrinfo* ai_next; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int ,int *,char*,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(int VAR_3, struct evutil_addrinfo *VAR_4, void *VAR_5)
{
 const char *VAR_6 = VAR_5;
 int VAR_7;
 if (VAR_3) {
  FUNC_2("%s: %s\n", VAR_6, FUNC_0(VAR_3));
 }
 if (VAR_4 && VAR_4->ai_canonname)
  FUNC_2("    %s ==> %s\n", VAR_6, VAR_4->ai_canonname);
 for (VAR_7=0; VAR_4; VAR_4 = VAR_4->ai_next, ++VAR_7) {
  char VAR_8[128];
  if (VAR_4->ai_family == VAR_2) {
   struct sockaddr_in *VAR_9 =
       (struct sockaddr_in*)VAR_4->ai_addr;
   FUNC_1(VAR_0, &VAR_9->sin_addr, VAR_8,
       sizeof(VAR_8));
   FUNC_2("[%d] %s: %s\n",VAR_7,VAR_6,VAR_8);
  } else {
   struct sockaddr_in6 *VAR_10 =
       (struct sockaddr_in6*)VAR_4->ai_addr;
   FUNC_1(VAR_1, &VAR_10->sin6_addr, VAR_8,
       sizeof(VAR_8));
   FUNC_2("[%d] %s: %s\n",VAR_7,VAR_6,VAR_8);
  }
 }
}

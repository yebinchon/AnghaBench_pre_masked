
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int socklen_t ;
typedef int SOCKET ;
typedef int SOCKADDR_STORAGE ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ,char*,char const*) ;
 char* FUNC_3 (int const,int *,char*,int) ;
 int FUNC_4 (int,int ,int*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,unsigned long) ;
 int VAR_5 ;

__attribute__((used)) static SOCKET
FUNC_7(SOCKET VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9;
 SOCKADDR_STORAGE VAR_10;
 socklen_t VAR_11;

 VAR_11 = sizeof VAR_10;
 VAR_9 = FUNC_0(VAR_6, (struct sockaddr *)&VAR_10, &VAR_11);
 if (VAR_9 == VAR_3) {
  if (VAR_7) {
   FUNC_5("accept()");
  }
  return VAR_3;
 }
 if (VAR_7) {
  char VAR_12[VAR_2 + 50];
  const char *VAR_13;

  VAR_13 = ((void*)0);
  switch (((struct sockaddr *)&VAR_10)->sa_family) {
  case 129:
   VAR_13 = FUNC_3(129,
    &((struct sockaddr_in *)&VAR_10)->sin_addr,
    VAR_12, sizeof VAR_12);
   break;
  case 128:
   VAR_13 = FUNC_3(128,
    &((struct sockaddr_in6 *)&VAR_10)->sin6_addr,
    VAR_12, sizeof VAR_12);
   break;
  }
  if (VAR_13 == ((void*)0)) {
   FUNC_6(VAR_12, "<unknown: %lu>", (unsigned long)
    ((struct sockaddr *)&VAR_10)->sa_family);
   VAR_13 = VAR_12;
  }
  FUNC_2(VAR_5, "accepting connection from: %s\n", VAR_13);
 }





 if (VAR_8) {






  FUNC_1(VAR_9, VAR_1, VAR_4);

 }
 return VAR_9;
}

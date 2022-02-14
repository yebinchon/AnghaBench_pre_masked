
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;




 int VAR_0 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (int ,char*,char const*) ;
 char* FUNC_2 (int const,int *,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(int VAR_2)
{
 int VAR_3;
 struct sockaddr VAR_4;
 socklen_t VAR_5;
 char VAR_6[VAR_0 + 50];
 const char *VAR_7;

 VAR_5 = sizeof VAR_4;
 VAR_3 = FUNC_0(VAR_2, &VAR_4, &VAR_5);
 if (VAR_3 < 0) {
  FUNC_3("accept()");
  return -1;
 }
 VAR_7 = ((void*)0);
 switch (VAR_4.sa_family) {
 case 129:
  VAR_7 = FUNC_2(129,
   &((struct sockaddr_in *)&VAR_4)->sin_addr,
   VAR_6, sizeof VAR_6);
  break;
 case 128:
  VAR_7 = FUNC_2(128,
   &((struct sockaddr_in6 *)&VAR_4)->sin6_addr,
   VAR_6, sizeof VAR_6);
  break;
 }
 if (VAR_7 == ((void*)0)) {
  FUNC_4(VAR_6, "<unknown: %lu>", (unsigned long)VAR_4.sa_family);
  VAR_7 = VAR_6;
 }
 FUNC_1(VAR_1, "accepting connection from: %s\n", VAR_7);
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct addrinfo {int ai_addrlen; int ai_addr; } ;


 int FUNC_0 (struct addrinfo*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int *,int *,struct addrinfo**) ;
 int FUNC_3 (struct sockaddr*,int ,int ) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(char *VAR_0, struct sockaddr *VAR_1)
{
 struct addrinfo *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, ((void*)0), ((void*)0), &VAR_2);
 if (VAR_3) {
  FUNC_4("getaddrinfo failed (%s) - invalid hostname or IP address\n", FUNC_1(VAR_3));
  return VAR_3;
 }

 FUNC_3(VAR_1, VAR_2->ai_addr, VAR_2->ai_addrlen);
 FUNC_0(VAR_2);
 return VAR_3;
}

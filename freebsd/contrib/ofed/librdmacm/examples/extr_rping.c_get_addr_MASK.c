
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct addrinfo {scalar_t__ ai_family; int ai_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct addrinfo*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int *,int *,struct addrinfo**) ;
 int FUNC_3 (struct sockaddr*,int ,int) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(char *VAR_2, struct sockaddr *VAR_3)
{
 struct addrinfo *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, ((void*)0), ((void*)0), &VAR_4);
 if (VAR_5) {
  FUNC_4("getaddrinfo failed (%s) - invalid hostname or IP address\n", FUNC_1(VAR_5));
  return VAR_5;
 }

 if (VAR_4->ai_family == VAR_0)
  FUNC_3(VAR_3, VAR_4->ai_addr, sizeof(struct sockaddr_in));
 else if (VAR_4->ai_family == VAR_1)
  FUNC_3(VAR_3, VAR_4->ai_addr, sizeof(struct sockaddr_in6));
 else
  VAR_5 = -1;

 FUNC_0(VAR_4);
 return VAR_5;
}

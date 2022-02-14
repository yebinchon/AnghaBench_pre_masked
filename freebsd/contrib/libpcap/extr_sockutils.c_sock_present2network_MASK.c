
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct addrinfo {int ai_family; int * ai_next; int ai_addr; } ;
typedef int hints ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (struct sockaddr_storage*,int ,int) ;
 int FUNC_2 (struct addrinfo*,int ,int) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (char const*,char*,struct addrinfo*,struct addrinfo**,char*,int) ;

int FUNC_5(const char *VAR_1, struct sockaddr_storage *VAR_2, int VAR_3, char *VAR_4, int VAR_5)
{
 int VAR_6;
 struct addrinfo *VAR_7;
 struct addrinfo VAR_8;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));

 VAR_8.ai_family = VAR_3;

 if ((VAR_6 = FUNC_4(VAR_1, "22222" , &VAR_8, &VAR_7, VAR_4, VAR_5)) == -1)
  return 0;

 if (VAR_7->ai_family == VAR_0)
  FUNC_1(VAR_2, VAR_7->ai_addr, sizeof(struct sockaddr_in));
 else
  FUNC_1(VAR_2, VAR_7->ai_addr, sizeof(struct sockaddr_in6));

 if (VAR_7->ai_next != ((void*)0))
 {
  FUNC_0(VAR_7);

  if (VAR_4)
   FUNC_3(VAR_4, VAR_5, "More than one socket requested; using the first one returned");
  return -2;
 }

 FUNC_0(VAR_7);
 return -1;
}

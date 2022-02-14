
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; struct addrinfo* ai_next; int ai_socktype; int ai_family; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_2 (int ,int ,int,char const*,char const*) ;
 int FUNC_3 (struct addrinfo*,int ,int) ;

int
FUNC_4(const char *VAR_2, int VAR_3, const char *VAR_4, const char *VAR_5)
{
 struct addrinfo VAR_6, *VAR_7, *VAR_8;
 int VAR_9;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.ai_family = VAR_0;
 VAR_6.ai_socktype = VAR_1;
 VAR_9 = FUNC_1(VAR_2, "0", &VAR_6, &VAR_7);
 if (VAR_9)
  return (-1);

 for (VAR_8 = VAR_7; VAR_8; VAR_8 = VAR_8->ai_next) {
  if (FUNC_2(VAR_8->ai_addr, VAR_8->ai_addrlen, VAR_3, VAR_4,
      VAR_5) == 0) {
   FUNC_0(VAR_7);
   return (0);
  }
 }
 FUNC_0(VAR_7);
 return (-1);
}

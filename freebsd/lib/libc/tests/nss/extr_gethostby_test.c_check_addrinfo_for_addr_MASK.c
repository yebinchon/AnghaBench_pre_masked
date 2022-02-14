
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct addrinfo {int ai_family; int ai_addrlen; scalar_t__ ai_addr; struct addrinfo* ai_next; } ;
typedef int socklen_t ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,void*,int ) ;

__attribute__((used)) static int
FUNC_2(struct addrinfo *VAR_0, char const *VAR_1,
 socklen_t VAR_2, int VAR_3)
{
 struct addrinfo *VAR_4;

 for (VAR_4 = VAR_0; VAR_4 != ((void*)0); VAR_4 = VAR_4->ai_next) {
  if (VAR_3 != VAR_4->ai_family)
   continue;

  switch (VAR_3) {
  case 129:
   if (FUNC_1(VAR_1,
       (void *)&((struct sockaddr_in *)VAR_4->ai_addr)->sin_addr,
       FUNC_0(VAR_2, VAR_4->ai_addrlen)) == 0)
    return (0);
   break;
  case 128:
   if (FUNC_1(VAR_1,
       (void *)&((struct sockaddr_in6 *)VAR_4->ai_addr)->sin6_addr,
       FUNC_0(VAR_2, VAR_4->ai_addrlen)) == 0)
    return (0);
   break;
  default:
   break;
  }
 }

 return (-1);
}

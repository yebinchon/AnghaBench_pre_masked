
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct addrinfo {int ai_family; scalar_t__ ai_addr; struct addrinfo* ai_next; } ;




 void* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct addrinfo *VAR_0, int VAR_1)
{
 struct addrinfo *VAR_2;

 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->ai_next) {
  switch (VAR_2->ai_family) {
  case 129:
   ((struct sockaddr_in *)VAR_2->ai_addr)->
       sin_port = FUNC_0(VAR_1);
   break;
  case 128:
   ((struct sockaddr_in6 *)VAR_2->ai_addr)->
       sin6_port = FUNC_0(VAR_1);
   break;
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {struct addrinfo* ai_next; int ai_addr; } ;


 int * VAR_0 ;
 struct addrinfo* VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

int
FUNC_1(struct addrinfo *VAR_2)
{
 struct addrinfo *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (1);

 while (VAR_2 != ((void*)0)) {
  VAR_3 = VAR_1;
  while (VAR_3 != ((void*)0)) {
   if (FUNC_0(VAR_2->ai_addr, VAR_3->ai_addr) == 0)
    return (1);
   VAR_3 = VAR_3->ai_next;
  }
  VAR_2 = VAR_2->ai_next;
 }

 return (0);
}

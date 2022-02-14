
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {struct addrinfo* ai_next; } ;
typedef int FILE ;


 struct addrinfo* FUNC_0 (int **,char const*,struct addrinfo const*) ;

__attribute__((used)) static struct addrinfo *
FUNC_1(FILE **VAR_0, const char *VAR_1, const struct addrinfo *VAR_2,
     struct addrinfo *VAR_3)
{
 struct addrinfo *VAR_4;

 while ((VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2)) != ((void*)0)) {
  VAR_3->ai_next = VAR_4;
  while (VAR_3 && VAR_3->ai_next)
   VAR_3 = VAR_3->ai_next;
 }
 return (VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; struct addrinfo* ai_next; } ;


 int FUNC_0 (int,int ,int ) ;
 struct addrinfo* FUNC_1 (char const*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct addrinfo*) ;

int
FUNC_4(int VAR_0, int VAR_1, const char *VAR_2)
{
 struct addrinfo *VAR_3, *VAR_4;
 int VAR_5;

 if ((VAR_3 = FUNC_1(VAR_2, 0, VAR_1)) == ((void*)0))
  return (-1);
 for (VAR_4 = VAR_3; VAR_4 != ((void*)0); VAR_4 = VAR_4->ai_next)
  if ((VAR_5 = FUNC_0(VAR_0, VAR_4->ai_addr, VAR_4->ai_addrlen)) == 0)
   break;
 if (VAR_5 != 0)
  FUNC_2();
 FUNC_3(VAR_3);
 return (VAR_5 == 0 ? 0 : -1);
}

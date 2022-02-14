
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {struct addrinfo* ai_next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct addrinfo*,char*) ;
 struct addrinfo* FUNC_2 (int,int) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char**,char*) ;

__attribute__((used)) static int
FUNC_6(struct addrinfo *VAR_0, char *VAR_1)
{
 struct addrinfo *VAR_2;
 char *VAR_3, *VAR_4;
 int VAR_5;

 FUNC_4("1 line read from snapshot:\n%s\n", VAR_1);

 VAR_5 = 0;
 VAR_4 = VAR_1;

 VAR_3 = FUNC_5(&VAR_4, ":");
 if (VAR_3 == ((void*)0))
  return (-1);

 VAR_5 = FUNC_1(VAR_0, VAR_3);
 if (VAR_5 != 0)
  return (-1);

 VAR_2 = VAR_0;
 while ((VAR_3 = FUNC_5(&VAR_4, ":")) != ((void*)0)) {
  VAR_2->ai_next = FUNC_2(1, sizeof(struct addrinfo));
  FUNC_0(VAR_2->ai_next != ((void*)0));

  VAR_5 = FUNC_1(VAR_2->ai_next, VAR_3);
  if (VAR_5 != 0) {
   FUNC_3(VAR_0);
   VAR_0 = ((void*)0);
   return (-1);
  }

  VAR_2 = VAR_2->ai_next;
 }

 return (0);
}

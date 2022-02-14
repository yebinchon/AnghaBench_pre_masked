
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int dummy; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char**,char*) ;
 struct servent* FUNC_3 (char const*,char const*) ;
 struct servent* FUNC_4 (int ,char const*) ;
 struct servent* FUNC_5 () ;
 int FUNC_6 (int ) ;
 char* VAR_0 ;
 int FUNC_7 (struct servent*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

int
FUNC_10(int VAR_1, char *VAR_2[])
{
 struct servent *VAR_3;
 const char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 int VAR_7;

 while ((VAR_7 = FUNC_2(VAR_1, VAR_2, "p:n:P:")) != -1) {
  switch (VAR_7) {
  case 'n':
   VAR_6 = VAR_0;
   break;
  case 'p':
   VAR_4 = VAR_0;
   break;
  case 'P':
   VAR_5 = VAR_0;
   break;
  default:
   FUNC_9();
  }
 }

 if (VAR_4 && VAR_6)
  FUNC_9();
 if (VAR_4) {
  if ((VAR_3 = FUNC_4(FUNC_6(FUNC_0(VAR_4)), VAR_5)) != ((void*)0))
   FUNC_7(VAR_3);
  return 0;
 }
 if (VAR_6) {
  if ((VAR_3 = FUNC_3(VAR_6, VAR_5)) != ((void*)0))
   FUNC_7(VAR_3);
  return 0;
 }

 FUNC_8(0);
 while ((VAR_3 = FUNC_5()) != ((void*)0))
  FUNC_7(VAR_3);
 FUNC_1();
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent {int dummy; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char**,char*) ;
 struct protoent* FUNC_3 (char const*) ;
 struct protoent* FUNC_4 (int ) ;
 struct protoent* FUNC_5 () ;
 char* VAR_0 ;
 int FUNC_6 (struct protoent*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;

int
FUNC_9(int VAR_1, char *VAR_2[])
{
 struct protoent *VAR_3;
 const char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 int VAR_6;

 while ((VAR_6 = FUNC_2(VAR_1, VAR_2, "p:n:")) != -1) {
  switch (VAR_6) {
  case 'n':
   VAR_5 = VAR_0;
   break;
  case 'p':
   VAR_4 = VAR_0;
   break;
  default:
   FUNC_8();
  }
 }

 if (VAR_4 && VAR_5)
  FUNC_8();
 if (VAR_4) {
  if ((VAR_3 = FUNC_4(FUNC_0(VAR_4))) != ((void*)0))
   FUNC_6(VAR_3);
  return 0;
 }
 if (VAR_5) {
  if ((VAR_3 = FUNC_3(VAR_5)) != ((void*)0))
   FUNC_6(VAR_3);
  return 0;
 }

 FUNC_7(0);
 while ((VAR_3 = FUNC_5()) != ((void*)0))
  FUNC_6(VAR_3);
 FUNC_1();
 return 0;
}

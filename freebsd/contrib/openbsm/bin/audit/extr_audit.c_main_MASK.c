
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 () ;

int
FUNC_5(int VAR_5, char **VAR_6)
{
 int VAR_7;
 unsigned int VAR_8 = 0;

 if (VAR_5 != 2)
  FUNC_4();

 while ((VAR_7 = FUNC_1(VAR_5, VAR_6, "einst")) != -1) {
  switch(VAR_7) {

  case 'e':
   VAR_8 = VAR_1;
   break;

  case 'i':
   VAR_8 = VAR_2;
   break;

  case 'n':
   VAR_8 = VAR_4;
   break;

  case 's':
   VAR_8 = VAR_3;
   break;

  case 't':
   VAR_8 = VAR_0;
   break;

  case '?':
  default:
   FUNC_4();
   break;
  }
 }
 if (FUNC_3(VAR_8) < 0)
  FUNC_0(-1);

 FUNC_2("Trigger sent.\n");
 FUNC_0 (0);
}

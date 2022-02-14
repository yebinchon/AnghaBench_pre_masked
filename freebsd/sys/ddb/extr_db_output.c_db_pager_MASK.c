
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*) ;

void
FUNC_6(void)
{
 int VAR_4, VAR_5;

 FUNC_2();
 FUNC_5("--More--\r");
 VAR_5 = 0;
 while (!VAR_5) {
  VAR_4 = FUNC_0();
  switch (VAR_4) {
  case 'e':
  case 'j':
  case '\n':

   VAR_1 = 1;
   VAR_5++;
   break;
  case 'd':

   VAR_1 = VAR_0 / 2;
   VAR_5++;
   break;
  case 'f':
  case ' ':

   VAR_1 = VAR_0;
   VAR_5++;
   break;
  case 'q':
  case 'Q':
  case 'x':
  case 'X':

   VAR_1 = 0;
   VAR_3 = 1;
   VAR_5++;
   break;





  }
 }
 FUNC_5("        ");
 FUNC_4();
 FUNC_5("\r");
 VAR_2 = 0;
 FUNC_3();
}

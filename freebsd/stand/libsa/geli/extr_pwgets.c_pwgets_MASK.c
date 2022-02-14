
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char) ;

void
FUNC_2(char *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;
    char *VAR_4;

    for (VAR_4 = VAR_0;;)
 switch (VAR_3 = FUNC_0() & 0177) {
 case '\n':
 case '\r':
     *VAR_4 = '\0';
     FUNC_1('\n');
     return;
 case '\b':
 case '\177':
     if (VAR_4 > VAR_0) {
  VAR_4--;
  if (VAR_2 == 0) {
   FUNC_1('\b');
   FUNC_1(' ');
   FUNC_1('\b');
  }
     }
     break;
 case 'u'&037:
 case 'w'&037:
     VAR_4 = VAR_0;
     FUNC_1('\n');
     break;
 default:
     if ((VAR_1 < 1) || ((VAR_4 - VAR_0) < VAR_1 - 1)) {
  *VAR_4++ = VAR_3;
  if (VAR_2 == 0) {
   FUNC_1('*');
  }
     }
 }

}

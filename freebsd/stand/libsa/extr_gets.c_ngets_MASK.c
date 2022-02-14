
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

void
FUNC_2(char *VAR_0, int VAR_1)
{
    int VAR_2;
    char *VAR_3;

    for (VAR_3 = VAR_0;;) {
 VAR_2 = FUNC_0();
 if (VAR_2 == -1)
  break;
 switch (VAR_2 & 0177) {
 case '\n':
 case '\r':
     *VAR_3 = '\0';
     FUNC_1('\n');
     return;
 case '\b':
 case '\177':
     if (VAR_3 > VAR_0) {
  VAR_3--;
  FUNC_1('\b');
  FUNC_1(' ');
  FUNC_1('\b');
     }
     break;
 case 'r'&037: {
     char *VAR_4;

     FUNC_1('\n');
     for (VAR_4 = VAR_0; VAR_4 < VAR_3; ++VAR_4)
  FUNC_1(*VAR_4);
     break;
 }
 case 'u'&037:
 case 'w'&037:
     VAR_3 = VAR_0;
     FUNC_1('\n');
     break;
 default:
     if ((VAR_1 < 1) || ((VAR_3 - VAR_0) < VAR_1 - 1)) {
  *VAR_3++ = VAR_2;
  FUNC_1(VAR_2);
     }
 }
    }

}

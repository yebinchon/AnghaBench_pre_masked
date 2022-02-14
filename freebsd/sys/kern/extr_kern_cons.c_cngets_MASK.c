
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;

void
FUNC_5(char *VAR_0, size_t VAR_1, int VAR_2)
{
 char *VAR_3, *VAR_4;
 int VAR_5;

 FUNC_1();

 VAR_3 = VAR_0;
 VAR_4 = VAR_0 + VAR_1 - 1;
 for (;;) {
  VAR_5 = FUNC_0() & 0177;
  switch (VAR_5) {
  case '\n':
  case '\r':
   FUNC_2(VAR_5);
   *VAR_3 = '\0';
   FUNC_4();
   return;
  case '\b':
  case '\177':
   if (VAR_3 > VAR_0) {
    if (VAR_2)
     FUNC_3("\b \b");
    VAR_3--;
   }
   continue;
  case '\0':
   continue;
  default:
   if (VAR_3 < VAR_4) {
    switch (VAR_2) {
    case 128:
     break;
    case 129:
     FUNC_2('*');
     break;
    default:
     FUNC_2(VAR_5);
     break;
    }
    *VAR_3++ = VAR_5;
   }
  }
 }
}

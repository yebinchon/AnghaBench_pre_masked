
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

void
FUNC_3(char *VAR_0, size_t VAR_1)
{
 char *VAR_2;
 int VAR_3;

 VAR_2 = VAR_0;
 for (;;) {
  VAR_3 = FUNC_2(0);


  switch (VAR_3) {
  case 0x5300:
   VAR_3 = '\177';
   break;
  default:
   VAR_3 &= 0xff;
   break;
  }

  switch (VAR_3) {
  case '\177':
  case '\b':
   if (VAR_2 > VAR_0) {
    VAR_2--;
    FUNC_0("\b \b");
   }
   break;
  case '\n':
  case '\r':
   *VAR_2 = 0;
   return;
  default:
   if (VAR_3 >= 0x20 && VAR_3 <= 0x7e) {
    if (VAR_2 - VAR_0 < VAR_1 - 1)
     *VAR_2++ = VAR_3;
    FUNC_1(VAR_3);
   }
   break;
  }
 }
}

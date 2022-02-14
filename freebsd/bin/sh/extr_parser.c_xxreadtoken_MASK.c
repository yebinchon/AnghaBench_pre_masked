
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 char FUNC_1 () ;
 char FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_15 ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ,char*,int ) ;
 int FUNC_6 (int) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static int
FUNC_7(void)
{
 int VAR_18;

 if (VAR_17) {
  VAR_17 = 0;
  return VAR_13;
 }
 if (VAR_14) {
  FUNC_6(2);
  VAR_14 = 0;
 }
 VAR_16 = VAR_15;
 for (;;) {
  VAR_18 = FUNC_3();
  switch (VAR_18) {
  case ' ': case '\t':
   continue;
  case '#':
   while ((VAR_18 = FUNC_1()) != '\n' && VAR_18 != 128);
   FUNC_4();
   continue;
  case '\\':
   if (FUNC_1() == '\n') {
    VAR_16 = ++VAR_15;
    if (VAR_12)
     FUNC_6(2);
    else
     FUNC_6(0);
    continue;
   }
   FUNC_4();

  default:
   return FUNC_5(VAR_18, VAR_0, (char *)((void*)0), 0);
  case '\n':
   VAR_15++;
   VAR_14 = VAR_12;
   FUNC_0(VAR_7);
  case 128:
   FUNC_0(VAR_4);
  case '&':
   if (FUNC_2() == '&')
    FUNC_0(VAR_1);
   FUNC_4();
   FUNC_0(VAR_2);
  case '|':
   if (FUNC_2() == '|')
    FUNC_0(VAR_8);
   FUNC_4();
   FUNC_0(VAR_9);
  case ';':
   VAR_18 = FUNC_2();
   if (VAR_18 == ';')
    FUNC_0(VAR_3);
   else if (VAR_18 == '&')
    FUNC_0(VAR_5);
   FUNC_4();
   FUNC_0(VAR_11);
  case '(':
   FUNC_0(VAR_6);
  case ')':
   FUNC_0(VAR_10);
  }
 }

}

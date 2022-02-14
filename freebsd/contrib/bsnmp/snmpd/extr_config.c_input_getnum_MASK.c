
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(u_int VAR_2, u_int VAR_3)
{
 int VAR_4;
 u_int VAR_5;

 VAR_5 = 0;
 VAR_1 = 0;
 while (VAR_3 == 0 || VAR_5 < VAR_3) {
  if ((VAR_4 = FUNC_0()) == VAR_0) {
   if (VAR_5 == 0)
    FUNC_5("bad number");
   return;
  }
  if (FUNC_2(VAR_4)) {
   if (VAR_2 == 8 && (VAR_4 == '8' || VAR_4 == '9')) {
    FUNC_1(VAR_4);
    if (VAR_5 == 0)
     FUNC_5("bad number");
    return;
   }
   VAR_1 = VAR_1 * VAR_2 + (VAR_4 - '0');
  } else if (VAR_2 == 16 && FUNC_4(VAR_4)) {
   if (FUNC_3(VAR_4))
    VAR_1 = VAR_1 * VAR_2 + (VAR_4 - 'a' + 10);
   else
    VAR_1 = VAR_1 * VAR_2 + (VAR_4 - 'A' + 10);
  } else {
   FUNC_1(VAR_4);
   if (VAR_5 == 0)
    FUNC_5("bad number");
   return;
  }
  VAR_5++;
 }
}

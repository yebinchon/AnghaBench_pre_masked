
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpz_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_6(mpz_t VAR_1, int VAR_2)
{
 for (;;) {
  FUNC_5(VAR_1, VAR_0, VAR_2 - 1);
  FUNC_3(VAR_1, 0);
  FUNC_3(VAR_1, VAR_2 - 1);
  if (FUNC_2(VAR_1, 50)) {
   FUNC_4(VAR_1, VAR_1, 1);
   if (FUNC_1(VAR_1, 65537)) {
    continue;
   }
   FUNC_0(VAR_1, VAR_1, 1);
   return;
  }
 }
}

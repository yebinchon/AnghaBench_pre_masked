
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ br_ghash ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(void)
{
 br_ghash VAR_0;

 VAR_0 = FUNC_0();
 if (VAR_0 == 0) {
  FUNC_1("Test GHASH_pclmul: UNAVAILABLE\n");
 } else {
  FUNC_2("GHASH_pclmul", VAR_0);
 }
}

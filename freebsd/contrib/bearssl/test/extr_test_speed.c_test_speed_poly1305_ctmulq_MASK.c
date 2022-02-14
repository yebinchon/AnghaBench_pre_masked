
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ br_poly1305_run ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(void)
{
 br_poly1305_run VAR_0;

 VAR_0 = FUNC_0();
 if (VAR_0 == 0) {
  FUNC_1("%-30s UNAVAILABLE\n", "Poly1305 (ctmulq)");
 } else {
  FUNC_2("Poly1305 (ctmulq)", VAR_0);
 }
}

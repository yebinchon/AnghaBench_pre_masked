
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ br_poly1305_run ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_3(void)
{
 br_poly1305_run VAR_1;

 VAR_1 = FUNC_0();
 if (VAR_1 == 0) {
  FUNC_1("Test Poly1305_ctmulq: UNAVAILABLE\n");
 } else {
  FUNC_2("Poly1305_ctmulq", VAR_1,
   &VAR_0);
 }
}

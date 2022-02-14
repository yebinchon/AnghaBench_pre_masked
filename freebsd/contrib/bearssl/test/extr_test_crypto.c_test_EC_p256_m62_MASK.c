
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int br_ec_impl ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int const*,int) ;
 int FUNC_3 (char*,int const*,int) ;

__attribute__((used)) static void
FUNC_4(void)
{
 const br_ec_impl *VAR_1;

 VAR_1 = FUNC_0();
 if (VAR_1 != ((void*)0)) {
  FUNC_2("EC_p256_m62", VAR_1,
   (uint32_t)1 << VAR_0);
  FUNC_3("EC_p256_m62", VAR_1,
   (uint32_t)1 << VAR_0);
 } else {
  FUNC_1("Test EC_p256_m62: UNAVAILABLE\n");
  FUNC_1("Test EC_p256_m62 keygen: UNAVAILABLE\n");
 }
}

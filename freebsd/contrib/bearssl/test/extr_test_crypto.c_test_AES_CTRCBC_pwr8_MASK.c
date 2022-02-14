
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_block_ctrcbc_class ;


 int * FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int const*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 const br_block_ctrcbc_class *VAR_0;

 VAR_0 = FUNC_0();
 if (VAR_0 != ((void*)0)) {
  FUNC_2("pwr8", VAR_0);
 } else {
  FUNC_1("Test AES CTR/CBC-MAC pwr8: UNAVAILABLE\n");
 }
}

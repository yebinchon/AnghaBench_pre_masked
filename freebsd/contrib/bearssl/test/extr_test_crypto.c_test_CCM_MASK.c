
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_block_ctrcbc_class ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int * FUNC_0 () ;
 int const VAR_3 ;
 int * FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int const*) ;

__attribute__((used)) static void
FUNC_4(void)
{
 const br_block_ctrcbc_class *VAR_4;

 FUNC_3("aes_big", &VAR_0);
 FUNC_3("aes_small", &VAR_3);
 FUNC_3("aes_ct", &VAR_2);
 FUNC_3("aes_ct64", &VAR_1);

 VAR_4 = FUNC_1();
 if (VAR_4 != ((void*)0)) {
  FUNC_3("aes_x86ni", VAR_4);
 } else {
  FUNC_2("Test CCM aes_x86ni: UNAVAILABLE\n");
 }

 VAR_4 = FUNC_0();
 if (VAR_4 != ((void*)0)) {
  FUNC_3("aes_pwr8", VAR_4);
 } else {
  FUNC_2("Test CCM aes_pwr8: UNAVAILABLE\n");
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_block_ctr_class ;
typedef int br_block_cbcenc_class ;
typedef int br_block_cbcdec_class ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int,int) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;
 int FUNC_6 (char*,int const*,int const*,int const*,int,int) ;

__attribute__((used)) static void
FUNC_7(void)
{
 const br_block_cbcenc_class *VAR_2;
 const br_block_cbcdec_class *VAR_3;
 const br_block_ctr_class *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_2 = FUNC_1();
 VAR_3 = FUNC_0();
 VAR_4 = FUNC_2();
 VAR_5 = (VAR_2 != ((void*)0));
 VAR_6 = (VAR_3 != ((void*)0));
 VAR_7 = (VAR_4 != ((void*)0));
 if (VAR_5 != VAR_7 || VAR_6 != VAR_7) {
  FUNC_4(VAR_1, "AES_pwr8 availability mismatch (%d/%d/%d)\n",
   VAR_5, VAR_6, VAR_7);
  FUNC_3(VAR_0);
 }
 if (VAR_7) {
  FUNC_6("AES_pwr8",
   VAR_2, VAR_3, VAR_4, 1, 1);
 } else {
  FUNC_5("Test AES_pwr8: UNAVAILABLE\n");
 }
}

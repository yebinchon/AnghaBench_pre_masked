
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlsv1_record_layer {scalar_t__ cipher_alg; int * write_cbc; int key_material_len; int write_key; int write_iv; int write_seq_num; int cipher_suite; int write_cipher_suite; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,...) ;

int FUNC_4(struct tlsv1_record_layer *VAR_3)
{
 FUNC_3(VAR_1, "TLSv1: Record Layer - New write cipher suite "
     "0x%04x", VAR_3->cipher_suite);
 VAR_3->write_cipher_suite = VAR_3->cipher_suite;
 FUNC_2(VAR_3->write_seq_num, 0, VAR_2);

 if (VAR_3->write_cbc) {
  FUNC_0(VAR_3->write_cbc);
  VAR_3->write_cbc = ((void*)0);
 }
 if (VAR_3->cipher_alg != VAR_0) {
  VAR_3->write_cbc = FUNC_1(VAR_3->cipher_alg,
         VAR_3->write_iv, VAR_3->write_key,
         VAR_3->key_material_len);
  if (VAR_3->write_cbc == ((void*)0)) {
   FUNC_3(VAR_1, "TLSv1: Failed to initialize "
       "cipher");
   return -1;
  }
 }

 return 0;
}

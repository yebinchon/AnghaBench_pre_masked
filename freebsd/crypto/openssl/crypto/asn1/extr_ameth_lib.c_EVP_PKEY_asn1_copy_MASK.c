
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pkey_check; int siginf_set; int item_verify; int item_sign; int pkey_ctrl; int pkey_free; int param_print; int param_cmp; int param_copy; int param_missing; int param_encode; int param_decode; int pkey_bits; int pkey_size; int old_priv_decode; int old_priv_encode; int priv_print; int priv_encode; int priv_decode; int pub_print; int pub_cmp; int pub_encode; int pub_decode; } ;
typedef TYPE_1__ EVP_PKEY_ASN1_METHOD ;



void FUNC_0(EVP_PKEY_ASN1_METHOD *VAR_0,
                        const EVP_PKEY_ASN1_METHOD *VAR_1)
{

    VAR_0->pub_decode = VAR_1->pub_decode;
    VAR_0->pub_encode = VAR_1->pub_encode;
    VAR_0->pub_cmp = VAR_1->pub_cmp;
    VAR_0->pub_print = VAR_1->pub_print;

    VAR_0->priv_decode = VAR_1->priv_decode;
    VAR_0->priv_encode = VAR_1->priv_encode;
    VAR_0->priv_print = VAR_1->priv_print;

    VAR_0->old_priv_encode = VAR_1->old_priv_encode;
    VAR_0->old_priv_decode = VAR_1->old_priv_decode;

    VAR_0->pkey_size = VAR_1->pkey_size;
    VAR_0->pkey_bits = VAR_1->pkey_bits;

    VAR_0->param_decode = VAR_1->param_decode;
    VAR_0->param_encode = VAR_1->param_encode;
    VAR_0->param_missing = VAR_1->param_missing;
    VAR_0->param_copy = VAR_1->param_copy;
    VAR_0->param_cmp = VAR_1->param_cmp;
    VAR_0->param_print = VAR_1->param_print;

    VAR_0->pkey_free = VAR_1->pkey_free;
    VAR_0->pkey_ctrl = VAR_1->pkey_ctrl;

    VAR_0->item_sign = VAR_1->item_sign;
    VAR_0->item_verify = VAR_1->item_verify;

    VAR_0->siginf_set = VAR_1->siginf_set;

    VAR_0->pkey_check = VAR_1->pkey_check;

}

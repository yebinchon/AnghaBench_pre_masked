
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int keygen_info_count; int keygen_info; TYPE_1__* data; } ;
struct TYPE_6__ {int nbits; int min_saltlen; int gentmp; int saltlen; int pad_mode; int primes; } ;
typedef TYPE_1__ RSA_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_4)
{
    RSA_PKEY_CTX *VAR_5 = FUNC_0(sizeof(*VAR_5));

    if (VAR_5 == ((void*)0))
        return 0;
    VAR_5->nbits = 2048;
    VAR_5->primes = VAR_0;
    if (FUNC_1(VAR_4))
        VAR_5->pad_mode = VAR_2;
    else
        VAR_5->pad_mode = VAR_1;

    VAR_5->saltlen = VAR_3;
    VAR_5->min_saltlen = -1;
    VAR_4->data = VAR_5;
    VAR_4->keygen_info = VAR_5->gentmp;
    VAR_4->keygen_info_count = 2;

    return 1;
}

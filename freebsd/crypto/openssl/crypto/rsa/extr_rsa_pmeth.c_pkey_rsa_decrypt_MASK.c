
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* pkey; TYPE_3__* data; } ;
struct TYPE_10__ {scalar_t__ pad_mode; unsigned char* tbuf; int mgf1md; int md; int oaep_labellen; int oaep_label; } ;
struct TYPE_8__ {int rsa; } ;
struct TYPE_9__ {TYPE_1__ pkey; } ;
typedef TYPE_3__ RSA_PKEY_CTX ;
typedef TYPE_4__ EVP_PKEY_CTX ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char*,int,unsigned char*,int,int,int ,int ,int ,int ) ;
 int FUNC_1 (size_t,unsigned char const*,unsigned char*,int ,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,int) ;
 size_t FUNC_5 (int ,size_t,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_7(EVP_PKEY_CTX *VAR_2,
                            unsigned char *VAR_3, size_t *VAR_4,
                            const unsigned char *VAR_5, size_t VAR_6)
{
    int VAR_7;
    RSA_PKEY_CTX *VAR_8 = VAR_2->data;

    if (VAR_8->pad_mode == VAR_1) {
        if (!FUNC_6(VAR_8, VAR_2))
            return -1;
        VAR_7 = FUNC_1(VAR_6, VAR_5, VAR_8->tbuf,
                                  VAR_2->pkey->pkey.rsa, VAR_0);
        if (VAR_7 <= 0)
            return VAR_7;
        VAR_7 = FUNC_0(VAR_3, VAR_7, VAR_8->tbuf,
                                                VAR_7, VAR_7,
                                                VAR_8->oaep_label,
                                                VAR_8->oaep_labellen,
                                                VAR_8->md, VAR_8->mgf1md);
    } else {
        VAR_7 = FUNC_1(VAR_6, VAR_5, VAR_3, VAR_2->pkey->pkey.rsa,
                                  VAR_8->pad_mode);
    }
    *VAR_4 = FUNC_5(FUNC_3(VAR_7), *VAR_4, VAR_7);
    VAR_7 = FUNC_4(FUNC_2(VAR_7), VAR_7, 1);
    return VAR_7;
}

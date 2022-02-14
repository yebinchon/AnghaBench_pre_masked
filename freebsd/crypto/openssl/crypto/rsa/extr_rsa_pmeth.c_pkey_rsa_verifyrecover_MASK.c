
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* pkey; TYPE_3__* data; } ;
struct TYPE_10__ {scalar_t__ pad_mode; unsigned char* tbuf; scalar_t__ md; } ;
struct TYPE_8__ {int rsa; } ;
struct TYPE_9__ {TYPE_1__ pkey; } ;
typedef TYPE_3__ RSA_PKEY_CTX ;
typedef TYPE_4__ EVP_PKEY_CTX ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (size_t,unsigned char const*,unsigned char*,int ,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *,int ,unsigned char*,size_t*,unsigned char const*,size_t,int ) ;
 int FUNC_6 (unsigned char*,scalar_t__*,int) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_8(EVP_PKEY_CTX *VAR_5,
                                  unsigned char *VAR_6, size_t *VAR_7,
                                  const unsigned char *VAR_8, size_t VAR_9)
{
    int VAR_10;
    RSA_PKEY_CTX *VAR_11 = VAR_5->data;

    if (VAR_11->md) {
        if (VAR_11->pad_mode == VAR_4) {
            if (!FUNC_7(VAR_11, VAR_5))
                return -1;
            VAR_10 = FUNC_3(VAR_9, VAR_8,
                                     VAR_11->tbuf, VAR_5->pkey->pkey.rsa,
                                     VAR_4);
            if (VAR_10 < 1)
                return 0;
            VAR_10--;
            if (VAR_11->tbuf[VAR_10] != FUNC_2(FUNC_1(VAR_11->md))) {
                FUNC_4(VAR_0,
                       VAR_2);
                return 0;
            }
            if (VAR_10 != FUNC_0(VAR_11->md)) {
                FUNC_4(VAR_0,
                       VAR_3);
                return 0;
            }
            if (VAR_6)
                FUNC_6(VAR_6, VAR_11->tbuf, VAR_10);
        } else if (VAR_11->pad_mode == VAR_1) {
            size_t VAR_12;
            VAR_10 = FUNC_5(FUNC_1(VAR_11->md),
                                 ((void*)0), 0, VAR_6, &VAR_12,
                                 VAR_8, VAR_9, VAR_5->pkey->pkey.rsa);
            if (VAR_10 <= 0)
                return 0;
            VAR_10 = VAR_12;
        } else {
            return -1;
        }
    } else {
        VAR_10 = FUNC_3(VAR_9, VAR_8, VAR_6, VAR_5->pkey->pkey.rsa,
                                 VAR_11->pad_mode);
    }
    if (VAR_10 < 0)
        return VAR_10;
    *VAR_7 = VAR_10;
    return 1;
}

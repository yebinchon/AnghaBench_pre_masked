
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nbits; int qbits; int * md; void* pmd; } ;
struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef int EVP_MD ;
typedef TYPE_2__ DSA_PKEY_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_14, int VAR_15, int VAR_16, void *VAR_17)
{
    DSA_PKEY_CTX *VAR_18 = VAR_14->data;

    switch (VAR_15) {
    case 134:
        if (VAR_16 < 256)
            return -2;
        VAR_18->nbits = VAR_16;
        return 1;

    case 132:
        if (VAR_16 != 160 && VAR_16 != 224 && VAR_16 && VAR_16 != 256)
            return -2;
        VAR_18->qbits = VAR_16;
        return 1;

    case 133:
        if (FUNC_1((const EVP_MD *)VAR_17) != VAR_5 &&
            FUNC_1((const EVP_MD *)VAR_17) != VAR_6 &&
            FUNC_1((const EVP_MD *)VAR_17) != VAR_7) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
        VAR_18->pmd = VAR_17;
        return 1;

    case 130:
        if (FUNC_1((const EVP_MD *)VAR_17) != VAR_5 &&
            FUNC_1((const EVP_MD *)VAR_17) != VAR_3 &&
            FUNC_1((const EVP_MD *)VAR_17) != VAR_4 &&
            FUNC_1((const EVP_MD *)VAR_17) != VAR_6 &&
            FUNC_1((const EVP_MD *)VAR_17) != VAR_7 &&
            FUNC_1((const EVP_MD *)VAR_17) != VAR_8 &&
            FUNC_1((const EVP_MD *)VAR_17) != VAR_13 &&
            FUNC_1((const EVP_MD *)VAR_17) != VAR_9 &&
            FUNC_1((const EVP_MD *)VAR_17) != VAR_10 &&
            FUNC_1((const EVP_MD *)VAR_17) != VAR_11 &&
            FUNC_1((const EVP_MD *)VAR_17) != VAR_12) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
        VAR_18->md = VAR_17;
        return 1;

    case 131:
        *(const EVP_MD **)VAR_17 = VAR_18->md;
        return 1;

    case 135:
    case 128:
    case 136:
        return 1;

    case 129:
        FUNC_0(VAR_0,
               VAR_2);
        return -2;
    default:
        return -2;

    }
}

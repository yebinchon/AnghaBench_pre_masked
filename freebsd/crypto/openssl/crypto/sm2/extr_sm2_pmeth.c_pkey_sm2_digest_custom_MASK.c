
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {TYPE_2__* pkey; TYPE_3__* data; } ;
struct TYPE_8__ {int id_len; int id; int id_set; } ;
struct TYPE_6__ {int * ec; } ;
struct TYPE_7__ {TYPE_1__ pkey; } ;
typedef TYPE_3__ SM2_PKEY_CTX ;
typedef TYPE_4__ EVP_PKEY_CTX ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int EC_KEY ;


 int FUNC_0 (int *,int *,size_t) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int const*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_5(EVP_PKEY_CTX *VAR_4, EVP_MD_CTX *VAR_5)
{
    uint8_t VAR_6[VAR_0];
    SM2_PKEY_CTX *VAR_7 = VAR_4->data;
    EC_KEY *VAR_8 = VAR_4->pkey->pkey.ec;
    const EVP_MD *VAR_9 = FUNC_1(VAR_5);
    int VAR_10 = FUNC_2(VAR_9);

    if (!VAR_7->id_set) {





        FUNC_3(VAR_1, VAR_2);
        return 0;
    }

    if (VAR_10 < 0) {
        FUNC_3(VAR_1, VAR_3);
        return 0;
    }


    if (!FUNC_4(VAR_6, VAR_9, VAR_7->id, VAR_7->id_len, VAR_8))
        return 0;

    return FUNC_0(VAR_5, VAR_6, (size_t)VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* ecx; } ;
struct TYPE_11__ {TYPE_3__ pkey; TYPE_1__* ameth; } ;
struct TYPE_9__ {int pubkey; } ;
struct TYPE_8__ {int pkey_id; } ;
typedef TYPE_4__ EVP_PKEY ;




 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 unsigned char* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_4__*,int ,int *,void*,long,int ) ;

__attribute__((used)) static int FUNC_3(EVP_PKEY *VAR_1, int VAR_2, long VAR_3, void *VAR_4)
{
    switch (VAR_2) {

    case 128:
        return FUNC_2(VAR_1, VAR_1->ameth->pkey_id, ((void*)0), VAR_4, VAR_3,
                          VAR_0);

    case 129:
        if (VAR_1->pkey.ecx != ((void*)0)) {
            unsigned char **VAR_5 = VAR_4;

            *VAR_5 = FUNC_1(VAR_1->pkey.ecx->pubkey, FUNC_0(VAR_1));
            if (*VAR_5 != ((void*)0))
                return FUNC_0(VAR_1);
        }
        return 0;

    default:
        return -2;

    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ param_nid; } ;
struct TYPE_11__ {int dh; } ;
struct TYPE_13__ {TYPE_2__ pkey; } ;
struct TYPE_12__ {int * pkey; TYPE_1__* pmeth; TYPE_5__* data; } ;
struct TYPE_10__ {int pkey_id; } ;
typedef TYPE_3__ EVP_PKEY_CTX ;
typedef TYPE_4__ EVP_PKEY ;
typedef TYPE_5__ DH_PKEY_CTX ;
typedef int DH ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ,int *) ;
 int FUNC_5 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_6(EVP_PKEY_CTX *VAR_2, EVP_PKEY *VAR_3)
{
    DH_PKEY_CTX *VAR_4 = VAR_2->data;
    DH *VAR_5 = ((void*)0);

    if (VAR_2->pkey == ((void*)0) && VAR_4->param_nid == 0) {
        FUNC_3(VAR_0, VAR_1);
        return 0;
    }
    if (VAR_4->param_nid != 0)
        VAR_5 = FUNC_2(VAR_4->param_nid);
    else
        VAR_5 = FUNC_1();
    if (VAR_5 == ((void*)0))
        return 0;
    FUNC_4(VAR_3, VAR_2->pmeth->pkey_id, VAR_5);

    if (VAR_2->pkey != ((void*)0) && !FUNC_5(VAR_3, VAR_2->pkey))
        return 0;
    return FUNC_0(VAR_3->pkey.dh);
}

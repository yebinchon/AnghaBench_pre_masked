
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sign_id; int hash_id; int pkey_id; } ;
typedef TYPE_1__ nid_triple ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,int) ;

int FUNC_4(int VAR_2, int *VAR_3, int *VAR_4)
{
    nid_triple VAR_5;
    const nid_triple *VAR_6 = ((void*)0);
    VAR_5.sign_id = VAR_2;

    if (VAR_0 != ((void*)0)) {
        int VAR_7 = FUNC_2(VAR_0, &VAR_5);
        VAR_6 = FUNC_3(VAR_0, VAR_7);
    }

    if (VAR_6 == ((void*)0)) {
        VAR_6 = FUNC_0(&VAR_5, VAR_1, FUNC_1(VAR_1));
    }

    if (VAR_6 == ((void*)0))
        return 0;
    if (VAR_3)
        *VAR_3 = VAR_6->hash_id;
    if (VAR_4)
        *VAR_4 = VAR_6->pkey_id;
    return 1;
}

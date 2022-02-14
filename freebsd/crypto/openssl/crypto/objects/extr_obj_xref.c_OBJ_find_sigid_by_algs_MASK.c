
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hash_id; int pkey_id; int sign_id; } ;
typedef TYPE_1__ nid_triple ;


 TYPE_1__** FUNC_0 (TYPE_1__ const**,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (scalar_t__,int) ;

int FUNC_4(int *VAR_2, int VAR_3, int VAR_4)
{
    nid_triple VAR_5;
    const nid_triple *VAR_6 = &VAR_5;
    const nid_triple **VAR_7 = ((void*)0);

    VAR_5.hash_id = VAR_3;
    VAR_5.pkey_id = VAR_4;

    if (VAR_1) {
        int VAR_8 = FUNC_2(VAR_1, &VAR_5);
        if (VAR_8 >= 0) {
            VAR_6 = FUNC_3(VAR_1, VAR_8);
            VAR_7 = &VAR_6;
        }
    }

    if (VAR_7 == ((void*)0)) {
        VAR_7 = FUNC_0(&VAR_6, VAR_0, FUNC_1(VAR_0));
    }

    if (VAR_7 == ((void*)0))
        return 0;
    if (VAR_2)
        *VAR_2 = (*VAR_7)->sign_id;
    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nlevel; struct TYPE_5__* levels; int extra_data; int anyPolicy; int nodes; int cert; int user_policies; int auth_policies; } ;
typedef TYPE_1__ X509_POLICY_TREE ;
typedef TYPE_1__ X509_POLICY_LEVEL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int (*) (int )) ;

void FUNC_7(X509_POLICY_TREE *VAR_1)
{
    X509_POLICY_LEVEL *VAR_2;
    int VAR_3;

    if (!VAR_1)
        return;

    FUNC_5(VAR_1->auth_policies);
    FUNC_6(VAR_1->user_policies, FUNC_2);

    for (VAR_3 = 0, VAR_2 = VAR_1->levels; VAR_3 < VAR_1->nlevel; VAR_3++, VAR_2++) {
        FUNC_1(VAR_2->cert);
        FUNC_6(VAR_2->nodes, FUNC_3);
        FUNC_3(VAR_2->anyPolicy);
    }

    FUNC_4(VAR_1->extra_data, VAR_0);
    FUNC_0(VAR_1->levels);
    FUNC_0(VAR_1);

}

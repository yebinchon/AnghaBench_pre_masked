
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int X509_POLICY_TREE ;
typedef int X509_POLICY_NODE ;
struct TYPE_8__ {scalar_t__ anyPolicy; int nodes; } ;
typedef TYPE_1__ X509_POLICY_LEVEL ;
struct TYPE_9__ {int anyPolicy; } ;
typedef TYPE_2__ X509_POLICY_CACHE ;


 int * FUNC_0 (TYPE_1__*,int ,scalar_t__,int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__ const*,int *,int *) ;

__attribute__((used)) static int FUNC_4(X509_POLICY_LEVEL *VAR_0,
                         const X509_POLICY_CACHE *VAR_1,
                         X509_POLICY_TREE *VAR_2)
{
    int VAR_3;
    X509_POLICY_NODE *VAR_4;
    X509_POLICY_LEVEL *VAR_5 = VAR_0 - 1;

    for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_5->nodes); VAR_3++) {
        VAR_4 = FUNC_2(VAR_5->nodes, VAR_3);

        if (!FUNC_3(VAR_0, VAR_1, VAR_4, VAR_2))
            return 0;
    }

    if (VAR_5->anyPolicy &&
        FUNC_0(VAR_0, VAR_1->anyPolicy, VAR_5->anyPolicy, ((void*)0)) == ((void*)0))
        return 0;
    return 1;
}

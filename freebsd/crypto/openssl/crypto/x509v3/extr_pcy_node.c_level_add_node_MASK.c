
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int * extra_data; } ;
typedef TYPE_1__ X509_POLICY_TREE ;
struct TYPE_15__ {int nchild; struct TYPE_15__* parent; TYPE_4__* data; } ;
typedef TYPE_2__ X509_POLICY_NODE ;
struct TYPE_16__ {int * nodes; TYPE_2__* anyPolicy; } ;
typedef TYPE_3__ X509_POLICY_LEVEL ;
struct TYPE_17__ {int valid_policy; } ;
typedef TYPE_4__ X509_POLICY_DATA ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,TYPE_4__*) ;
 int FUNC_7 (int *,TYPE_2__*) ;

X509_POLICY_NODE *FUNC_8(X509_POLICY_LEVEL *VAR_3,
                                 X509_POLICY_DATA *VAR_4,
                                 X509_POLICY_NODE *VAR_5,
                                 X509_POLICY_TREE *VAR_6)
{
    X509_POLICY_NODE *VAR_7;

    VAR_7 = FUNC_1(sizeof(*VAR_7));
    if (VAR_7 == ((void*)0)) {
        FUNC_2(VAR_2, VAR_0);
        return ((void*)0);
    }
    VAR_7->data = VAR_4;
    VAR_7->parent = VAR_5;
    if (VAR_3) {
        if (FUNC_0(VAR_4->valid_policy) == VAR_1) {
            if (VAR_3->anyPolicy)
                goto node_error;
            VAR_3->anyPolicy = VAR_7;
        } else {

            if (VAR_3->nodes == ((void*)0))
                VAR_3->nodes = FUNC_3();
            if (VAR_3->nodes == ((void*)0)) {
                FUNC_2(VAR_2, VAR_0);
                goto node_error;
            }
            if (!FUNC_7(VAR_3->nodes, VAR_7)) {
                FUNC_2(VAR_2, VAR_0);
                goto node_error;
            }
        }
    }

    if (VAR_6) {
        if (VAR_6->extra_data == ((void*)0))
            VAR_6->extra_data = FUNC_5();
        if (VAR_6->extra_data == ((void*)0)){
            FUNC_2(VAR_2, VAR_0);
            goto node_error;
        }
        if (!FUNC_6(VAR_6->extra_data, VAR_4)) {
            FUNC_2(VAR_2, VAR_0);
            goto node_error;
        }
    }

    if (VAR_5)
        VAR_5->nchild++;

    return VAR_7;

 node_error:
    FUNC_4(VAR_7);
    return ((void*)0);
}

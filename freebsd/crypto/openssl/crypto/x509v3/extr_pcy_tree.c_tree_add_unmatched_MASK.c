
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int X509_POLICY_TREE ;
struct TYPE_15__ {TYPE_1__* data; } ;
typedef TYPE_3__ X509_POLICY_NODE ;
typedef int X509_POLICY_LEVEL ;
struct TYPE_16__ {int flags; int qualifier_set; } ;
typedef TYPE_4__ X509_POLICY_DATA ;
struct TYPE_17__ {TYPE_2__* anyPolicy; } ;
typedef TYPE_5__ X509_POLICY_CACHE ;
struct TYPE_14__ {int qualifier_set; } ;
struct TYPE_13__ {int * valid_policy; } ;
typedef int ASN1_OBJECT ;


 int VAR_0 ;
 int * FUNC_0 (int *,TYPE_4__*,TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int *,int const*,int ) ;

__attribute__((used)) static int FUNC_4(X509_POLICY_LEVEL *VAR_1,
                              const X509_POLICY_CACHE *VAR_2,
                              const ASN1_OBJECT *VAR_3,
                              X509_POLICY_NODE *VAR_4, X509_POLICY_TREE *VAR_5)
{
    X509_POLICY_DATA *VAR_6;

    if (VAR_3 == ((void*)0))
        VAR_3 = VAR_4->data->valid_policy;




    if ((VAR_6 = FUNC_3(((void*)0), VAR_3, FUNC_1(VAR_4))) == ((void*)0))
        return 0;


    VAR_6->qualifier_set = VAR_2->anyPolicy->qualifier_set;
    VAR_6->flags |= VAR_0;
    if (FUNC_0(VAR_1, VAR_6, VAR_4, VAR_5) == ((void*)0)) {
        FUNC_2(VAR_6);
        return 0;
    }
    return 1;
}

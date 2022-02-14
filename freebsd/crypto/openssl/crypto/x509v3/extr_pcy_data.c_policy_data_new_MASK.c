
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * qualifier_set; int * valid_policy; int flags; int * expected_policy_set; } ;
typedef TYPE_1__ X509_POLICY_DATA ;
struct TYPE_8__ {int * qualifiers; int * policyid; } ;
typedef TYPE_2__ POLICYINFO ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 () ;

X509_POLICY_DATA *FUNC_6(POLICYINFO *VAR_3,
                                  const ASN1_OBJECT *VAR_4, int VAR_5)
{
    X509_POLICY_DATA *VAR_6;
    ASN1_OBJECT *VAR_7;

    if (VAR_3 == ((void*)0) && VAR_4 == ((void*)0))
        return ((void*)0);
    if (VAR_4) {
        VAR_7 = FUNC_1(VAR_4);
        if (VAR_7 == ((void*)0))
            return ((void*)0);
    } else
        VAR_7 = ((void*)0);
    VAR_6 = FUNC_3(sizeof(*VAR_6));
    if (VAR_6 == ((void*)0)) {
        FUNC_4(VAR_2, VAR_0);
        return ((void*)0);
    }
    VAR_6->expected_policy_set = FUNC_5();
    if (VAR_6->expected_policy_set == ((void*)0)) {
        FUNC_2(VAR_6);
        FUNC_0(VAR_7);
        FUNC_4(VAR_2, VAR_0);
        return ((void*)0);
    }

    if (VAR_5)
        VAR_6->flags = VAR_1;

    if (VAR_7)
        VAR_6->valid_policy = VAR_7;
    else {
        VAR_6->valid_policy = VAR_3->policyid;
        VAR_3->policyid = ((void*)0);
    }

    if (VAR_3) {
        VAR_6->qualifier_set = VAR_3->qualifiers;
        VAR_3->qualifiers = ((void*)0);
    }

    return VAR_6;
}

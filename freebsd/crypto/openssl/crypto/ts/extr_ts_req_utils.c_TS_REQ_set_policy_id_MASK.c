
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* policy_id; } ;
typedef TYPE_1__ TS_REQ ;
typedef int const ASN1_OBJECT ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int const* FUNC_1 (int const*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(TS_REQ *VAR_2, const ASN1_OBJECT *VAR_3)
{
    ASN1_OBJECT *VAR_4;

    if (VAR_2->policy_id == VAR_3)
        return 1;
    VAR_4 = FUNC_1(VAR_3);
    if (VAR_4 == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return 0;
    }
    FUNC_0(VAR_2->policy_id);
    VAR_2->policy_id = VAR_4;
    return 1;
}

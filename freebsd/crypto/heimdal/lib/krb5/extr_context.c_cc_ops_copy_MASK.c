
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef TYPE_1__* krb5_context ;
typedef int krb5_cc_ops ;
typedef int cc_ops ;
struct TYPE_5__ {int num_cc_ops; int const** cc_ops; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int ** FUNC_2 (int) ;
 int FUNC_3 (int ,int const**,int) ;
 int FUNC_4 (int const**) ;

__attribute__((used)) static krb5_error_code
FUNC_5(krb5_context VAR_1, const krb5_context VAR_2)
{
    const krb5_cc_ops **VAR_3;

    VAR_1->cc_ops = ((void*)0);
    VAR_1->num_cc_ops = 0;

    if (VAR_2->num_cc_ops == 0)
 return 0;

    VAR_3 = FUNC_2(sizeof(VAR_3[0]) * VAR_2->num_cc_ops);
    if (VAR_3 == ((void*)0)) {
 FUNC_1(VAR_1, VAR_0,
          FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }

    FUNC_3(FUNC_4(VAR_3), VAR_2->cc_ops,
    sizeof(VAR_3[0]) * VAR_2->num_cc_ops);
    VAR_1->cc_ops = VAR_3;
    VAR_1->num_cc_ops = VAR_2->num_cc_ops;

    return 0;
}

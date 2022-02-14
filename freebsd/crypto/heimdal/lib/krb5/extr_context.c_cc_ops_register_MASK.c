
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef TYPE_1__* krb5_context ;
struct TYPE_5__ {scalar_t__ num_cc_ops; int * cc_ops; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_context VAR_7)
{
    VAR_7->cc_ops = ((void*)0);
    VAR_7->num_cc_ops = 0;


    FUNC_1(VAR_7, &VAR_1, VAR_0);

    FUNC_1(VAR_7, &VAR_3, VAR_0);
    FUNC_1(VAR_7, &VAR_5, VAR_0);
    FUNC_0(VAR_7);
    return 0;
}

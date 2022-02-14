
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_5__ {int client; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_0,
   krb5_ccache VAR_1,
   krb5_principal VAR_2)
{
    krb5_error_code VAR_3;
    kcm_ccache VAR_4 = FUNC_0(VAR_1);

    FUNC_1(VAR_4);

    VAR_3 = FUNC_2(VAR_0, VAR_4);
    if (VAR_3)
 return VAR_3;

    VAR_3 = FUNC_3(VAR_0, VAR_2,
         &VAR_4->client);

    return VAR_3;
}

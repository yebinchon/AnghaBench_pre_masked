
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_principal ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_4__ {int client; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_context VAR_0,
      krb5_ccache VAR_1,
      krb5_principal *VAR_2)
{
    krb5_error_code VAR_3;
    kcm_ccache VAR_4 = FUNC_0(VAR_1);

    FUNC_1(VAR_4);

    VAR_3 = FUNC_2(VAR_0, VAR_4->client,
         VAR_2);

    return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_operation ;
typedef int kcm_client ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_4__ {int * client; } ;


 int FUNC_0 (int ,int *,int ,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int *,int ,char*,TYPE_1__**) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,char**) ;
 scalar_t__ FUNC_5 (int *,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_1,
       kcm_client *VAR_2,
       kcm_operation VAR_3,
       krb5_storage *VAR_4,
       krb5_storage *VAR_5)
{
    krb5_error_code VAR_6;
    kcm_ccache VAR_7;
    char *VAR_8;

    VAR_6 = FUNC_4(VAR_4, &VAR_8);
    if (VAR_6)
 return VAR_6;

    FUNC_0(VAR_1, VAR_2, VAR_3, VAR_8);

    VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3,
        VAR_8, &VAR_7);
    if (VAR_6) {
 FUNC_1(VAR_8);
 return VAR_6;
    }

    if (VAR_7->client == ((void*)0))
 VAR_6 = VAR_0;
    else
 VAR_6 = FUNC_5(VAR_5, VAR_7->client);

    FUNC_1(VAR_8);
    FUNC_3(VAR_1, VAR_7);

    return 0;
}

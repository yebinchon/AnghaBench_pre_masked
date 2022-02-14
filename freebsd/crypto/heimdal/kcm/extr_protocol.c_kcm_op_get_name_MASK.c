
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
struct TYPE_4__ {int name; } ;


 int FUNC_0 (int ,int *,int ,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int *,int ,char*,TYPE_1__**) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,char**) ;
 scalar_t__ FUNC_5 (int *,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_0,
  kcm_client *VAR_1,
  kcm_operation VAR_2,
  krb5_storage *VAR_3,
  krb5_storage *VAR_4)

{
    krb5_error_code VAR_5;
    char *VAR_6 = ((void*)0);
    kcm_ccache VAR_7;

    VAR_5 = FUNC_4(VAR_3, &VAR_6);
    if (VAR_5)
 return VAR_5;

    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_6);

    VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2,
        VAR_6, &VAR_7);
    if (VAR_5) {
 FUNC_1(VAR_6);
 return VAR_5;
    }

    VAR_5 = FUNC_5(VAR_4, VAR_7->name);
    if (VAR_5) {
 FUNC_3(VAR_0, VAR_7);
 FUNC_1(VAR_6);
 return VAR_5;
    }

    FUNC_1(VAR_6);
    FUNC_3(VAR_0, VAR_7);
    return 0;
}

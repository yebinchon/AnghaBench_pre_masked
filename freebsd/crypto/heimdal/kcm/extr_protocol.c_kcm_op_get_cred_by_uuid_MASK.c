
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uuid ;
struct kcm_creds {int cred; } ;
typedef int ssize_t ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int kcmuuid_t ;
typedef int kcm_operation ;
typedef int kcm_client ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_5__ {int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 struct kcm_creds* FUNC_4 (int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int ,char*,TYPE_1__**) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,char**) ;
 int FUNC_9 (int *,int *,int) ;
 scalar_t__ FUNC_10 (int *,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_11(krb5_context VAR_2,
   kcm_client *VAR_3,
   kcm_operation VAR_4,
   krb5_storage *VAR_5,
   krb5_storage *VAR_6)
{
    krb5_error_code VAR_7;
    kcm_ccache VAR_8;
    char *VAR_9;
    struct kcm_creds *VAR_10;
    kcmuuid_t VAR_11;
    ssize_t VAR_12;

    VAR_7 = FUNC_8(VAR_5, &VAR_9);
    if (VAR_7)
 return VAR_7;

    FUNC_2(VAR_2, VAR_3, VAR_4, VAR_9);

    VAR_7 = FUNC_5(VAR_2, VAR_3, VAR_4,
        VAR_9, &VAR_8);
    FUNC_3(VAR_9);
    if (VAR_7)
 return VAR_7;

    VAR_12 = FUNC_9(VAR_5, &VAR_11, sizeof(VAR_11));
    if (VAR_12 != sizeof(VAR_11)) {
 FUNC_6(VAR_2, VAR_8);
 FUNC_7(VAR_2);
 return VAR_1;
    }

    VAR_10 = FUNC_4(VAR_2, VAR_8, VAR_11);
    if (VAR_10 == ((void*)0)) {
 FUNC_6(VAR_2, VAR_8);
 return VAR_0;
    }

    FUNC_0(&VAR_8->mutex);
    VAR_7 = FUNC_10(VAR_6, &VAR_10->cred);
    FUNC_1(&VAR_8->mutex);

    FUNC_6(VAR_2, VAR_8);

    return VAR_7;
}

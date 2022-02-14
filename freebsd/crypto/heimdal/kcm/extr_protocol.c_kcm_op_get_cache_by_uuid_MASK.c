
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uuid ;
typedef int ssize_t ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int kcmuuid_t ;
typedef int kcm_operation ;
typedef int kcm_client ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_5__ {int name; } ;


 int FUNC_0 (int ,int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__**) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_7(krb5_context VAR_2,
    kcm_client *VAR_3,
    kcm_operation VAR_4,
    krb5_storage *VAR_5,
    krb5_storage *VAR_6)
{
    krb5_error_code VAR_7;
    kcmuuid_t VAR_8;
    ssize_t VAR_9;
    kcm_ccache VAR_10;

    FUNC_0(VAR_2, VAR_3, VAR_4);

    VAR_9 = FUNC_5(VAR_5, &VAR_8, sizeof(VAR_8));
    if (VAR_9 != sizeof(VAR_8)) {
 FUNC_4(VAR_2);
 return VAR_0;
    }

    VAR_7 = FUNC_2(VAR_2, VAR_8, &VAR_10);
    if (VAR_7)
 return VAR_7;

    VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_10);
    if (VAR_7)
 VAR_7 = VAR_1;

    if (VAR_7 == 0)
 VAR_7 = FUNC_6(VAR_6, VAR_10->name);

    FUNC_3(VAR_2, VAR_10);

    return VAR_7;
}

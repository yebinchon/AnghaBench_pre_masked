
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint32_t ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_19__ {TYPE_7__* server; } ;
typedef TYPE_3__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache_data ;
typedef int kcm_operation ;
typedef int kcm_client ;
typedef TYPE_4__* kcm_ccache ;
struct TYPE_17__ {int len; int * val; } ;
struct TYPE_18__ {TYPE_1__ name_string; } ;
struct TYPE_21__ {TYPE_2__ name; } ;
struct TYPE_20__ {int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int *,int ,char*,TYPE_4__**) ;
 scalar_t__ FUNC_5 (int ,TYPE_4__*,int,TYPE_3__*,TYPE_3__**) ;
 int FUNC_6 (int ,TYPE_4__*,int *) ;
 int FUNC_7 (int ,TYPE_4__*) ;
 int FUNC_8 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_9 (int ,int ,int *,TYPE_3__*,TYPE_3__**) ;
 int FUNC_10 (int ,TYPE_7__*) ;
 scalar_t__ FUNC_11 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_12 (int *,char**) ;
 scalar_t__ FUNC_13 (int *,int*) ;
 scalar_t__ FUNC_14 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_15 (int ,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_16(krb5_context VAR_4,
  kcm_client *VAR_5,
  kcm_operation VAR_6,
  krb5_storage *VAR_7,
  krb5_storage *VAR_8)
{
    uint32_t VAR_9;
    krb5_creds VAR_10;
    krb5_error_code VAR_11;
    kcm_ccache VAR_12;
    char *VAR_13;
    krb5_creds *VAR_14;
    int VAR_15 = 0;

    VAR_11 = FUNC_12(VAR_7, &VAR_13);
    if (VAR_11)
 return VAR_11;

    FUNC_2(VAR_4, VAR_5, VAR_6, VAR_13);

    VAR_11 = FUNC_13(VAR_7, &VAR_9);
    if (VAR_11) {
 FUNC_3(VAR_13);
 return VAR_11;
    }

    VAR_11 = FUNC_11(VAR_7, &VAR_10);
    if (VAR_11) {
 FUNC_3(VAR_13);
 return VAR_11;
    }

    if (VAR_3 &&
 VAR_10.server->name.name_string.len == 2 &&
 FUNC_15(VAR_10.server->name.name_string.val[0], VAR_2) == 0)
    {
 FUNC_3(VAR_13);
 FUNC_8(VAR_4, &VAR_10);
 return VAR_0;
    }

    VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_6,
        VAR_13, &VAR_12);
    if (VAR_11) {
 FUNC_3(VAR_13);
 FUNC_8(VAR_4, &VAR_10);
 return VAR_11;
    }

    VAR_11 = FUNC_5(VAR_4, VAR_12, VAR_9,
       &VAR_10, &VAR_14);
    if (VAR_11 && ((VAR_9 & VAR_1) == 0) &&
 !FUNC_10(VAR_4, VAR_10.server)) {
 krb5_ccache_data VAR_16;


 FUNC_0(&VAR_12->mutex);


 FUNC_6(VAR_4, VAR_12, &VAR_16);


 VAR_11 = FUNC_9(VAR_4, 0, &VAR_16, &VAR_10, &VAR_14);
 if (VAR_11 == 0)
     VAR_15 = 1;

 FUNC_1(&VAR_12->mutex);
    }

    if (VAR_11 == 0) {
 VAR_11 = FUNC_14(VAR_8, VAR_14);
    }

    FUNC_3(VAR_13);
    FUNC_8(VAR_4, &VAR_10);
    FUNC_7(VAR_4, VAR_12);

    if (VAR_15)
 FUNC_8(VAR_4, VAR_14);

    return VAR_11;
}

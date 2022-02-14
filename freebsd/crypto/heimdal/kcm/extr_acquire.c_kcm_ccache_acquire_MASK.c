
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int krb5_get_init_creds_opt ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_creds ;
typedef int krb5_context ;
typedef int krb5_const_realm ;
typedef int krb5_ccache_data ;
typedef TYPE_3__* kcm_ccache ;
typedef int cred ;
struct TYPE_10__ {scalar_t__ length; } ;
struct TYPE_13__ {TYPE_1__ keyvalue; } ;
struct TYPE_11__ {int * keytab; TYPE_4__ keyblock; } ;
struct TYPE_12__ {int flags; scalar_t__ tkt_life; scalar_t__ renew_life; int mutex; int name; TYPE_2__ key; int client; int * server; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*,int *,int ,int **) ;
 int FUNC_6 (int ,TYPE_3__*,int *) ;
 int FUNC_7 (int ,char*,int ,...) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int *,int ,TYPE_4__*,int ,char*,int *) ;
 scalar_t__ FUNC_12 (int ,int *,int ,int *,int ,char*,int *) ;
 scalar_t__ FUNC_13 (int ,int **) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,char*,int ,int *) ;
 int FUNC_16 (int *,scalar_t__) ;
 int FUNC_17 (int *,scalar_t__) ;
 int FUNC_18 (int ,int ) ;
 scalar_t__ FUNC_19 (int ,int *,char**) ;
 int FUNC_20 (int *,int ,int) ;

krb5_error_code
FUNC_21(krb5_context VAR_3,
     kcm_ccache VAR_4,
     krb5_creds **VAR_5)
{
    krb5_error_code VAR_6 = 0;
    krb5_creds VAR_7;
    krb5_const_realm VAR_8;
    krb5_get_init_creds_opt *VAR_9 = ((void*)0);
    krb5_ccache_data VAR_10;
    char *VAR_11 = ((void*)0);

    FUNC_20(&VAR_7, 0, sizeof(VAR_7));

    FUNC_2(VAR_4);


    if (VAR_4->flags & VAR_0) {
 if (VAR_4->key.keyblock.keyvalue.length == 0)
     FUNC_8(VAR_3,
   "kcm_ccache_acquire: KCM_FLAGS_USE_CACHED_KEY without key");
    } else if (VAR_4->flags & VAR_1) {
 if (VAR_4->key.keytab == ((void*)0))
     FUNC_8(VAR_3,
   "kcm_ccache_acquire: KCM_FLAGS_USE_KEYTAB without keytab");
    } else {
 FUNC_7(0, "Cannot acquire initial credentials for cache %s without key",
  VAR_4->name);
 return VAR_2;
    }

    FUNC_0(&VAR_4->mutex);


    FUNC_6(VAR_3, VAR_4, &VAR_10);


    if (VAR_4->server != ((void*)0)) {
 VAR_6 = FUNC_19(VAR_3, VAR_4->server, &VAR_11);
 if (VAR_6) {
     FUNC_7(0, "Failed to unparse service principal name for cache %s: %s",
      VAR_4->name, FUNC_10(VAR_3, VAR_6));
     return VAR_6;
 }
    }

    VAR_8 = FUNC_18(VAR_3, VAR_4->client);

    VAR_6 = FUNC_13(VAR_3, &VAR_9);
    if (VAR_6)
 goto out;
    FUNC_15(VAR_3, "kcm", VAR_8, VAR_9);
    if (VAR_4->tkt_life != 0)
 FUNC_17(VAR_9, VAR_4->tkt_life);
    if (VAR_4->renew_life != 0)
 FUNC_16(VAR_9, VAR_4->renew_life);

    if (VAR_4->flags & VAR_0) {
 VAR_6 = FUNC_11(VAR_3,
        &VAR_7,
        VAR_4->client,
        &VAR_4->key.keyblock,
        0,
        VAR_11,
        VAR_9);
    } else {

 VAR_6 = FUNC_12(VAR_3,
      &VAR_7,
      VAR_4->client,
      VAR_4->key.keytab,
      0,
      VAR_11,
      VAR_9);
    }

    if (VAR_6) {
 FUNC_7(0, "Failed to acquire credentials for cache %s: %s",
  VAR_4->name, FUNC_10(VAR_3, VAR_6));
 if (VAR_11 != ((void*)0))
     FUNC_3(VAR_11);
 goto out;
    }

    if (VAR_11 != ((void*)0))
 FUNC_3(VAR_11);


    FUNC_4(VAR_3, VAR_4);

    VAR_6 = FUNC_5(VAR_3, VAR_4, &VAR_7, 0, VAR_5);
    if (VAR_6) {
 FUNC_7(0, "Failed to store credentials for cache %s: %s",
  VAR_4->name, FUNC_10(VAR_3, VAR_6));
 FUNC_9(VAR_3, &VAR_7);
 goto out;
    }

out:
    if (VAR_9)
 FUNC_14(VAR_3, VAR_9);

    FUNC_1(&VAR_4->mutex);

    return VAR_6;
}

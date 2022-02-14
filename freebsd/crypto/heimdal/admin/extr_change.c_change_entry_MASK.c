
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_principal ;
typedef scalar_t__ krb5_kvno ;
struct TYPE_6__ {int keyblock; scalar_t__ vno; int timestamp; int principal; } ;
typedef TYPE_1__ krb5_keytab_entry ;
typedef int krb5_keytab ;
typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_7__ {char* realm; char* admin_server; int mask; int kadmind_port; } ;
typedef TYPE_2__ kadm5_config_params ;
typedef int conf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int ,char*,int ,int ,TYPE_2__*,int ,int ,void**) ;
 scalar_t__ FUNC_4 (void*,int ,int **,int*) ;
 int VAR_6 ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,TYPE_1__*) ;
 char* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_9 (int ,int ,char**) ;
 int FUNC_10 (int ,scalar_t__,char*,...) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;
 void* FUNC_12 (char const*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static krb5_error_code
FUNC_14 (krb5_keytab VAR_7,
       krb5_principal VAR_8, krb5_kvno VAR_9,
       const char *VAR_10, const char *VAR_11, int VAR_12)
{
    krb5_error_code VAR_13;
    kadm5_config_params VAR_14;
    void *VAR_15;
    char *VAR_16;
    krb5_keyblock *VAR_17;
    int VAR_18;
    int VAR_19;

    VAR_13 = FUNC_9 (VAR_5, VAR_8, &VAR_16);
    if (VAR_13) {
 FUNC_10 (VAR_5, VAR_13, "krb5_unparse_name");
 return VAR_13;
    }

    FUNC_11 (&VAR_14, 0, sizeof(VAR_14));

    if(VAR_10 == ((void*)0))
 VAR_10 = FUNC_7(VAR_5, VAR_8);
    VAR_14.realm = FUNC_12(VAR_10);
    if (VAR_14.realm == ((void*)0)) {
 FUNC_0 (VAR_16);
 FUNC_8(VAR_5, VAR_0, "malloc failed");
 return VAR_0;
    }
    VAR_14.mask |= VAR_4;

    if (VAR_11) {
 VAR_14.admin_server = FUNC_12(VAR_11);
 if (VAR_14.admin_server == ((void*)0)) {
     FUNC_0(VAR_16);
     FUNC_0(VAR_14.realm);
     FUNC_8(VAR_5, VAR_0, "malloc failed");
     return VAR_0;
 }
 VAR_14.mask |= VAR_2;
    }

    if (VAR_12) {
 VAR_14.kadmind_port = FUNC_1(VAR_12);
 VAR_14.mask |= VAR_3;
    }

    VAR_13 = FUNC_3 (VAR_5,
        VAR_16,
        VAR_6,
        VAR_1,
        &VAR_14, 0, 0,
        &VAR_15);
    FUNC_0(VAR_14.admin_server);
    FUNC_0(VAR_14.realm);
    if (VAR_13) {
 FUNC_10 (VAR_5, VAR_13,
     "kadm5_c_init_with_skey_ctx: %s:", VAR_16);
 FUNC_0 (VAR_16);
 return VAR_13;
    }
    VAR_13 = FUNC_4 (VAR_15, VAR_8, &VAR_17, &VAR_18);
    FUNC_2 (VAR_15);
    if (VAR_13) {
 FUNC_10(VAR_5, VAR_13, "kadm5_randkey_principal: %s:", VAR_16);
 FUNC_0 (VAR_16);
 return VAR_13;
    }
    FUNC_0 (VAR_16);
    for (VAR_19 = 0; VAR_19 < VAR_18; ++VAR_19) {
 krb5_keytab_entry VAR_20;

 VAR_20.principal = VAR_8;
 VAR_20.timestamp = FUNC_13 (((void*)0));
 VAR_20.vno = VAR_9 + 1;
 VAR_20.keyblock = VAR_17[VAR_19];

 VAR_13 = FUNC_6 (VAR_5, VAR_7, &VAR_20);
 if (VAR_13)
     FUNC_10 (VAR_5, VAR_13, "krb5_kt_add_entry");
 FUNC_5 (VAR_5, &VAR_17[VAR_19]);
    }
    return VAR_13;
}

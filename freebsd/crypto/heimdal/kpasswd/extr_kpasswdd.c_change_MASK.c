
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct sockaddr {int dummy; } ;
struct TYPE_26__ {char* realm; int name; } ;
typedef TYPE_1__ krb5_principal_data ;
typedef TYPE_2__* krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_28__ {char* data; int length; } ;
typedef TYPE_3__ krb5_data ;
typedef int krb5_auth_context ;
struct TYPE_29__ {char** targrealm; int mask; int realm; int * targname; TYPE_3__ newpasswd; } ;
typedef TYPE_4__ kadm5_config_params ;
typedef int conf ;
typedef int chpw ;
struct TYPE_27__ {int realm; } ;
typedef TYPE_4__ ChangePasswdDataMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (void*,int ,TYPE_2__*) ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (char*,int,TYPE_4__*,size_t*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_4__*) ;
 char* FUNC_4 (int ,TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (int ,char*,int *,int ,TYPE_4__*,int ,int ,void**) ;
 scalar_t__ FUNC_7 (void*,TYPE_2__*,char*) ;
 scalar_t__ FUNC_8 (int ,TYPE_3__*,TYPE_3__**) ;
 scalar_t__ FUNC_9 (int ,TYPE_1__*,TYPE_2__**) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (int ,TYPE_3__*) ;
 int FUNC_12 (int ,char const*) ;
 int FUNC_13 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_14 (int ,char**) ;
 char* FUNC_15 (int ,scalar_t__) ;
 scalar_t__ FUNC_16 (int ,TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_17 (int ,TYPE_2__*,char**) ;
 int FUNC_18 (int ,scalar_t__,char*,...) ;
 int FUNC_19 (int ,char*,...) ;
 int FUNC_20 (TYPE_4__*,int ,int) ;
 int FUNC_21 (int ,int,struct sockaddr*,int,int,char const*) ;

__attribute__((used)) static void
FUNC_22 (krb5_auth_context VAR_11,
 krb5_principal VAR_12,
 uint16_t VAR_13,
 int VAR_14,
 struct sockaddr *VAR_15,
 int VAR_16,
 krb5_data *VAR_17)
{
    krb5_error_code VAR_18;
    char *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
    const char *VAR_21;
    kadm5_config_params VAR_22;
    void *VAR_23 = ((void*)0);
    krb5_principal VAR_24 = ((void*)0);
    krb5_data *VAR_25 = ((void*)0);
    char *VAR_26;
    ChangePasswdDataMS VAR_27;

    FUNC_20 (&VAR_22, 0, sizeof(VAR_22));
    FUNC_20(&VAR_27, 0, sizeof(VAR_27));

    if (VAR_13 == VAR_7) {
 VAR_18 = FUNC_8(VAR_10, VAR_17, &VAR_25);
 if (VAR_18) {
     FUNC_18 (VAR_10, VAR_18, "krb5_copy_data");
     FUNC_21 (VAR_11, VAR_14, VAR_15, VAR_16, VAR_4,
   "out out memory copying password");
     return;
 }
 VAR_24 = VAR_12;
    } else if (VAR_13 == VAR_8) {
 size_t VAR_28;

 VAR_18 = FUNC_1(VAR_17->data, VAR_17->length,
     &VAR_27, &VAR_28);
 if (VAR_18) {
     FUNC_18 (VAR_10, VAR_18, "decode_ChangePasswdDataMS");
     FUNC_21 (VAR_11, VAR_14, VAR_15, VAR_16, VAR_4,
   "malformed ChangePasswdData");
     return;
 }


 VAR_18 = FUNC_8(VAR_10, &VAR_27.newpasswd, &VAR_25);
 if (VAR_18) {
     FUNC_18 (VAR_10, VAR_18, "krb5_copy_data");
     FUNC_21 (VAR_11, VAR_14, VAR_15, VAR_16, VAR_4,
   "out out memory copying password");
     goto out;
 }

 if (VAR_27.targname == ((void*)0) && VAR_27.targrealm != ((void*)0)) {
     FUNC_18 (VAR_10, VAR_18, "kadm5_init_with_password_ctx");
     FUNC_21 (VAR_11, VAR_14, VAR_15, VAR_16,
   VAR_4,
   "targrealm but not targname");
     goto out;
 }

 if (VAR_27.targname) {
     krb5_principal_data VAR_29;

     VAR_29.name = *VAR_27.targname;
     VAR_29.realm = *VAR_27.targrealm;
     if (VAR_29.realm == ((void*)0)) {
  VAR_18 = FUNC_14(VAR_10, &VAR_29.realm);

  if (VAR_18) {
      FUNC_19 (VAR_10,
    "kadm5_init_with_password_ctx: "
    "failed to allocate realm");
      FUNC_21 (VAR_11, VAR_14, VAR_15, VAR_16,
    VAR_5,
    "failed to allocate realm");
      goto out;
  }
     }
     VAR_18 = FUNC_9(VAR_10, &VAR_29, &VAR_24);
     if (*VAR_27.targrealm == ((void*)0))
  FUNC_2(VAR_29.realm);
     if (VAR_18) {
  FUNC_18(VAR_10, VAR_18, "krb5_copy_principal");
  FUNC_21(VAR_11, VAR_14, VAR_15, VAR_16,
      VAR_3,
      "failed to allocate principal");
  goto out;
     }
 } else
     VAR_24 = VAR_12;
    } else {
 FUNC_19 (VAR_10, "kadm5_init_with_password_ctx: unknown proto");
 FUNC_21 (VAR_11, VAR_14, VAR_15, VAR_16,
      VAR_3,
      "Unknown protocol used");
 return;
    }

    VAR_18 = FUNC_17 (VAR_10, VAR_12, &VAR_20);
    if (VAR_18) {
 FUNC_18 (VAR_10, VAR_18, "unparse_name failed");
 FUNC_21 (VAR_11, VAR_14, VAR_15, VAR_16,
      VAR_3, "out of memory error");
 goto out;
    }

    VAR_22.realm = VAR_24->realm;
    VAR_22.mask |= VAR_1;

    VAR_18 = FUNC_6(VAR_10,
           VAR_20,
           ((void*)0),
           VAR_0,
           &VAR_22, 0, 0,
           &VAR_23);
    if (VAR_18) {
 FUNC_18 (VAR_10, VAR_18, "kadm5_init_with_password_ctx");
 FUNC_21 (VAR_11, VAR_14, VAR_15, VAR_16, 2,
      "Internal error");
 goto out;
    }

    VAR_18 = FUNC_17(VAR_10, VAR_24, &VAR_19);
    if (VAR_18) {
 FUNC_18 (VAR_10, VAR_18, "unparse_name failed");
 FUNC_21 (VAR_11, VAR_14, VAR_15, VAR_16,
      VAR_3, "out of memory error");
 goto out;
    }





    if (FUNC_16(VAR_10, VAR_12, VAR_24) == VAR_9) {

 VAR_21 = FUNC_4 (VAR_10, VAR_24,
         VAR_25);
 if (VAR_21 != ((void*)0) ) {
     FUNC_19 (VAR_10,
   "%s didn't pass password quality check with error: %s",
   VAR_19, VAR_21);
     FUNC_21 (VAR_11, VAR_14, VAR_15, VAR_16,
   VAR_5, VAR_21);
     goto out;
 }
 FUNC_19 (VAR_10, "Changing password for %s", VAR_19);
    } else {
 VAR_18 = FUNC_0(VAR_23, VAR_2,
       VAR_24);
 if (VAR_18) {
     FUNC_18 (VAR_10, VAR_18,
         "Check ACL failed for %s for changing %s password",
         VAR_20, VAR_19);
     FUNC_21 (VAR_11, VAR_14, VAR_15, VAR_16,
   VAR_3, "permission denied");
     goto out;
 }
 FUNC_19 (VAR_10, "%s is changing password for %s", VAR_20, VAR_19);
    }

    VAR_18 = FUNC_10(VAR_25, VAR_25->length + 1);
    if (VAR_18) {
 FUNC_18 (VAR_10, VAR_18, "malloc: out of memory");
 FUNC_21 (VAR_11, VAR_14, VAR_15, VAR_16, VAR_3,
      "Internal error");
 goto out;
    }
    VAR_26 = VAR_25->data;
    VAR_26[VAR_25->length - 1] = '\0';

    VAR_18 = FUNC_7 (VAR_23, VAR_24, VAR_26);
    FUNC_11 (VAR_10, VAR_25);
    VAR_25 = ((void*)0);
    if (VAR_18) {
 const char *VAR_30 = FUNC_15(VAR_10, VAR_18);
 FUNC_19(VAR_10, "kadm5_s_chpass_principal_cond: %s", VAR_30);
 FUNC_21 (VAR_11, VAR_14, VAR_15, VAR_16, VAR_5,
      VAR_30 ? VAR_30 : "Internal error");
 FUNC_12(VAR_10, VAR_30);
 goto out;
    }
    FUNC_21 (VAR_11, VAR_14, VAR_15, VAR_16, VAR_6,
  "Password changed");
out:
    FUNC_3(&VAR_27);
    if (VAR_24 != VAR_12)
 FUNC_13(VAR_10, VAR_24);
    if (VAR_20)
 FUNC_2(VAR_20);
    if (VAR_19)
 FUNC_2(VAR_19);
    if (VAR_25)
 FUNC_11(VAR_10, VAR_25);
    if (VAR_23)
 FUNC_5 (VAR_23);
}

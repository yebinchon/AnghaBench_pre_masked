
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_9__ ;
typedef struct TYPE_40__ TYPE_8__ ;
typedef struct TYPE_39__ TYPE_7__ ;
typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_25__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_12__ ;
typedef struct TYPE_30__ TYPE_11__ ;
typedef struct TYPE_29__ TYPE_10__ ;


typedef int time_t ;
struct sockaddr {int dummy; } ;
struct TYPE_34__ {int key; } ;
struct TYPE_37__ {TYPE_2__ ticket; } ;
typedef TYPE_5__ krb5_ticket ;
typedef int krb5_principal ;
typedef int krb5_keyblock ;
typedef int krb5_kdc_configuration ;
typedef scalar_t__ krb5_flags ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
struct TYPE_38__ {int length; int data; } ;
typedef TYPE_6__ krb5_data ;
typedef int krb5_crypto ;
typedef int krb5_context ;
typedef TYPE_7__* krb5_authenticator ;
typedef int * krb5_auth_context ;
struct TYPE_35__ {int etype; int * kvno; } ;
struct TYPE_36__ {TYPE_3__ enc_part; int realm; int sname; } ;
struct TYPE_40__ {TYPE_4__ ticket; } ;
typedef TYPE_8__ krb5_ap_req ;
struct TYPE_33__ {int kvno; } ;
struct TYPE_41__ {TYPE_25__ entry; } ;
typedef TYPE_9__ hdb_entry_ex ;
typedef int ap_req ;
struct TYPE_39__ {int cusec; int ctime; } ;
struct TYPE_32__ {scalar_t__ validate; } ;
struct TYPE_31__ {int enc_authorization_data; TYPE_1__ kdc_options; } ;
struct TYPE_30__ {int key; } ;
struct TYPE_29__ {int padata_value; } ;
typedef TYPE_10__ PA_DATA ;
typedef TYPE_11__ Key ;
typedef TYPE_12__ KDC_REQ_BODY ;
typedef char AuthorizationData ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (int ,int *,int ,int ,int *,int *,TYPE_9__**) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,char*,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,TYPE_25__*,int ,TYPE_11__**) ;
 int FUNC_8 (int ,int *,int,char*,...) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *,TYPE_7__**) ;
 scalar_t__ FUNC_11 (int ,int *,int **) ;
 scalar_t__ FUNC_12 (int ,int *,int **) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ,int *,int ,int *) ;
 scalar_t__ FUNC_15 (int ,int *,TYPE_8__*) ;
 scalar_t__ FUNC_16 (int ,int ,unsigned int,int ,TYPE_6__*) ;
 int FUNC_17 (int ,int ,char**) ;
 int FUNC_18 (int ,TYPE_7__**) ;
 int FUNC_19 (int ,char const*) ;
 int FUNC_20 (int ,int ) ;
 char* FUNC_21 (int ,scalar_t__) ;
 scalar_t__ FUNC_22 (int ,int ,char**) ;
 scalar_t__ FUNC_23 (int ,int **,TYPE_8__*,int ,int *,scalar_t__,scalar_t__*,TYPE_5__**,int ) ;
 void* FUNC_24 (int) ;
 int FUNC_25 (TYPE_8__*,int ,int) ;
 scalar_t__ FUNC_26 (int ,int *,int *,TYPE_12__*,char const**,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_27(krb5_context VAR_10,
    krb5_kdc_configuration *VAR_11,
    KDC_REQ_BODY *VAR_12,
    const PA_DATA *VAR_13,
    hdb_entry_ex **VAR_14,
    krb5_enctype *VAR_15,
    krb5_ticket **VAR_16,
    const char **VAR_17,
    const char *VAR_18,
    const struct sockaddr *VAR_19,
    time_t **VAR_20,
    int **VAR_21,
    AuthorizationData **VAR_22,
    krb5_keyblock **VAR_23,
    int *VAR_24)
{
    static char VAR_25[] = "<unparse_name failed>";
    krb5_ap_req VAR_26;
    krb5_error_code VAR_27;
    krb5_principal VAR_28;
    krb5_auth_context VAR_29 = ((void*)0);
    krb5_flags VAR_30;
    krb5_flags VAR_31;
    krb5_crypto VAR_32;
    Key *VAR_33;
    krb5_keyblock *VAR_34 = ((void*)0);
    unsigned VAR_35;

    *VAR_22 = ((void*)0);
    *VAR_20 = ((void*)0);
    *VAR_21 = ((void*)0);
    *VAR_23 = ((void*)0);

    FUNC_25(&VAR_26, 0, sizeof(VAR_26));
    VAR_27 = FUNC_15(VAR_10, &VAR_13->padata_value, &VAR_26);
    if(VAR_27){
 const char *VAR_36 = FUNC_21(VAR_10, VAR_27);
 FUNC_8(VAR_10, VAR_11, 0, "Failed to decode AP-REQ: %s", VAR_36);
 FUNC_19(VAR_10, VAR_36);
 goto out;
    }

    if(!FUNC_6(&VAR_26.ticket.sname)){

 FUNC_8(VAR_10, VAR_11, 0, "PA-DATA is not a ticket-granting ticket");
 VAR_27 = VAR_2;
 goto out;
    }

    FUNC_2(VAR_10,
           &VAR_28,
           VAR_26.ticket.sname,
           VAR_26.ticket.realm);

    VAR_27 = FUNC_1(VAR_10, VAR_11, VAR_28, VAR_1, VAR_26.ticket.enc_part.kvno, ((void*)0), VAR_14);

    if(VAR_27 == VAR_0) {
 char *VAR_37;
 VAR_27 = FUNC_22(VAR_10, VAR_28, &VAR_37);
 if (VAR_27 != 0)
     VAR_37 = VAR_25;
 FUNC_20(VAR_10, VAR_28);
 FUNC_8(VAR_10, VAR_11, 5, "Ticket-granting ticket account %s does not have secrets at this KDC, need to proxy", VAR_37);
 if (VAR_27 == 0)
     FUNC_4(VAR_37);
 VAR_27 = VAR_0;
 goto out;
    } else if(VAR_27){
 const char *VAR_38 = FUNC_21(VAR_10, VAR_27);
 char *VAR_39;
 VAR_27 = FUNC_22(VAR_10, VAR_28, &VAR_39);
 if (VAR_27 != 0)
     VAR_39 = VAR_25;
 FUNC_20(VAR_10, VAR_28);
 FUNC_8(VAR_10, VAR_11, 0,
  "Ticket-granting ticket not found in database: %s", VAR_38);
 FUNC_19(VAR_10, VAR_38);
 if (VAR_27 == 0)
     FUNC_4(VAR_39);
 VAR_27 = VAR_5;
 goto out;
    }

    if(VAR_26.ticket.enc_part.kvno &&
       *VAR_26.ticket.enc_part.kvno != (*VAR_14)->entry.kvno){
 char *VAR_40;

 VAR_27 = FUNC_22 (VAR_10, VAR_28, &VAR_40);
 FUNC_20(VAR_10, VAR_28);
 if (VAR_27 != 0)
     VAR_40 = VAR_25;
 FUNC_8(VAR_10, VAR_11, 0,
  "Ticket kvno = %d, DB kvno = %d (%s)",
  *VAR_26.ticket.enc_part.kvno,
  (*VAR_14)->entry.kvno,
  VAR_40);
 if (VAR_27 == 0)
     FUNC_4 (VAR_40);
 VAR_27 = VAR_3;
 goto out;
    }

    *VAR_15 = VAR_26.ticket.enc_part.etype;

    VAR_27 = FUNC_7(VAR_10, &(*VAR_14)->entry,
     VAR_26.ticket.enc_part.etype, &VAR_33);
    if(VAR_27){
 char *VAR_41 = ((void*)0), *VAR_42 = ((void*)0);

 FUNC_17(VAR_10, VAR_26.ticket.enc_part.etype, &VAR_41);
 FUNC_22(VAR_10, VAR_28, &VAR_42);
  FUNC_8(VAR_10, VAR_11, 0,
  "No server key with enctype %s found for %s",
  VAR_41 ? VAR_41 : "<unknown enctype>",
  VAR_42 ? VAR_42 : "<unparse_name failed>");
 FUNC_4(VAR_41);
 FUNC_4(VAR_42);
 VAR_27 = VAR_3;
 goto out;
    }

    if (VAR_12->kdc_options.validate)
 VAR_31 = VAR_9;
    else
 VAR_31 = 0;

    VAR_27 = FUNC_23(VAR_10,
         &VAR_29,
         &VAR_26,
         VAR_28,
         &VAR_33->key,
         VAR_31,
         &VAR_30,
         VAR_16,
         VAR_6);

    FUNC_20(VAR_10, VAR_28);
    if(VAR_27) {
 const char *VAR_43 = FUNC_21(VAR_10, VAR_27);
 FUNC_8(VAR_10, VAR_11, 0, "Failed to verify AP-REQ: %s", VAR_43);
 FUNC_19(VAR_10, VAR_43);
 goto out;
    }

    {
 krb5_authenticator VAR_44;

 VAR_27 = FUNC_10(VAR_10, VAR_29, &VAR_44);
 if (VAR_27 == 0) {
     *VAR_20 = FUNC_24(sizeof(**VAR_20));
     if (*VAR_20 == ((void*)0)) {
  FUNC_18(VAR_10, &VAR_44);
  FUNC_8(VAR_10, VAR_11, 0, "malloc failed");
  goto out;
     }
     **VAR_20 = VAR_44->ctime;
     *VAR_21 = FUNC_24(sizeof(**VAR_21));
     if (*VAR_21 == ((void*)0)) {
  FUNC_18(VAR_10, &VAR_44);
  FUNC_8(VAR_10, VAR_11, 0, "malloc failed");
  goto out;
     }
     **VAR_21 = VAR_44->cusec;
     FUNC_18(VAR_10, &VAR_44);
 }
    }

    VAR_27 = FUNC_26(VAR_10, VAR_11,
      VAR_29, VAR_12, VAR_17, &(*VAR_16)->ticket.key);
    if (VAR_27) {
 FUNC_9(VAR_10, VAR_29);
 goto out;
    }

    VAR_35 = VAR_8;
    *VAR_24 = 1;

    VAR_27 = FUNC_12(VAR_10, VAR_29, &VAR_34);
    if(VAR_27){
 const char *VAR_45 = FUNC_21(VAR_10, VAR_27);
 FUNC_9(VAR_10, VAR_29);
 FUNC_8(VAR_10, VAR_11, 0, "Failed to get remote subkey: %s", VAR_45);
 FUNC_19(VAR_10, VAR_45);
 goto out;
    }
    if(VAR_34 == ((void*)0)){
 VAR_35 = VAR_7;
 *VAR_24 = 0;

 VAR_27 = FUNC_11(VAR_10, VAR_29, &VAR_34);
 if(VAR_27) {
     const char *VAR_46 = FUNC_21(VAR_10, VAR_27);
     FUNC_9(VAR_10, VAR_29);
     FUNC_8(VAR_10, VAR_11, 0, "Failed to get session key: %s", VAR_46);
     FUNC_19(VAR_10, VAR_46);
     goto out;
 }
    }
    if(VAR_34 == ((void*)0)){
 FUNC_9(VAR_10, VAR_29);
 FUNC_8(VAR_10, VAR_11, 0,
  "Failed to get key for enc-authorization-data");
 VAR_27 = VAR_4;
 goto out;
    }

    *VAR_23 = VAR_34;

    if (VAR_12->enc_authorization_data) {
 krb5_data VAR_47;

 VAR_27 = FUNC_14(VAR_10, VAR_34, 0, &VAR_32);
 if (VAR_27) {
     const char *VAR_48 = FUNC_21(VAR_10, VAR_27);
     FUNC_9(VAR_10, VAR_29);
     FUNC_8(VAR_10, VAR_11, 0, "krb5_crypto_init failed: %s", VAR_48);
     FUNC_19(VAR_10, VAR_48);
     goto out;
 }
 VAR_27 = FUNC_16 (VAR_10,
       VAR_32,
       VAR_35,
       VAR_12->enc_authorization_data,
       &VAR_47);
 FUNC_13(VAR_10, VAR_32);
 if(VAR_27){
     FUNC_9(VAR_10, VAR_29);
     FUNC_8(VAR_10, VAR_11, 0,
      "Failed to decrypt enc-authorization-data");
     VAR_27 = VAR_4;
     goto out;
 }
 FUNC_0(*VAR_22);
 if (*VAR_22 == ((void*)0)) {
     FUNC_9(VAR_10, VAR_29);
     VAR_27 = VAR_4;
     goto out;
 }
 VAR_27 = FUNC_3(VAR_47.data, VAR_47.length, *VAR_22, ((void*)0));
 if(VAR_27){
     FUNC_9(VAR_10, VAR_29);
     FUNC_4(*VAR_22);
     *VAR_22 = ((void*)0);
     FUNC_8(VAR_10, VAR_11, 0, "Failed to decode authorization data");
     VAR_27 = VAR_4;
     goto out;
 }
    }

    FUNC_9(VAR_10, VAR_29);

out:
    FUNC_5(&VAR_26);

    return VAR_27;
}

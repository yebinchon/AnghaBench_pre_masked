
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_20__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {int sa_family; } ;
typedef int ss ;
typedef int socklen_t ;
struct TYPE_25__ {int server; } ;
typedef TYPE_1__ krb5_ticket ;
typedef int krb5_socket_t ;
typedef int krb5_principal ;
typedef int krb5_log_facility ;
typedef int krb5_keytab ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_27__ {scalar_t__ length; int * data; } ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_context ;
typedef TYPE_3__* krb5_authenticator ;
typedef int * krb5_auth_context ;
struct TYPE_26__ {int principal; } ;
struct TYPE_29__ {TYPE_20__ entry; } ;
typedef TYPE_4__ hdb_entry_ex ;
typedef int entry ;
typedef int addr_name ;
struct TYPE_30__ {scalar_t__ (* hdb_store ) (int ,TYPE_5__*,int ,TYPE_4__*) ;scalar_t__ (* hdb_rename ) (int ,TYPE_5__*,int *) ;scalar_t__ (* hdb_close ) (int ,TYPE_5__*) ;scalar_t__ (* hdb_open ) (int ,TYPE_5__*,int,int) ;} ;
struct TYPE_28__ {int crealm; int cname; } ;
typedef TYPE_5__ HDB ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 int VAR_8 ;
 int FUNC_1 (char**,char*,int *) ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_5 (int ,int ,int,char**,int*) ;
 scalar_t__ FUNC_6 (int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_7 (int ,TYPE_5__**,char*) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ,TYPE_4__*) ;
 int VAR_12 ;
 int FUNC_10 (int ,TYPE_5__*,TYPE_4__*,int ) ;
 scalar_t__ FUNC_11 (int ,TYPE_2__*,TYPE_20__*) ;
 scalar_t__ VAR_13 ;
 int * FUNC_12 (int ,int ,char*,int) ;
 int VAR_14 ;
 scalar_t__ FUNC_13 (int ,int *,TYPE_3__**) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int ,int,scalar_t__,char*,...) ;
 int FUNC_16 (int ,int,char*,char*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,TYPE_1__*) ;
 int FUNC_19 (int ,char*,char*,int ) ;
 scalar_t__ FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int ,int ) ;
 scalar_t__ FUNC_22 (int ,int *) ;
 scalar_t__ FUNC_23 (int ,int *) ;
 scalar_t__ FUNC_24 (int ,int *,int *) ;
 int FUNC_25 (int ,int *,int ,char*,...) ;
 scalar_t__ FUNC_26 (int ,int *,int *,char*,char*,int *) ;
 scalar_t__ FUNC_27 (int ,char*,int **) ;
 int FUNC_28 (int ,int ,int ) ;
 scalar_t__ FUNC_29 (int ,int *,TYPE_2__*) ;
 scalar_t__ FUNC_30 (int ,int *,int *,TYPE_2__*) ;
 scalar_t__ FUNC_31 (int ,int **,int *,int ,int *,int ,int ,TYPE_1__**) ;
 int FUNC_32 (int ,int *) ;
 int FUNC_33 (int ,int *) ;
 scalar_t__ FUNC_34 (int ,int ,char**) ;
 int FUNC_35 (int ,char*,char*) ;
 int FUNC_36 (int ,int *,int *,TYPE_2__*) ;
 int * VAR_15 ;
 int * VAR_16 ;
 int FUNC_37 (TYPE_4__*,int ,int) ;
 int FUNC_38 (int ,int *) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_39 (int *) ;
 int VAR_19 ;
 int FUNC_40 (int ) ;
 int FUNC_41 (char*) ;
 int FUNC_42 (struct sockaddr*) ;
 int VAR_20 ;
 char* FUNC_43 (char*) ;
 int FUNC_44 (char*,char*,int) ;
 scalar_t__ FUNC_45 (char*,char*,int) ;
 scalar_t__ FUNC_46 (int ,TYPE_5__*,int,int) ;
 scalar_t__ FUNC_47 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_48 (int ,TYPE_5__*,int *) ;
 scalar_t__ FUNC_49 (int ,TYPE_5__*,int ,TYPE_4__*) ;
 char* VAR_21 ;
 int FUNC_50 (int) ;
 scalar_t__ VAR_22 ;

int
FUNC_51(int VAR_23, char **VAR_24)
{
    krb5_error_code VAR_25;
    krb5_context VAR_26;
    krb5_auth_context VAR_27 = ((void*)0);
    krb5_principal VAR_28, VAR_29;
    krb5_authenticator VAR_30;
    krb5_keytab VAR_31;
    krb5_socket_t VAR_32 = VAR_19;
    HDB *VAR_33 = ((void*)0);
    int VAR_34 = 0;
    char *VAR_35;
    krb5_log_facility *VAR_36;
    int VAR_37;

    FUNC_41(VAR_24[0]);

    VAR_25 = FUNC_20(&VAR_26);
    if(VAR_25)
 FUNC_3(1);

    VAR_25 = FUNC_27(VAR_26, "hpropd", &VAR_36);
    if(VAR_25)
 FUNC_2(1, "krb5_openlog");
    FUNC_33(VAR_26, VAR_36);

    if(FUNC_5(VAR_8, VAR_17, VAR_23, VAR_24, &VAR_34))
 FUNC_50(1);

    if(VAR_16 != ((void*)0))
 FUNC_32(VAR_26, VAR_16);

    if(VAR_13)
 FUNC_50(0);
    if(VAR_22) {
 FUNC_39(((void*)0));
 FUNC_3(0);
    }

    VAR_23 -= VAR_34;
    VAR_24 += VAR_34;

    if (VAR_23 != 0)
 FUNC_50(1);

    if (VAR_9 == ((void*)0))
 VAR_9 = FUNC_8(VAR_26);

    if(VAR_11) {
 VAR_32 = VAR_7;
    } else {
 struct sockaddr_storage VAR_38;
 struct sockaddr *VAR_39 = (struct sockaddr *)&VAR_38;
 socklen_t VAR_40 = sizeof(VAR_38);
 char VAR_41[256];
 krb5_ticket *VAR_42;
 char *VAR_43;

 VAR_32 = VAR_7;
 VAR_14 = 0;

 if (!VAR_14) {
     FUNC_38 (FUNC_19 (VAR_26, "hprop", "tcp",
         VAR_2), &VAR_32);
 }
 VAR_40 = sizeof(VAR_38);
 if(FUNC_6(VAR_32, VAR_39, &VAR_40) < 0)
     FUNC_15(VAR_26, 1, VAR_10, "getpeername");

 if (FUNC_12(VAR_39->sa_family,
        FUNC_42 (VAR_39),
        VAR_41,
        sizeof(VAR_41)) == ((void*)0))
     FUNC_44 (VAR_41, "unknown address",
       sizeof(VAR_41));

 FUNC_25(VAR_26, VAR_36, 0, "Connection from %s", VAR_41);

 VAR_25 = FUNC_23(VAR_26, &VAR_12);
 if(VAR_25)
     FUNC_15(VAR_26, 1, VAR_25, "krb5_kt_register");

 if (VAR_15 != ((void*)0)) {
     VAR_25 = FUNC_24(VAR_26, VAR_15, &VAR_31);
     if (VAR_25)
  FUNC_15 (VAR_26, 1, VAR_25, "krb5_kt_resolve %s", VAR_15);
 } else {
     VAR_25 = FUNC_22 (VAR_26, &VAR_31);
     if (VAR_25)
  FUNC_15 (VAR_26, 1, VAR_25, "krb5_kt_default");
 }

 VAR_25 = FUNC_31(VAR_26, &VAR_27, &VAR_32, VAR_3, ((void*)0),
       0, VAR_31, &VAR_42);
 if(VAR_25)
     FUNC_15(VAR_26, 1, VAR_25, "krb5_recvauth");

 VAR_25 = FUNC_34(VAR_26, VAR_42->server, &VAR_43);
 if (VAR_25)
     FUNC_15(VAR_26, 1, VAR_25, "krb5_unparse_name");
 if (FUNC_45(VAR_43, "hprop/", 5) != 0)
     FUNC_16(VAR_26, 1, "ticket not for hprop (%s)", VAR_43);

 FUNC_4(VAR_43);
 FUNC_18 (VAR_26, VAR_42);

 VAR_25 = FUNC_13(VAR_26, VAR_27, &VAR_30);
 if(VAR_25)
     FUNC_15(VAR_26, 1, VAR_25, "krb5_auth_con_getauthenticator");

 VAR_25 = FUNC_26(VAR_26, &VAR_28, ((void*)0), "kadmin", "hprop", ((void*)0));
 if(VAR_25)
     FUNC_15(VAR_26, 1, VAR_25, "krb5_make_principal");
 FUNC_0(VAR_26, &VAR_29,
        VAR_30->cname, VAR_30->crealm);
 if(!FUNC_28(VAR_26, VAR_28, VAR_29)) {
     char *VAR_44;
     VAR_25 = FUNC_34(VAR_26, VAR_29, &VAR_44);
     if (VAR_25)
  VAR_44 = VAR_21;
     FUNC_16(VAR_26, 1, "Unauthorized connection from %s", VAR_44);
 }
 FUNC_17(VAR_26, VAR_28);
 FUNC_17(VAR_26, VAR_29);

 VAR_25 = FUNC_21(VAR_26, VAR_31);
 if(VAR_25)
     FUNC_15(VAR_26, 1, VAR_25, "krb5_kt_close");
    }

    if(!VAR_18) {
 FUNC_1(&VAR_35, "%s~", VAR_9);

 VAR_25 = FUNC_7(VAR_26, &VAR_33, VAR_35);
 if(VAR_25)
     FUNC_15(VAR_26, 1, VAR_25, "hdb_create(%s)", VAR_35);
 VAR_25 = VAR_33->hdb_open(VAR_26, VAR_33, VAR_5 | VAR_4 | VAR_6, 0600);
 if(VAR_25)
     FUNC_15(VAR_26, 1, VAR_25, "hdb_open(%s)", VAR_35);
    }

    VAR_37 = 0;
    while(1){
 krb5_data VAR_45;
 hdb_entry_ex VAR_46;

 if(VAR_11) {
     VAR_25 = FUNC_29(VAR_26, &VAR_32, &VAR_45);
     if(VAR_25 != 0 && VAR_25 != VAR_1)
  FUNC_15(VAR_26, 1, VAR_25, "krb5_read_message");
 } else {
     VAR_25 = FUNC_30(VAR_26, VAR_27, &VAR_32, &VAR_45);
     if(VAR_25)
  FUNC_15(VAR_26, 1, VAR_25, "krb5_read_priv_message");
 }

 if(VAR_25 == VAR_1 || VAR_45.length == 0) {
     if(!VAR_11) {
  VAR_45.data = ((void*)0);
  VAR_45.length = 0;
  FUNC_36(VAR_26, VAR_27, &VAR_32, &VAR_45);
     }
     if(!VAR_18) {
  VAR_25 = VAR_33->hdb_close(VAR_26, VAR_33);
  if(VAR_25)
      FUNC_15(VAR_26, 1, VAR_25, "db_close");
  VAR_25 = VAR_33->hdb_rename(VAR_26, VAR_33, VAR_9);
  if(VAR_25)
      FUNC_15(VAR_26, 1, VAR_25, "db_rename");
     }
     break;
 }
 FUNC_37(&VAR_46, 0, sizeof(VAR_46));
 VAR_25 = FUNC_11(VAR_26, &VAR_45, &VAR_46.entry);
 FUNC_14(&VAR_45);
 if(VAR_25)
     FUNC_15(VAR_26, 1, VAR_25, "hdb_value2entry");
 if(VAR_18)
     FUNC_10(VAR_26, VAR_33, &VAR_46, VAR_20);
 else {
     VAR_25 = VAR_33->hdb_store(VAR_26, VAR_33, 0, &VAR_46);
     if(VAR_25 == VAR_0) {
  char *VAR_47;
  VAR_25 = FUNC_34(VAR_26, VAR_46.entry.principal, &VAR_47);
  if (VAR_25)
      VAR_47 = FUNC_43(VAR_21);
  FUNC_35(VAR_26, "Entry exists: %s", VAR_47);
  FUNC_4(VAR_47);
     } else if(VAR_25)
  FUNC_15(VAR_26, 1, VAR_25, "db_store");
     else
  VAR_37++;
 }
 FUNC_9(VAR_26, &VAR_46);
    }
    if (!VAR_18)
 FUNC_25(VAR_26, VAR_36, 0, "Received %d principals", VAR_37);

    if (VAR_14 == 0)
 FUNC_40(VAR_32);

    FUNC_3(0);
}

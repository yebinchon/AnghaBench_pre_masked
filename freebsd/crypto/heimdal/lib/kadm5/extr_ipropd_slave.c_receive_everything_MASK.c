
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int krb5_storage ;
typedef int krb5_error_code ;
struct TYPE_27__ {char* data; scalar_t__ length; } ;
typedef TYPE_3__ krb5_data ;
typedef int krb5_context ;
typedef int krb5_auth_context ;
struct TYPE_25__ {int stash_file; } ;
struct TYPE_28__ {TYPE_2__* db; int context; TYPE_1__ config; } ;
typedef TYPE_4__ kadm5_server_context ;
typedef scalar_t__ int32_t ;
struct TYPE_29__ {int entry; } ;
typedef TYPE_5__ hdb_entry_ex ;
typedef int entry ;
struct TYPE_30__ {int (* hdb_open ) (int ,TYPE_6__*,int,int) ;int (* hdb_store ) (int ,TYPE_6__*,int ,TYPE_5__*) ;int (* hdb_rename ) (int ,TYPE_6__*,int ) ;int (* hdb_close ) (int ,TYPE_6__*) ;int (* hdb_destroy ) (int ,TYPE_6__*) ;} ;
struct TYPE_26__ {int hdb_name; } ;
typedef TYPE_6__ HDB ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char**,char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,TYPE_6__**,char*) ;
 int FUNC_3 (int ,TYPE_5__*) ;
 int FUNC_4 (int ,TYPE_6__*,int ) ;
 int FUNC_5 (int ,TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,scalar_t__) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ,int,int,char*) ;
 int FUNC_11 (int ,int,char*,...) ;
 int FUNC_12 (int ,int ,int*,TYPE_3__*) ;
 int FUNC_13 (int *,scalar_t__*) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int ,int,char*) ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (TYPE_5__*,int ,int) ;
 int FUNC_19 (int ,TYPE_6__*,int,int) ;
 int FUNC_20 (int ,TYPE_6__*,int ,TYPE_5__*) ;
 int FUNC_21 (int ,TYPE_6__*,int ) ;
 int FUNC_22 (int ,TYPE_6__*) ;
 int FUNC_23 (int ,TYPE_6__*) ;

__attribute__((used)) static krb5_error_code
FUNC_24 (krb5_context VAR_5, int VAR_6,
      kadm5_server_context *VAR_7,
      krb5_auth_context VAR_8)
{
    int VAR_9;
    krb5_data VAR_10;
    int32_t VAR_11 = 0;
    int32_t VAR_12;
    krb5_storage *VAR_13;

    char *VAR_14;
    HDB *VAR_15;

    FUNC_17(VAR_5, "receive complete database");

    FUNC_0(&VAR_14, "%d-NEW", VAR_7->db->hdb_name);
    VAR_9 = FUNC_2(VAR_5, &VAR_15, VAR_14);
    if(VAR_9)
 FUNC_10(VAR_5,1, VAR_9, "hdb_create");
    FUNC_1(VAR_14);

    VAR_9 = FUNC_4 (VAR_5,
      VAR_15, VAR_7->config.stash_file);
    if(VAR_9)
 FUNC_10(VAR_5,1, VAR_9, "hdb_set_master_keyfile");



    VAR_9 = VAR_15->hdb_open(VAR_5, VAR_15, VAR_3 | VAR_2 | VAR_4, 0600);
    if (VAR_9)
 FUNC_10 (VAR_5, 1, VAR_9, "db->open");

    VAR_13 = ((void*)0);
    do {
 VAR_9 = FUNC_12(VAR_5, VAR_8, &VAR_6, &VAR_10);

 if (VAR_9) {
     FUNC_16 (VAR_5, VAR_9, "krb5_read_priv_message");
     goto cleanup;
 }

 VAR_13 = FUNC_15 (&VAR_10);
 if (VAR_13 == ((void*)0))
     FUNC_11 (VAR_5, 1, "krb5_storage_from_data");
 FUNC_13 (VAR_13, &VAR_12);
 if (VAR_12 == VAR_1) {
     krb5_data VAR_16;
     hdb_entry_ex VAR_17;

     FUNC_14(VAR_13);

     VAR_16.data = (char *)VAR_10.data + 4;
     VAR_16.length = VAR_10.length - 4;

     FUNC_18(&VAR_17, 0, sizeof(VAR_17));

     VAR_9 = FUNC_5 (VAR_5, &VAR_16, &VAR_17.entry);
     if (VAR_9)
  FUNC_10 (VAR_5, 1, VAR_9, "hdb_value2entry");
     VAR_9 = VAR_15->hdb_store(VAR_7->context,
      VAR_15,
      0, &VAR_17);
     if (VAR_9)
  FUNC_10 (VAR_5, 1, VAR_9, "hdb_store");

     FUNC_3 (VAR_5, &VAR_17);
     FUNC_9 (&VAR_10);
 } else if (VAR_12 == VAR_0)
     ;
 else
     FUNC_11 (VAR_5, 1, "strange opcode %d", VAR_12);
    } while (VAR_12 == VAR_1);

    if (VAR_12 != VAR_0)
 FUNC_11 (VAR_5, 1, "receive_everything: strange %d", VAR_12);

    FUNC_13 (VAR_13, &VAR_11);
    FUNC_14(VAR_13);

    VAR_9 = FUNC_7 (VAR_7);
    if (VAR_9)
 FUNC_10(VAR_5, 1, VAR_9, "kadm5_log_reinit");

    VAR_9 = FUNC_8 (VAR_7, VAR_11 - 1);
    if (VAR_9)
 FUNC_10 (VAR_5, 1, VAR_9, "kadm5_log_set_version");

    VAR_9 = FUNC_6 (VAR_7);
    if (VAR_9)
 FUNC_10 (VAR_5, 1, VAR_9, "kadm5_log_nop");

    VAR_9 = VAR_15->hdb_rename (VAR_5, VAR_15, VAR_7->db->hdb_name);
    if (VAR_9)
 FUNC_10 (VAR_5, 1, VAR_9, "db->rename");

 cleanup:
    FUNC_9 (&VAR_10);

    VAR_9 = VAR_15->hdb_close (VAR_5, VAR_15);
    if (VAR_9)
 FUNC_10 (VAR_5, 1, VAR_9, "db->close");

    VAR_9 = VAR_15->hdb_destroy (VAR_5, VAR_15);
    if (VAR_9)
 FUNC_10 (VAR_5, 1, VAR_9, "db->destroy");

    FUNC_17(VAR_5, "receive complete database, version %ld", (long)VAR_11);
    return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_14__ ;


typedef int krb5_principal ;
struct TYPE_26__ {TYPE_4__* db; int context; } ;
typedef TYPE_2__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_25__ {size_t len; int * val; } ;
struct TYPE_24__ {int kvno; TYPE_1__ keys; } ;
struct TYPE_27__ {TYPE_14__ entry; } ;
typedef TYPE_3__ hdb_entry_ex ;
typedef int ent ;
struct TYPE_28__ {int hdb_capability_flags; int (* hdb_close ) (int ,TYPE_4__*) ;scalar_t__ (* hdb_store ) (int ,TYPE_4__*,int ,TYPE_3__*) ;scalar_t__ (* hdb_password ) (int ,TYPE_4__*,TYPE_3__*,char const*,int) ;scalar_t__ (* hdb_fetch_kvno ) (int ,TYPE_4__*,int ,int,int ,TYPE_3__*) ;scalar_t__ (* hdb_open ) (int ,TYPE_4__*,int ,int ) ;} ;
typedef int Key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_14__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,size_t,int *,size_t) ;
 int FUNC_3 (int ,size_t,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_14__*,char const*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_14__*) ;
 int FUNC_6 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_4__*,TYPE_14__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_14__*,int) ;
 int FUNC_9 (int ,scalar_t__,char*) ;
 int FUNC_10 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_11 (int ,TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_12 (int ,TYPE_4__*,int ,int,int ,TYPE_3__*) ;
 scalar_t__ FUNC_13 (int ,TYPE_4__*,TYPE_3__*,char const*,int) ;
 scalar_t__ FUNC_14 (int ,TYPE_4__*,int ,TYPE_3__*) ;
 int FUNC_15 (int ,TYPE_4__*) ;

__attribute__((used)) static kadm5_ret_t
FUNC_16(void *VAR_14,
       krb5_principal VAR_15,
       const char *VAR_16,
       int VAR_17)
{
    kadm5_server_context *VAR_18 = VAR_14;
    hdb_entry_ex VAR_19;
    kadm5_ret_t VAR_20;
    Key *VAR_21;
    size_t VAR_22;
    int VAR_23 = 0;

    FUNC_10(&VAR_19, 0, sizeof(VAR_19));
    VAR_20 = VAR_18->db->hdb_open(VAR_18->context, VAR_18->db, VAR_13, 0);
    if(VAR_20)
 return VAR_20;

    VAR_20 = VAR_18->db->hdb_fetch_kvno(VAR_18->context, VAR_18->db, VAR_15,
          VAR_2|VAR_3|VAR_1, 0, &VAR_19);
    if(VAR_20)
 goto out;

    if (VAR_18->db->hdb_capability_flags & VAR_0) {
 VAR_20 = VAR_18->db->hdb_password(VAR_18->context, VAR_18->db,
     &VAR_19, VAR_16, VAR_17);
 if (VAR_20)
     goto out2;
    } else {

 VAR_22 = VAR_19.entry.keys.len;
 VAR_21 = VAR_19.entry.keys.val;

 VAR_19.entry.keys.len = 0;
 VAR_19.entry.keys.val = ((void*)0);

 VAR_20 = FUNC_4(VAR_18, &VAR_19.entry, VAR_16);
 if(VAR_20) {
     FUNC_3 (VAR_18->context, VAR_22, VAR_21);
     goto out2;
 }

 if (VAR_17)
     VAR_23 = FUNC_2 (VAR_19.entry.keys.val,
       VAR_19.entry.keys.len,
       VAR_21, VAR_22);
 FUNC_3 (VAR_18->context, VAR_22, VAR_21);

 if (VAR_23) {
     VAR_20 = VAR_9;
     FUNC_9(VAR_18->context, VAR_20,
       "Password reuse forbidden");
     goto out2;
 }

 VAR_20 = FUNC_7(VAR_18->context, VAR_18->db, &VAR_19.entry);
 if (VAR_20)
     goto out2;
    }
    VAR_19.entry.kvno++;

    VAR_20 = FUNC_5(VAR_18, &VAR_19.entry);
    if(VAR_20)
 goto out2;

    VAR_20 = FUNC_0(VAR_18, &VAR_19.entry);
    if (VAR_20)
 goto out2;

    VAR_20 = VAR_18->db->hdb_store(VAR_18->context, VAR_18->db,
     VAR_4, &VAR_19);
    if (VAR_20)
 goto out2;

    FUNC_8 (VAR_18,
        &VAR_19.entry,
        VAR_10 | VAR_7 | VAR_8 |
        VAR_5 | VAR_6 | VAR_11 |
        VAR_12);

out2:
    FUNC_6(VAR_18->context, &VAR_19);
out:
    VAR_18->db->hdb_close(VAR_18->context, VAR_18->db);
    return FUNC_1(VAR_20);
}

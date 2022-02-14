
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_19__ ;


typedef int salt ;
struct TYPE_29__ {int saltvalue; } ;
typedef TYPE_3__ krb5_salt ;
typedef void* krb5_principal ;
struct TYPE_30__ {int context; TYPE_7__* db; } ;
typedef TYPE_4__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_28__ {size_t len; TYPE_1__* val; } ;
struct TYPE_26__ {void* principal; TYPE_2__ keys; } ;
struct TYPE_31__ {TYPE_19__ entry; int salt; int type; } ;
typedef TYPE_5__ hdb_entry_ex ;
typedef int ent ;
struct TYPE_32__ {int (* hdb_close ) (int ,TYPE_7__*) ;scalar_t__ (* hdb_remove ) (int ,TYPE_7__*,void*) ;scalar_t__ (* hdb_store ) (int ,TYPE_7__*,int ,TYPE_5__*) ;scalar_t__ (* hdb_fetch_kvno ) (int ,TYPE_7__*,void*,int,int ,TYPE_5__*) ;scalar_t__ (* hdb_open ) (int ,TYPE_7__*,int ,int ) ;} ;
struct TYPE_27__ {int * salt; } ;
typedef TYPE_5__ Salt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_19__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (int ,TYPE_5__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ,TYPE_7__*,TYPE_19__*) ;
 int FUNC_5 (TYPE_4__*,void*,TYPE_19__*) ;
 int FUNC_6 (int ,TYPE_3__) ;
 int FUNC_7 (int ,void*,TYPE_3__*) ;
 scalar_t__ FUNC_8 (int ,void*,void*) ;
 int * FUNC_9 (int) ;
 int FUNC_10 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_11 (int ,TYPE_7__*,int ,int ) ;
 scalar_t__ FUNC_12 (int ,TYPE_7__*,void*,int,int ,TYPE_5__*) ;
 int FUNC_13 (int ,TYPE_7__*) ;
 scalar_t__ FUNC_14 (int ,TYPE_7__*,int ,TYPE_5__*) ;
 scalar_t__ FUNC_15 (int ,TYPE_7__*,void*) ;
 int FUNC_16 (int ,TYPE_7__*) ;

kadm5_ret_t
FUNC_17(void *VAR_6,
    krb5_principal VAR_7,
    krb5_principal VAR_8)
{
    kadm5_server_context *VAR_9 = VAR_6;
    kadm5_ret_t VAR_10;
    hdb_entry_ex VAR_11;
    krb5_principal VAR_12;

    FUNC_10(&VAR_11, 0, sizeof(VAR_11));
    if(FUNC_8(VAR_9->context, VAR_7, VAR_8))
 return VAR_3;
    VAR_10 = VAR_9->db->hdb_open(VAR_9->context, VAR_9->db, VAR_4, 0);
    if(VAR_10)
 return VAR_10;
    VAR_10 = VAR_9->db->hdb_fetch_kvno(VAR_9->context, VAR_9->db,
          VAR_7, VAR_2|VAR_1, 0, &VAR_11);
    if(VAR_10){
 VAR_9->db->hdb_close(VAR_9->context, VAR_9->db);
 goto out;
    }
    VAR_10 = FUNC_1(VAR_9, &VAR_11.entry);
    if(VAR_10)
 goto out2;
    {

 size_t VAR_13;
 Salt VAR_14;
 krb5_salt VAR_15;
 FUNC_10(&VAR_14, 0, sizeof(VAR_14));
 FUNC_7(VAR_9->context, VAR_7, &VAR_15);
 VAR_14.type = VAR_5;
 VAR_14.salt = VAR_15;
 for(VAR_13 = 0; VAR_13 < VAR_11.entry.keys.len; VAR_13++){
     if(VAR_11.entry.keys.val[VAR_13].salt == ((void*)0)){
  VAR_11.entry.keys.val[VAR_13].salt =
      FUNC_9(sizeof(*VAR_11.entry.keys.val[VAR_13].salt));
  if(VAR_11.entry.keys.val[VAR_13].salt == ((void*)0))
      return VAR_0;
  VAR_10 = FUNC_2(&VAR_14, VAR_11.entry.keys.val[VAR_13].salt);
  if(VAR_10)
      break;
     }
 }
 FUNC_6(VAR_9->context, VAR_15);
    }
    if(VAR_10)
 goto out2;
    VAR_12 = VAR_11.entry.principal;
    VAR_11.entry.principal = VAR_8;

    VAR_10 = FUNC_4(VAR_9->context, VAR_9->db, &VAR_11.entry);
    if (VAR_10) {
 VAR_11.entry.principal = VAR_12;
 goto out2;
    }

    FUNC_5 (VAR_9, VAR_7, &VAR_11.entry);

    VAR_10 = VAR_9->db->hdb_store(VAR_9->context, VAR_9->db, 0, &VAR_11);
    if(VAR_10){
 VAR_11.entry.principal = VAR_12;
 goto out2;
    }
    VAR_10 = VAR_9->db->hdb_remove(VAR_9->context, VAR_9->db, VAR_12);
    VAR_11.entry.principal = VAR_12;
out2:
    VAR_9->db->hdb_close(VAR_9->context, VAR_9->db);
    FUNC_3(VAR_9->context, &VAR_11);
out:
    return FUNC_0(VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef int uint32_t ;
struct TYPE_16__ {struct TYPE_16__* tl_data_next; } ;
typedef TYPE_1__ krb5_tl_data ;
struct TYPE_17__ {int db; int context; } ;
typedef TYPE_2__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
typedef TYPE_3__* kadm5_principal_ent_t ;
struct TYPE_20__ {scalar_t__ invalid; } ;
struct TYPE_15__ {int max_renew; int kvno; int max_life; TYPE_8__ flags; int pw_end; int valid_end; } ;
struct TYPE_19__ {TYPE_14__ entry; } ;
typedef TYPE_4__ hdb_entry_ex ;
struct TYPE_18__ {TYPE_1__* tl_data; int key_data; int n_key_data; scalar_t__ max_renewable_life; int kvno; scalar_t__ max_life; int attributes; scalar_t__ pw_expiration; scalar_t__ princ_expire_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,TYPE_14__*,int ,int ) ;
 int FUNC_1 (int ,TYPE_8__*) ;
 int FUNC_2 (TYPE_4__*,int) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_4__*,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;

kadm5_ret_t
FUNC_6(kadm5_server_context *VAR_9,
     hdb_entry_ex *VAR_10,
     uint32_t VAR_11,
     kadm5_principal_ent_t VAR_12,
     uint32_t VAR_13,
     kadm5_principal_ent_t VAR_14,
     uint32_t VAR_15)
{
    if(VAR_11 & VAR_6
       && VAR_13 & VAR_6) {
 if (VAR_12->princ_expire_time)
     FUNC_5(VAR_10->entry.valid_end, VAR_12->princ_expire_time);
 else
     FUNC_4(VAR_10->entry.valid_end);
    }
    if(VAR_11 & VAR_7
       && VAR_13 & VAR_7) {
 if (VAR_12->pw_expiration)
     FUNC_5(VAR_10->entry.pw_end, VAR_12->pw_expiration);
 else
     FUNC_4(VAR_10->entry.pw_end);
    }
    if(VAR_11 & VAR_0) {
 if (VAR_13 & VAR_0) {
     FUNC_1(VAR_12->attributes, &VAR_10->entry.flags);
 } else if(VAR_15 & VAR_0) {
     FUNC_1(VAR_14->attributes, &VAR_10->entry.flags);
     VAR_10->entry.flags.invalid = 0;
 } else {
     FUNC_2(VAR_10, 1);
 }
    }

    if(VAR_11 & VAR_4) {
 if(VAR_13 & VAR_4) {
     if(VAR_12->max_life)
       FUNC_5(VAR_10->entry.max_life, VAR_12->max_life);
     else
       FUNC_4(VAR_10->entry.max_life);
 } else if(VAR_15 & VAR_4) {
     if(VAR_14->max_life)
       FUNC_5(VAR_10->entry.max_life, VAR_14->max_life);
     else
       FUNC_4(VAR_10->entry.max_life);
 }
    }
    if(VAR_11 & VAR_3
       && VAR_13 & VAR_3)
 VAR_10->entry.kvno = VAR_12->kvno;
    if(VAR_11 & VAR_5) {
 if(VAR_13 & VAR_5) {
   if(VAR_12->max_renewable_life)
     FUNC_5(VAR_10->entry.max_renew, VAR_12->max_renewable_life);
   else
     FUNC_4(VAR_10->entry.max_renew);
 } else if(VAR_15 & VAR_5) {
   if(VAR_14->max_renewable_life)
     FUNC_5(VAR_10->entry.max_renew, VAR_14->max_renewable_life);
   else
     FUNC_4(VAR_10->entry.max_renew);
 }
    }
    if(VAR_11 & VAR_2
       && VAR_13 & VAR_2) {
 FUNC_0(VAR_9, &VAR_10->entry,
    VAR_12->n_key_data, VAR_12->key_data);
    }
    if(VAR_11 & VAR_8) {
 krb5_tl_data *VAR_16;

 for (VAR_16 = VAR_12->tl_data; VAR_16 != ((void*)0); VAR_16 = VAR_16->tl_data_next) {
     kadm5_ret_t VAR_17;
     VAR_17 = FUNC_3(VAR_9->context, VAR_9->db, VAR_10, VAR_16);
     if (VAR_17)
  return VAR_17;
 }
    }
    if(VAR_11 & VAR_1) {

    }
    return 0;
}

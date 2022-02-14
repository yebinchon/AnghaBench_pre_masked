
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int target_ent ;
typedef size_t off_t ;
typedef int krb5_storage ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_13__ {int data; } ;
typedef TYPE_1__ krb5_data ;
struct TYPE_14__ {int context; TYPE_4__* db; } ;
typedef TYPE_2__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_15__ {int entry; } ;
typedef TYPE_3__ hdb_entry_ex ;
struct TYPE_16__ {scalar_t__ (* hdb_remove ) (int ,TYPE_4__*,int ) ;scalar_t__ (* hdb_store ) (int ,TYPE_4__*,int ,TYPE_3__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,scalar_t__,char*,long) ;
 int FUNC_7 (int *,int ,size_t) ;
 size_t FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_10 (int ,TYPE_4__*,int ,TYPE_3__*) ;
 scalar_t__ FUNC_11 (int ,TYPE_4__*,int ) ;

__attribute__((used)) static kadm5_ret_t
FUNC_12 (kadm5_server_context *VAR_1,
    uint32_t VAR_2,
    uint32_t VAR_3,
    krb5_storage *VAR_4)
{
    krb5_error_code VAR_5;
    krb5_principal VAR_6;
    hdb_entry_ex VAR_7;
    krb5_data VAR_8;
    off_t VAR_9;
    size_t VAR_10, VAR_11;

    FUNC_9(&VAR_7, 0, sizeof(VAR_7));

    VAR_9 = FUNC_8(VAR_4, 0, VAR_0);
    VAR_5 = FUNC_5 (VAR_4, &VAR_6);
    if (VAR_5) {
 FUNC_6(VAR_1->context, VAR_5, "Failed to read renamed "
          "principal in log, version: %ld", (long)VAR_2);
 return VAR_5;
    }
    VAR_10 = FUNC_8(VAR_4, 0, VAR_0) - VAR_9;
    VAR_11 = VAR_3 - VAR_10;
    VAR_5 = FUNC_2 (&VAR_8, VAR_11);
    if (VAR_5) {
 FUNC_4 (VAR_1->context, VAR_6);
 return VAR_5;
    }
    FUNC_7 (VAR_4, VAR_8.data, VAR_11);
    VAR_5 = FUNC_1 (VAR_1->context, &VAR_8, &VAR_7.entry);
    FUNC_3(&VAR_8);
    if (VAR_5) {
 FUNC_4 (VAR_1->context, VAR_6);
 return VAR_5;
    }
    VAR_5 = VAR_1->db->hdb_store (VAR_1->context, VAR_1->db,
      0, &VAR_7);
    FUNC_0 (VAR_1->context, &VAR_7);
    if (VAR_5) {
 FUNC_4 (VAR_1->context, VAR_6);
 return VAR_5;
    }
    VAR_5 = VAR_1->db->hdb_remove (VAR_1->context, VAR_1->db, VAR_6);
    FUNC_4 (VAR_1->context, VAR_6);
    return VAR_5;
}

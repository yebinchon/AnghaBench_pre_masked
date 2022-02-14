
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_12__ {int data; } ;
typedef TYPE_1__ krb5_data ;
struct TYPE_13__ {int context; TYPE_4__* db; } ;
typedef TYPE_2__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_14__ {int entry; } ;
typedef TYPE_3__ hdb_entry_ex ;
typedef int ent ;
struct TYPE_15__ {scalar_t__ (* hdb_store ) (int ,TYPE_4__*,int ,TYPE_3__*) ;} ;


 int FUNC_0 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,scalar_t__,char*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_7 (int ,TYPE_4__*,int ,TYPE_3__*) ;

__attribute__((used)) static kadm5_ret_t
FUNC_8 (kadm5_server_context *VAR_0,
    uint32_t VAR_1,
    uint32_t VAR_2,
    krb5_storage *VAR_3)
{
    krb5_error_code VAR_4;
    krb5_data VAR_5;
    hdb_entry_ex VAR_6;

    FUNC_6(&VAR_6, 0, sizeof(VAR_6));

    VAR_4 = FUNC_2 (&VAR_5, VAR_2);
    if (VAR_4) {
 FUNC_4(VAR_0->context, VAR_4, "out of memory");
 return VAR_4;
    }
    FUNC_5 (VAR_3, VAR_5.data, VAR_2);
    VAR_4 = FUNC_1 (VAR_0->context, &VAR_5, &VAR_6.entry);
    FUNC_3(&VAR_5);
    if (VAR_4) {
 FUNC_4(VAR_0->context, VAR_4,
          "Unmarshaling hdb entry failed");
 return VAR_4;
    }
    VAR_4 = VAR_0->db->hdb_store(VAR_0->context, VAR_0->db, 0, &VAR_6);
    FUNC_0 (VAR_0->context, &VAR_6);
    return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int krb5_storage ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_4__ {int context; TYPE_2__* db; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_5__ {scalar_t__ (* hdb_remove ) (int ,TYPE_2__*,int ) ;} ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,scalar_t__,char*,long) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static kadm5_ret_t
FUNC_4 (kadm5_server_context *VAR_0,
    uint32_t VAR_1,
    uint32_t VAR_2,
    krb5_storage *VAR_3)
{
    krb5_error_code VAR_4;
    krb5_principal VAR_5;

    VAR_4 = FUNC_1 (VAR_3, &VAR_5);
    if (VAR_4) {
 FUNC_2(VAR_0->context, VAR_4, "Failed to read deleted "
          "principal from log version: %ld", (long)VAR_1);
 return VAR_4;
    }

    VAR_4 = VAR_0->db->hdb_remove(VAR_0->context, VAR_0->db, VAR_5);
    FUNC_0 (VAR_0->context, VAR_5);
    return VAR_4;
}

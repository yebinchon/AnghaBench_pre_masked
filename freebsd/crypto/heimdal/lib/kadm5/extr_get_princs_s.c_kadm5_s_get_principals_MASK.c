
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct foreach_data {char const* exp; char** princs; int count; int exp2; } ;
typedef int krb5_realm ;
struct TYPE_6__ {TYPE_2__* db; int context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_7__ {scalar_t__ (* hdb_open ) (int ,TYPE_2__*,int ,int ) ;int (* hdb_close ) (int ,TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct foreach_data*,int *) ;
 int FUNC_2 (int *,char*,char const*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*,int ,int ,struct foreach_data*) ;
 int FUNC_5 (TYPE_1__*,char**,int*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*,int ,int ) ;
 int FUNC_9 (int ,TYPE_2__*) ;

kadm5_ret_t
FUNC_10(void *VAR_3,
         const char *VAR_4,
         char ***VAR_5,
         int *VAR_6)
{
    struct foreach_data VAR_7;
    kadm5_server_context *VAR_8 = VAR_3;
    kadm5_ret_t VAR_9;
    VAR_9 = VAR_8->db->hdb_open(VAR_8->context, VAR_8->db, VAR_1, 0);
    if(VAR_9) {
 FUNC_7(VAR_8->context, VAR_9, "opening database");
 return VAR_9;
    }
    VAR_7.exp = VAR_4;
    {
 krb5_realm VAR_10;
 FUNC_6(VAR_8->context, &VAR_10);
 FUNC_2(&VAR_7.exp2, "%s@%d", VAR_4, VAR_10);
 FUNC_3(VAR_10);
    }
    VAR_7.princs = ((void*)0);
    VAR_7.count = 0;
    VAR_9 = FUNC_4(VAR_8->context, VAR_8->db, VAR_0, VAR_2, &VAR_7);
    VAR_8->db->hdb_close(VAR_8->context, VAR_8->db);
    if(VAR_9 == 0)
 VAR_9 = FUNC_1(&VAR_7, ((void*)0));
    if(VAR_9 == 0){
 *VAR_5 = VAR_7.princs;
 *VAR_6 = VAR_7.count - 1;
    }else
 FUNC_5(VAR_8, VAR_7.princs, &VAR_7.count);
    FUNC_3(VAR_7.exp2);
    return FUNC_0(VAR_9);
}

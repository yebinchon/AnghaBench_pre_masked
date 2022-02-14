
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int db; int context; } ;
typedef TYPE_2__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_8__ {size_t len; int * val; } ;
struct TYPE_10__ {TYPE_1__ keys; int principal; } ;
typedef TYPE_3__ hdb_entry ;
typedef int Key ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t,int *) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_3__*,char const*) ;
 int FUNC_2 (int ,TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (int ,int ,char const*,int **,size_t*) ;
 scalar_t__ FUNC_4 (int ,int *,int ,char*,char*,int *) ;

kadm5_ret_t
FUNC_5(kadm5_server_context *VAR_1,
  hdb_entry *VAR_2,
  const char *VAR_3)
{
    Key *VAR_4;
    size_t VAR_5;
    kadm5_ret_t VAR_6;

    VAR_6 = FUNC_3(VAR_1->context,
     VAR_2->principal,
     VAR_3, &VAR_4, &VAR_5);
    if (VAR_6)
 return VAR_6;

    FUNC_0 (VAR_1->context, VAR_2->keys.len, VAR_2->keys.val);
    VAR_2->keys.val = VAR_4;
    VAR_2->keys.len = VAR_5;

    FUNC_2(VAR_1->context, VAR_2, 0);

    if (FUNC_4(VAR_1->context, ((void*)0), VAR_0,
         "kadmin", "save-password", ((void*)0)))
    {
 VAR_6 = FUNC_1(VAR_1->context, VAR_1->db,
         VAR_2, VAR_3);
 if (VAR_6)
     return VAR_6;
    }

    return 0;
}

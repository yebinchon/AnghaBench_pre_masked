
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_storage ;
struct TYPE_6__ {int version; } ;
struct TYPE_5__ {TYPE_2__ log_context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
typedef TYPE_2__ kadm5_log_context ;
typedef enum kadm_ops { ____Placeholder_kadm_ops } kadm_ops ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static kadm5_ret_t
FUNC_3 (kadm5_server_context *VAR_0,
      krb5_storage *VAR_1,
      enum kadm_ops VAR_2)
{
    kadm5_log_context *VAR_3 = &VAR_0->log_context;
    kadm5_ret_t VAR_4;

    VAR_4 = FUNC_0 (VAR_0);
    if (VAR_4)
 return VAR_4;

    FUNC_1 (VAR_1, ++VAR_3->version);
    FUNC_1 (VAR_1, FUNC_2(((void*)0)));
    FUNC_1 (VAR_1, VAR_2);
    return 0;
}

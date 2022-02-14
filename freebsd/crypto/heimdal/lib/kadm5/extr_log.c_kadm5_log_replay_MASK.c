
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int krb5_storage ;
struct TYPE_8__ {int context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef int kadm5_ret_t ;
typedef enum kadm_ops { ____Placeholder_kadm_ops } kadm_ops ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int *) ;





 int FUNC_5 (int ,int ,char*,int) ;

kadm5_ret_t
FUNC_6 (kadm5_server_context *VAR_1,
    enum kadm_ops VAR_2,
    uint32_t VAR_3,
    uint32_t VAR_4,
    krb5_storage *VAR_5)
{
    switch (VAR_2) {
    case 132 :
 return FUNC_0 (VAR_1, VAR_3, VAR_4, VAR_5);
    case 131 :
 return FUNC_1 (VAR_1, VAR_3, VAR_4, VAR_5);
    case 128 :
 return FUNC_4 (VAR_1, VAR_3, VAR_4, VAR_5);
    case 130 :
 return FUNC_2 (VAR_1, VAR_3, VAR_4, VAR_5);
    case 129 :
 return FUNC_3 (VAR_1, VAR_3, VAR_4, VAR_5);
    default :
 FUNC_5(VAR_1->context, VAR_0,
          "Unsupported replay op %d", (int)VAR_2);
 return VAR_0;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int krb5_context ;
typedef int krb5_ccache ;
struct TYPE_2__ {int my_context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
typedef int kadm5_config_params ;


 scalar_t__ FUNC_0 (int ,char const*,int ,char const*,int *,unsigned long,unsigned long,void**) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

kadm5_ret_t
FUNC_3(const char *VAR_0,
   krb5_ccache VAR_1,
   const char *VAR_2,
   kadm5_config_params *VAR_3,
   unsigned long VAR_4,
   unsigned long VAR_5,
   void **VAR_6)
{
    krb5_context VAR_7;
    kadm5_ret_t VAR_8;
    kadm5_server_context *VAR_9;

    VAR_8 = FUNC_2(&VAR_7);
    if (VAR_8)
 return VAR_8;
    VAR_8 = FUNC_0(VAR_7,
          VAR_0,
          VAR_1,
          VAR_2,
          VAR_3,
          VAR_4,
          VAR_5,
          VAR_6);
    if(VAR_8){
 FUNC_1(VAR_7);
 return VAR_8;
    }
    VAR_9 = *VAR_6;
    VAR_9->my_context = 1;
    return 0;
}

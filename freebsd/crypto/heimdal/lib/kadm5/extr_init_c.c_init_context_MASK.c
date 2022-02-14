
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int krb5_prompter_fct ;
typedef int krb5_context ;
typedef int krb5_ccache ;
struct TYPE_2__ {int my_context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
typedef int kadm5_config_params ;


 scalar_t__ FUNC_0 (int ,char const*,char const*,int ,char const*,int ,char const*,int *,unsigned long,unsigned long,void**) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static kadm5_ret_t
FUNC_3(const char *VAR_0,
      const char *VAR_1,
      krb5_prompter_fct VAR_2,
      const char *VAR_3,
      krb5_ccache VAR_4,
      const char *VAR_5,
      kadm5_config_params *VAR_6,
      unsigned long VAR_7,
      unsigned long VAR_8,
      void **VAR_9)
{
    krb5_context VAR_10;
    kadm5_ret_t VAR_11;
    kadm5_server_context *VAR_12;

    VAR_11 = FUNC_2(&VAR_10);
    if (VAR_11)
 return VAR_11;
    VAR_11 = FUNC_0(VAR_10,
        VAR_0,
        VAR_1,
        VAR_2,
        VAR_3,
        VAR_4,
        VAR_5,
        VAR_6,
        VAR_7,
        VAR_8,
        VAR_9);
    if(VAR_11){
 FUNC_1(VAR_10);
 return VAR_11;
    }
    VAR_12 = *VAR_9;
    VAR_12->my_context = 1;
    return 0;
}

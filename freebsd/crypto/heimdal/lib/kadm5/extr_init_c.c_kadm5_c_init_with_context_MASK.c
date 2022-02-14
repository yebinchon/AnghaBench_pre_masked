
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_prompter_fct ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef scalar_t__ kadm5_ret_t ;
typedef int kadm5_config_params ;
struct TYPE_3__ {char const* keytab; int sock; int ccache; int prompter; int * service_name; int * client_name; } ;
typedef TYPE_1__ kadm5_client_context ;


 scalar_t__ FUNC_0 (int ,char const*,char const*,char const*,int ,char const*,int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__**,int *,int ) ;
 void* FUNC_2 (char const*) ;

__attribute__((used)) static kadm5_ret_t
FUNC_3(krb5_context VAR_0,
     const char *VAR_1,
     const char *VAR_2,
     krb5_prompter_fct VAR_3,
     const char *VAR_4,
     krb5_ccache VAR_5,
     const char *VAR_6,
     kadm5_config_params *VAR_7,
     unsigned long VAR_8,
     unsigned long VAR_9,
     void **VAR_10)
{
    kadm5_ret_t VAR_11;
    kadm5_client_context *VAR_12;
    krb5_ccache VAR_13;

    VAR_11 = FUNC_1(&VAR_12, VAR_7, VAR_0);
    if(VAR_11)
 return VAR_11;

    if(VAR_2 != ((void*)0) && *VAR_2 != '\0') {
 VAR_11 = FUNC_0(VAR_0,
          VAR_1,
          VAR_6,
          VAR_2, VAR_3, VAR_4, VAR_5, &VAR_13);
 if(VAR_11)
     return VAR_11;
 VAR_5 = VAR_13;
    }


    if (VAR_1 != ((void*)0))
 VAR_12->client_name = FUNC_2(VAR_1);
    else
 VAR_12->client_name = ((void*)0);
    if (VAR_6 != ((void*)0))
 VAR_12->service_name = FUNC_2(VAR_6);
    else
 VAR_12->service_name = ((void*)0);
    VAR_12->prompter = VAR_3;
    VAR_12->keytab = VAR_4;
    VAR_12->ccache = VAR_5;

    VAR_12->sock = -1;

    *VAR_10 = VAR_12;
    return 0;
}

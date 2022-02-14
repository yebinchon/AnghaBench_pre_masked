
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_11__ {int mask; char* realm; char* admin_server; scalar_t__ kadmind_port; } ;
typedef TYPE_1__ kadm5_config_params ;
struct TYPE_12__ {scalar_t__ kadmind_port; int * admin_server; struct TYPE_12__* realm; int context; } ;
typedef TYPE_2__ kadm5_client_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char**) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__**) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__**,char***) ;
 scalar_t__ FUNC_6 (int ,char*,char*,int) ;
 TYPE_2__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (TYPE_2__*) ;
 char* FUNC_10 (int *,char) ;
 void* FUNC_11 (char*) ;
 int FUNC_12 (char*,char**,int ) ;

kadm5_ret_t
FUNC_13(kadm5_client_context **VAR_5,
        kadm5_config_params *VAR_6,
        krb5_context VAR_7)
{
    krb5_error_code VAR_8;
    char *VAR_9;

    *VAR_5 = FUNC_7(sizeof(**VAR_5));
    if(*VAR_5 == ((void*)0))
 return VAR_0;
    FUNC_8(*VAR_5, 0, sizeof(**VAR_5));
    FUNC_2 (VAR_7, VAR_4);
    FUNC_9(*VAR_5);
    (*VAR_5)->context = VAR_7;
    if(VAR_6->mask & VAR_3) {
 VAR_8 = 0;
 (*VAR_5)->realm = FUNC_11(VAR_6->realm);
 if ((*VAR_5)->realm == ((void*)0))
     VAR_8 = VAR_0;
    } else
 VAR_8 = FUNC_4((*VAR_5)->context, &(*VAR_5)->realm);
    if (VAR_8) {
 FUNC_0(*VAR_5);
 return VAR_8;
    }
    if(VAR_6->mask & VAR_1)
 (*VAR_5)->admin_server = FUNC_11(VAR_6->admin_server);
    else {
 char **VAR_10;

 VAR_8 = FUNC_5 (VAR_7, &(*VAR_5)->realm, &VAR_10);
 if (VAR_8) {
     FUNC_0((*VAR_5)->realm);
     FUNC_0(*VAR_5);
     return VAR_8;
 }
 (*VAR_5)->admin_server = FUNC_11(*VAR_10);
 FUNC_3 (VAR_7, VAR_10);
    }

    if ((*VAR_5)->admin_server == ((void*)0)) {
 FUNC_0((*VAR_5)->realm);
 FUNC_0(*VAR_5);
 return VAR_0;
    }
    VAR_9 = FUNC_10 ((*VAR_5)->admin_server, ':');
    if (VAR_9 != ((void*)0))
 *VAR_9++ = '\0';

    (*VAR_5)->kadmind_port = 0;

    if(VAR_6->mask & VAR_2)
 (*VAR_5)->kadmind_port = VAR_6->kadmind_port;
    else if (VAR_9 != ((void*)0)) {
 char *VAR_11;

 (*VAR_5)->kadmind_port = FUNC_1(FUNC_12 (VAR_9, &VAR_11, 0));
    }
    if ((*VAR_5)->kadmind_port == 0)
 (*VAR_5)->kadmind_port = FUNC_6 (VAR_7, "kerberos-adm",
         "tcp", 749);
    return 0;
}

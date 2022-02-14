
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dump_options {int realm_string; int config_file_string; } ;
typedef scalar_t__ krb5_error_code ;
typedef int kadm5_server_context ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int,scalar_t__,char*) ;
 int FUNC_5 (int ,scalar_t__,char*) ;
 int VAR_1 ;

int
FUNC_6(struct dump_options *VAR_2, int VAR_3, char **VAR_4)
{
    kadm5_server_context *VAR_5;
    krb5_error_code VAR_6;

    VAR_5 = FUNC_0(VAR_2->config_file_string,
     VAR_2->realm_string);

    VAR_6 = FUNC_3 (VAR_5);
    if (VAR_6)
 FUNC_4 (VAR_0, 1, VAR_6, "kadm5_log_init");

    VAR_6 = FUNC_2 (VAR_5, VAR_1, ((void*)0));
    if(VAR_6)
 FUNC_5(VAR_0, VAR_6, "kadm5_log_foreach");

    VAR_6 = FUNC_1 (VAR_5);
    if (VAR_6)
 FUNC_5(VAR_0, VAR_6, "kadm5_log_end");
    return 0;
}

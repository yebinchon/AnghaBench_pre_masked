
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct last_version_options {int realm_string; int config_file_string; } ;
typedef scalar_t__ krb5_error_code ;
typedef int kadm5_server_context ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int,scalar_t__,char*) ;
 int FUNC_5 (int ,scalar_t__,char*) ;
 int FUNC_6 (char*,unsigned long) ;

int
FUNC_7(struct last_version_options *VAR_1, int VAR_2, char **VAR_3)
{
    kadm5_server_context *VAR_4;
    krb5_error_code VAR_5;
    uint32_t VAR_6;

    VAR_4 = FUNC_0(VAR_1->config_file_string,
     VAR_1->realm_string);

    VAR_5 = FUNC_3 (VAR_4);
    if (VAR_5)
 FUNC_4 (VAR_0, 1, VAR_5, "kadm5_log_init");

    VAR_5 = FUNC_2 (VAR_4, &VAR_6);
    if (VAR_5)
 FUNC_4 (VAR_0, 1, VAR_5, "kadm5_log_get_version");

    VAR_5 = FUNC_1 (VAR_4);
    if (VAR_5)
 FUNC_5(VAR_0, VAR_5, "kadm5_log_end");

    FUNC_6("version: %lu\n", (unsigned long)VAR_6);

    return 0;
}

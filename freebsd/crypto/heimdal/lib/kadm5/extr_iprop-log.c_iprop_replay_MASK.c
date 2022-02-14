
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct replay_options {int realm_string; int config_file_string; } ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_8__ {TYPE_2__* db; } ;
typedef TYPE_1__ kadm5_server_context ;
struct TYPE_9__ {scalar_t__ (* hdb_close ) (int ,TYPE_2__*) ;scalar_t__ (* hdb_open ) (int ,TYPE_2__*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,struct replay_options*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int,scalar_t__,char*) ;
 int FUNC_5 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_6 (int ,TYPE_2__*,int,int) ;
 scalar_t__ FUNC_7 (int ,TYPE_2__*) ;

int
FUNC_8(struct replay_options *VAR_4, int VAR_5, char **VAR_6)
{
    kadm5_server_context *VAR_7;
    krb5_error_code VAR_8;

    VAR_7 = FUNC_0(VAR_4->config_file_string,
     VAR_4->realm_string);

    VAR_8 = VAR_7->db->hdb_open(VAR_3,
           VAR_7->db,
           VAR_1 | VAR_0, 0600);
    if (VAR_8)
 FUNC_4 (VAR_3, 1, VAR_8, "db->open");

    VAR_8 = FUNC_3 (VAR_7);
    if (VAR_8)
 FUNC_4 (VAR_3, 1, VAR_8, "kadm5_log_init");

    VAR_8 = FUNC_2 (VAR_7, VAR_2, VAR_4);
    if(VAR_8)
 FUNC_5(VAR_3, VAR_8, "kadm5_log_foreach");
    VAR_8 = FUNC_1 (VAR_7);
    if (VAR_8)
 FUNC_5(VAR_3, VAR_8, "kadm5_log_end");
    VAR_8 = VAR_7->db->hdb_close (VAR_3, VAR_7->db);
    if (VAR_8)
 FUNC_4 (VAR_3, 1, VAR_8, "db->close");

    return 0;
}

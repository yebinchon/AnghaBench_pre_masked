
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int krb5_context ;
struct TYPE_8__ {char* sun_path; } ;
struct TYPE_11__ {int log_fd; TYPE_3__* socket_info; void* socket_fd; TYPE_1__ socket_name; int * log_file; } ;
struct TYPE_9__ {int * stash_file; int * dbname; int * acl_file; } ;
struct TYPE_12__ {int caller; int context; TYPE_4__ log_context; TYPE_2__ config; int db; } ;
typedef TYPE_5__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
typedef int kadm5_config_params ;
struct TYPE_10__ {int ai_protocol; int ai_socktype; int ai_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_5__**,int *,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int *,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,char const*,int *) ;
 void* FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static kadm5_ret_t
FUNC_7(krb5_context VAR_2,
     const char *VAR_3,
     const char *VAR_4,
     kadm5_config_params *VAR_5,
     unsigned long VAR_6,
     unsigned long VAR_7,
     void **VAR_8)
{
    kadm5_ret_t VAR_9;
    kadm5_server_context *VAR_10;
    VAR_9 = FUNC_1(&VAR_10, VAR_5, VAR_2);
    if(VAR_9)
 return VAR_9;

    FUNC_2(VAR_10->config.dbname != ((void*)0));
    FUNC_2(VAR_10->config.stash_file != ((void*)0));
    FUNC_2(VAR_10->config.acl_file != ((void*)0));
    FUNC_2(VAR_10->log_context.log_file != ((void*)0));

    FUNC_2(VAR_10->log_context.socket_name.sun_path[0] != '\0');




    VAR_9 = FUNC_3(VAR_10->context, &VAR_10->db, VAR_10->config.dbname);
    if(VAR_9)
 return VAR_9;
    VAR_9 = FUNC_4 (VAR_10->context,
      VAR_10->db, VAR_10->config.stash_file);
    if(VAR_9)
 return VAR_9;

    VAR_10->log_context.log_fd = -1;


    VAR_10->log_context.socket_fd = FUNC_6 (VAR_0, VAR_1, 0);






    VAR_9 = FUNC_5(VAR_10->context, VAR_3, &VAR_10->caller);
    if(VAR_9)
 return VAR_9;

    VAR_9 = FUNC_0(VAR_10);
    if(VAR_9)
 return VAR_9;

    *VAR_8 = VAR_10;
    return 0;
}

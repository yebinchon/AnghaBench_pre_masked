
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int time_t ;
struct replay_options {int start_version_integer; int end_version_integer; } ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_4__ {int context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef enum kadm_ops { ____Placeholder_kadm_ops } kadm_ops ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,scalar_t__,scalar_t__,int *) ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 int FUNC_3 (int ,scalar_t__,char*) ;
 int FUNC_4 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(kadm5_server_context *VAR_2,
     uint32_t VAR_3,
     time_t VAR_4,
     enum kadm_ops VAR_5,
     uint32_t VAR_6,
     krb5_storage *VAR_7,
     void *VAR_8)
{
    struct replay_options *VAR_9 = VAR_8;
    krb5_error_code VAR_10;

    if((VAR_9->start_version_integer != -1 && VAR_3 < (uint32_t)VAR_9->start_version_integer) ||
       (VAR_9->end_version_integer != -1 && VAR_3 > (uint32_t)VAR_9->end_version_integer)) {

 FUNC_2(VAR_7, VAR_6, VAR_0);
 return;
    }
    FUNC_4 ("ver %u... ", VAR_3);
    FUNC_0 (VAR_1);

    VAR_10 = FUNC_1 (VAR_2,
       VAR_5, VAR_3, VAR_6, VAR_7);
    if (VAR_10)
 FUNC_3 (VAR_2->context, VAR_10, "kadm5_log_replay");

    FUNC_4 ("done\n");
}

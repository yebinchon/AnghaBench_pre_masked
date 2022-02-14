
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int krb5_storage ;
struct TYPE_8__ {size_t length; int data; } ;
typedef TYPE_2__ krb5_data ;
typedef int kadm5_ret_t ;
struct TYPE_9__ {TYPE_1__* socket_info; int version; int socket_fd; int socket_name; int log_fd; } ;
typedef TYPE_3__ kadm5_log_context ;
struct TYPE_7__ {int ai_addrlen; struct sockaddr* ai_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int ,void*,int,int ,struct sockaddr*,int) ;
 scalar_t__ FUNC_4 (int ,int ,size_t) ;

__attribute__((used)) static kadm5_ret_t
FUNC_5 (kadm5_log_context *VAR_1,
   krb5_storage *VAR_2)
{
    krb5_data VAR_3;
    size_t VAR_4;
    ssize_t VAR_5;

    FUNC_2(VAR_2, &VAR_3);
    VAR_4 = VAR_3.length;
    VAR_5 = FUNC_4 (VAR_1->log_fd, VAR_3.data, VAR_4);
    if (VAR_5 < 0 || (size_t)VAR_5 != VAR_4) {
 FUNC_1(&VAR_3);
 return VAR_0;
    }
    if (FUNC_0 (VAR_1->log_fd) < 0) {
 FUNC_1(&VAR_3);
 return VAR_0;
    }





    FUNC_3 (VAR_1->socket_fd,
     (void *)&VAR_1->version,
     sizeof(VAR_1->version),
     0,
     (struct sockaddr *)&VAR_1->socket_name,
     sizeof(VAR_1->socket_name));
    FUNC_1(&VAR_3);
    return 0;
}

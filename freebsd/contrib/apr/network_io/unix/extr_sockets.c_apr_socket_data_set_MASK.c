
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; void* data; int key; } ;
typedef TYPE_1__ sock_userdata_t ;
typedef int apr_status_t ;
struct TYPE_6__ {int pool; TYPE_1__* userdata; } ;
typedef TYPE_2__ apr_socket_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,void*,int (*) (void*),int (*) (void*)) ;
 int FUNC_2 (int ,char const*) ;

apr_status_t FUNC_3(apr_socket_t *VAR_1, void *VAR_2, const char *VAR_3,
                                 apr_status_t (*VAR_4) (void *))
{
    sock_userdata_t *VAR_5 = FUNC_0(VAR_1->pool, sizeof(sock_userdata_t));

    VAR_5->key = FUNC_2(VAR_1->pool, VAR_3);
    VAR_5->data = VAR_2;
    VAR_5->next = VAR_1->userdata;
    VAR_1->userdata = VAR_5;

    if (VAR_4) {
        FUNC_1(VAR_1->pool, VAR_2, VAR_4, VAR_4);
    }

    return VAR_0;
}

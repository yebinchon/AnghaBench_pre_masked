
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int serf_socket_remove_t ;
typedef int serf_socket_add_t ;
struct TYPE_4__ {int pollset; } ;
typedef TYPE_1__ serf_pollset_t ;
struct TYPE_5__ {int server_authn_info; int authn_types; scalar_t__ progress_written; scalar_t__ progress_read; int conns; int pollset_rm; int pollset_add; TYPE_1__* pollset_baton; int * pool; } ;
typedef TYPE_2__ serf_context_t ;
typedef int serf_connection_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int *,int ) ;
 int FUNC_4 (int *,int ,int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

serf_context_t *FUNC_5(
    void *VAR_5,
    serf_socket_add_t VAR_6,
    serf_socket_remove_t VAR_7,
    apr_pool_t *VAR_8)
{
    serf_context_t *VAR_9 = FUNC_2(VAR_8, sizeof(*VAR_9));

    VAR_9->pool = VAR_8;

    if (VAR_5 != ((void*)0)) {
        VAR_9->pollset_baton = VAR_5;
        VAR_9->pollset_add = VAR_6;
        VAR_9->pollset_rm = VAR_7;
    }
    else {

        serf_pollset_t *VAR_10 = FUNC_2(VAR_8, sizeof(*VAR_10));
        (void) FUNC_3(&VAR_10->pollset, VAR_1, VAR_8, 0);

        VAR_9->pollset_baton = VAR_10;
        VAR_9->pollset_add = VAR_3;
        VAR_9->pollset_rm = VAR_4;
    }


    VAR_9->conns = FUNC_0(VAR_8, 1, sizeof(serf_connection_t *));


    VAR_9->progress_read = 0;
    VAR_9->progress_written = 0;

    VAR_9->authn_types = VAR_2;
    VAR_9->server_authn_info = FUNC_1(VAR_8);

    return VAR_9;
}

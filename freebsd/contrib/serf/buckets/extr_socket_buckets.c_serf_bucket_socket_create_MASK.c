
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* read_baton; int read; } ;
struct TYPE_5__ {int * progress_baton; int * progress_func; TYPE_2__ databuf; int * skt; } ;
typedef TYPE_1__ socket_context_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_socket_t ;


 int * FUNC_0 (int *,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;

serf_bucket_t *FUNC_3(
    apr_socket_t *VAR_2,
    serf_bucket_alloc_t *VAR_3)
{
    socket_context_t *VAR_4;


    VAR_4 = FUNC_1(VAR_3, sizeof(*VAR_4));
    VAR_4->skt = VAR_2;

    FUNC_2(&VAR_4->databuf);
    VAR_4->databuf.read = VAR_1;
    VAR_4->databuf.read_baton = VAR_4;

    VAR_4->progress_func = ((void*)0);
    VAR_4->progress_baton = ((void*)0);
    return FUNC_0(&VAR_0, VAR_3, VAR_4);
}

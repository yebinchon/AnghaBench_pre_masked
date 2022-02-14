
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * current_async_response; int async_handler_baton; int (* async_handler ) (int *,int *,int ,int *) ;int async_acceptor_baton; int stream; int * (* async_acceptor ) (int *,int ,int ,int *) ;} ;
typedef TYPE_1__ serf_connection_t ;
typedef int apr_status_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int *,int *,int ,int *) ;

__attribute__((used)) static apr_status_t FUNC_4(serf_connection_t *VAR_1,
                                          apr_pool_t *VAR_2)
{
    apr_status_t VAR_3;

    if (VAR_1->current_async_response == ((void*)0)) {
        VAR_1->current_async_response =
            (*VAR_1->async_acceptor)(((void*)0), VAR_1->stream,
                                    VAR_1->async_acceptor_baton, VAR_2);
    }

    VAR_3 = (*VAR_1->async_handler)(((void*)0), VAR_1->current_async_response,
                                    VAR_1->async_handler_baton, VAR_2);

    if (FUNC_0(VAR_3)) {
        FUNC_1(VAR_1->current_async_response);
        VAR_1->current_async_response = ((void*)0);
        VAR_3 = VAR_0;
    }

    return VAR_3;
}

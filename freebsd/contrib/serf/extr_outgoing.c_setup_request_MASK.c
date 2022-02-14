
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int respool; int handler_baton; int handler; int acceptor_baton; int acceptor; int req_bkt; int setup_baton; int (* setup ) (TYPE_1__*,int ,int *,int *,int *,int *,int *,int ) ;int allocator; TYPE_2__* conn; } ;
typedef TYPE_1__ serf_request_t ;
struct TYPE_7__ {int pool; } ;
typedef TYPE_2__ serf_connection_t ;
typedef int apr_status_t ;


 int FUNC_0 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int *,int *,int *,int *,int *,int ) ;

__attribute__((used)) static apr_status_t FUNC_4(serf_request_t *VAR_1)
{
    serf_connection_t *VAR_2 = VAR_1->conn;
    apr_status_t VAR_3;


    FUNC_1(&VAR_1->respool, VAR_2->pool);
    VAR_1->allocator = FUNC_2(VAR_1->respool,
                                                      ((void*)0), ((void*)0));
    FUNC_0(VAR_1->respool, VAR_1,
                              VAR_0, VAR_0);


    VAR_3 = VAR_1->setup(VAR_1, VAR_1->setup_baton,
                            &VAR_1->req_bkt,
                            &VAR_1->acceptor,
                            &VAR_1->acceptor_baton,
                            &VAR_1->handler,
                            &VAR_1->handler_baton,
                            VAR_1->respool);
    return VAR_3;
}

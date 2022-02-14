
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int handler_baton; int resp_bkt; scalar_t__ (* handler ) (TYPE_3__*,int ,int ,int *) ;TYPE_2__* conn; } ;
typedef TYPE_3__ serf_request_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {TYPE_1__* ctx; } ;
struct TYPE_7__ {scalar_t__ cred_cb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int*,TYPE_3__*,int ,int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,int ,int *) ;

__attribute__((used)) static apr_status_t FUNC_2(serf_request_t *VAR_1,
                                    apr_pool_t *VAR_2)
{
    apr_status_t VAR_3 = VAR_0;
    int VAR_4 = 0;







    if (VAR_1->conn->ctx->cred_cb) {
      VAR_3 = FUNC_0(&VAR_4,
                                          VAR_1,
                                          VAR_1->resp_bkt,
                                          VAR_1->handler_baton,
                                          VAR_2);







      if (VAR_3) {
          return VAR_3;
      }
    }

    if (!VAR_4) {
        return (*VAR_1->handler)(VAR_1,
                                   VAR_1->resp_bkt,
                                   VAR_1->handler_baton,
                                   VAR_2);
    }

    return VAR_3;
}

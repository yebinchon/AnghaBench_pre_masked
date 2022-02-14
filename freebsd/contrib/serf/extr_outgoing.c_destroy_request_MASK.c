
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ respool; int allocator; TYPE_4__* req_bkt; TYPE_4__* resp_bkt; TYPE_2__* conn; } ;
typedef TYPE_1__ serf_request_t ;
struct TYPE_7__ {int allocator; } ;
typedef TYPE_2__ serf_connection_t ;
typedef int apr_status_t ;
struct TYPE_8__ {int allocator; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static apr_status_t FUNC_5(serf_request_t *VAR_1)
{
    serf_connection_t *VAR_2 = VAR_1->conn;



    if (VAR_1->resp_bkt) {
        FUNC_4(VAR_1->resp_bkt->allocator);
        FUNC_1(VAR_1->resp_bkt);
        VAR_1->resp_bkt = ((void*)0);
    }
    if (VAR_1->req_bkt) {
        FUNC_4(VAR_1->req_bkt->allocator);
        FUNC_1(VAR_1->req_bkt);
        VAR_1->req_bkt = ((void*)0);
    }

    FUNC_3(VAR_1->allocator);
    if (VAR_1->respool) {

        FUNC_0(VAR_1->respool);
    }

    FUNC_2(VAR_2->allocator, VAR_1);

    return VAR_0;
}

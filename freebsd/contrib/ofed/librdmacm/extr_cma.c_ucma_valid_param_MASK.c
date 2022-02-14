
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rdma_conn_param {scalar_t__ responder_resources; scalar_t__ initiator_depth; } ;
struct TYPE_3__ {scalar_t__ ps; int qp; } ;
struct cma_id_private {TYPE_2__* cma_dev; TYPE_1__ id; } ;
struct TYPE_4__ {scalar_t__ max_responder_resources; scalar_t__ max_initiator_depth; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1(struct cma_id_private *VAR_4,
       struct rdma_conn_param *VAR_5)
{
 if (VAR_4->id.ps != VAR_3)
  return 0;

 if (!VAR_4->id.qp && !VAR_5)
  goto err;

 if (!VAR_5)
  return 0;

 if ((VAR_5->responder_resources != VAR_2) &&
     (VAR_5->responder_resources > VAR_4->cma_dev->max_responder_resources))
  goto err;

 if ((VAR_5->initiator_depth != VAR_1) &&
     (VAR_5->initiator_depth > VAR_4->cma_dev->max_initiator_depth))
  goto err;

 return 0;
err:
 return FUNC_0(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct cma_id_private {int id; int responder_resources; int initiator_depth; int handle; } ;
struct TYPE_8__ {int responder_resources; int initiator_depth; } ;
struct TYPE_9__ {TYPE_2__ conn; } ;
struct TYPE_10__ {TYPE_3__ param; int * id; TYPE_1__* listen_id; } ;
struct cma_event {TYPE_5__* id_priv; TYPE_4__ event; } ;
struct TYPE_12__ {int fd; } ;
struct TYPE_7__ {TYPE_6__* channel; int qp_type; int ps; int context; } ;
struct TYPE_11__ {scalar_t__ sync; TYPE_1__ id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 struct cma_id_private* FUNC_3 (TYPE_6__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct cma_id_private*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct cma_event *VAR_1,
     uint32_t VAR_2)
{
 struct cma_id_private *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_1->id_priv->id.channel,
    VAR_1->id_priv->id.context, VAR_1->id_priv->id.ps,
    VAR_1->id_priv->id.qp_type);
 if (!VAR_3) {
  FUNC_5(VAR_1->id_priv->id.channel->fd, VAR_2);
  VAR_4 = FUNC_0(VAR_0);
  goto err1;
 }

 VAR_1->event.listen_id = &VAR_1->id_priv->id;
 VAR_1->event.id = &VAR_3->id;
 VAR_3->handle = VAR_2;
 FUNC_6(VAR_3);
 VAR_3->initiator_depth = VAR_1->event.param.conn.initiator_depth;
 VAR_3->responder_resources = VAR_1->event.param.conn.responder_resources;

 if (VAR_1->id_priv->sync) {
  VAR_4 = FUNC_2(&VAR_3->id, ((void*)0));
  if (VAR_4)
   goto err2;
 }

 VAR_4 = FUNC_7(&VAR_3->id);
 if (VAR_4)
  goto err2;

 return 0;

err2:
 FUNC_1(&VAR_3->id);
err1:
 FUNC_4(VAR_1->id_priv);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int dgid; } ;
struct TYPE_15__ {int dlid; TYPE_5__ grh; } ;
struct TYPE_14__ {TYPE_7__ ah_attr; } ;
struct TYPE_16__ {TYPE_6__ ud; } ;
struct TYPE_9__ {TYPE_8__ param; } ;
struct cma_event {TYPE_4__* mc; TYPE_3__* id_priv; TYPE_1__ event; } ;
struct TYPE_12__ {int mlid; int mgid; } ;
struct TYPE_10__ {int qp; } ;
struct TYPE_11__ {TYPE_2__ id; } ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct cma_event *VAR_0)
{
 VAR_0->mc->mgid = VAR_0->event.param.ud.ah_attr.grh.dgid;
 VAR_0->mc->mlid = VAR_0->event.param.ud.ah_attr.dlid;

 if (!VAR_0->id_priv->id.qp)
  return 0;

 return FUNC_1(FUNC_0(VAR_0->id_priv->id.qp,
           &VAR_0->mc->mgid, VAR_0->mc->mlid));
}

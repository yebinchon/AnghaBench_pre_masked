
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int event; scalar_t__ status; } ;
struct cma_event {TYPE_3__ event; TYPE_4__* id_priv; } ;
struct TYPE_11__ {TYPE_2__* verbs; } ;
struct TYPE_10__ {TYPE_5__ id; } ;
struct TYPE_8__ {TYPE_1__* device; } ;
struct TYPE_7__ {scalar_t__ transport_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_2(struct cma_event *VAR_3)
{
 if (VAR_3->id_priv->id.verbs->device->transport_type != VAR_0)
  return;

 if (VAR_2)
  VAR_3->event.status = FUNC_0(&VAR_3->id_priv->id);
 else
  VAR_3->event.status = FUNC_1(&VAR_3->id_priv->id);

 if (VAR_3->event.status)
  VAR_3->event.event = VAR_1;
}

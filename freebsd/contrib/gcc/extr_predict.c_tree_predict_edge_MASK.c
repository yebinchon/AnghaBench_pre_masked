
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct edge_prediction {int ep_probability; int ep_predictor; TYPE_1__* ep_edge; struct edge_prediction* ep_next; } ;
typedef enum br_predictor { ____Placeholder_br_predictor } br_predictor ;
typedef TYPE_1__* edge ;
struct TYPE_5__ {struct edge_prediction* predictions; int succs; } ;
struct TYPE_4__ {TYPE_3__* src; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 struct edge_prediction* FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_3 (edge VAR_5, enum br_predictor VAR_6, int VAR_7)
{
  FUNC_1 (VAR_4 != VAR_1);
  if ((VAR_5->src != VAR_0 && FUNC_0 (VAR_5->src->succs) > 1)
      && VAR_2 && VAR_3)
    {
      struct edge_prediction *VAR_8 = FUNC_2 (sizeof (struct edge_prediction));

      VAR_8->ep_next = VAR_5->src->predictions;
      VAR_5->src->predictions = VAR_8;
      VAR_8->ep_probability = VAR_7;
      VAR_8->ep_predictor = VAR_6;
      VAR_8->ep_edge = VAR_5;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum br_predictor { ____Placeholder_br_predictor } br_predictor ;
typedef int edge ;
struct TYPE_2__ {int (* predict_edge ) (int ,int,int) ;int name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int,int) ;

void
FUNC_2 (edge VAR_1, enum br_predictor VAR_2, int VAR_3)
{
  if (!VAR_0->predict_edge)
    FUNC_0 ("%s does not support predict_edge", VAR_0->name);

  VAR_0->predict_edge (VAR_1, VAR_2, VAR_3);
}

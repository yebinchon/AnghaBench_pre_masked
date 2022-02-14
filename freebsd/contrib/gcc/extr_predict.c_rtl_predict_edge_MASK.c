
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
typedef enum br_predictor { ____Placeholder_br_predictor } br_predictor ;
typedef TYPE_1__* edge ;
struct TYPE_3__ {int flags; int src; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;

void
FUNC_3 (edge VAR_2, enum br_predictor VAR_3, int VAR_4)
{
  rtx VAR_5;
  VAR_5 = FUNC_0 (VAR_2->src);



  if (!FUNC_1 (VAR_5))
    return;


  if (VAR_2->flags & VAR_0)
    VAR_4 = VAR_1 - VAR_4;

  FUNC_2 (VAR_5, VAR_3, VAR_4);
}

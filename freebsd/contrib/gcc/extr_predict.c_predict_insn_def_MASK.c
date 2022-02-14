
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
typedef enum prediction { ____Placeholder_prediction } prediction ;
typedef enum br_predictor { ____Placeholder_br_predictor } br_predictor ;
struct TYPE_2__ {int hitrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 TYPE_1__* VAR_2 ;

void
FUNC_1 (rtx VAR_3, enum br_predictor VAR_4,
    enum prediction VAR_5)
{
   int VAR_6 = VAR_2[(int) VAR_4].hitrate;

   if (VAR_5 != VAR_1)
     VAR_6 = VAR_0 - VAR_6;

   FUNC_0 (VAR_3, VAR_4, VAR_6);
}

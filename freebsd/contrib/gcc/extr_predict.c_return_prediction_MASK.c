
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum prediction { ____Placeholder_prediction } prediction ;
typedef enum br_predictor { ____Placeholder_br_predictor } br_predictor ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static enum br_predictor
FUNC_8 (tree VAR_6, enum prediction *VAR_7)
{

  if (!VAR_6)
    return VAR_3;

  if (FUNC_1 (FUNC_4 (VAR_6)))
    {

      if (FUNC_6 (VAR_6))
 {
   *VAR_7 = VAR_1;
   return VAR_4;
 }
    }
  else if (FUNC_0 (FUNC_4 (VAR_6)))
    {


      if (FUNC_2 (VAR_6) == VAR_0
   && FUNC_7 (VAR_6) < 0)
 {
   *VAR_7 = VAR_1;
   return VAR_2;
 }



      if (FUNC_3 (VAR_6)
   && (!FUNC_6 (VAR_6) && !FUNC_5 (VAR_6)))
 {
   *VAR_7 = VAR_5;
   return VAR_2;
 }
    }
  return VAR_3;
}

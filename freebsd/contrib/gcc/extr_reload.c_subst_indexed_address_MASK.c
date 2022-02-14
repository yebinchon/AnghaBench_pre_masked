
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static rtx
FUNC_5 (rtx VAR_4)
{
  rtx VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
  rtx VAR_8;
  int VAR_9;

  if (FUNC_0 (VAR_4) == VAR_1)
    {

      VAR_5 = FUNC_3 (VAR_4, 0), VAR_6 = FUNC_3 (VAR_4, 1), VAR_7 = 0;
      if (FUNC_2 (VAR_5)
   && (VAR_9 = FUNC_1 (VAR_5)) >= VAR_0
   && VAR_3[VAR_9] < 0
   && VAR_2[VAR_9] != 0)
 VAR_5 = VAR_2[VAR_9];
      else if (FUNC_2 (VAR_6)
        && (VAR_9 = FUNC_1 (VAR_6)) >= VAR_0
        && VAR_3[VAR_9] < 0
        && VAR_2[VAR_9] != 0)
 VAR_6 = VAR_2[VAR_9];
      else if (FUNC_0 (VAR_5) == VAR_1
        && (VAR_8 = FUNC_5 (VAR_5)) != VAR_5)
 VAR_5 = VAR_8;
      else if (FUNC_0 (VAR_6) == VAR_1
        && (VAR_8 = FUNC_5 (VAR_6)) != VAR_6)
 VAR_6 = VAR_8;
      else
 return VAR_4;


      if (FUNC_0 (VAR_6) == VAR_1)
 VAR_7 = FUNC_3 (VAR_6, 1), VAR_6 = FUNC_3 (VAR_6, 0);
      else if (FUNC_0 (VAR_5) == VAR_1)
 VAR_7 = VAR_6, VAR_6 = FUNC_3 (VAR_5, 1), VAR_5 = FUNC_3 (VAR_5, 0);


      if (VAR_7 != 0)
 VAR_6 = FUNC_4 (VAR_6, VAR_7);
      if (VAR_6 != 0)
 VAR_5 = FUNC_4 (VAR_5, VAR_6);

      return VAR_5;
    }
  return VAR_4;
}

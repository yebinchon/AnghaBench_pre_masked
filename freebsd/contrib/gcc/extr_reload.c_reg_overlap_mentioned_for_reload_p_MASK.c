
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int) ;
 int** VAR_9 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int,int ,int *) ;
 int* VAR_10 ;
 scalar_t__* VAR_11 ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (int,size_t,int ,size_t) ;

int
FUNC_16 (rtx VAR_12, rtx VAR_13)
{
  int VAR_14, VAR_15;


  if (FUNC_1 (VAR_12) == VAR_7
      || FUNC_3 (FUNC_1 (VAR_12)) == VAR_5)
    VAR_12 = FUNC_9 (VAR_12, 0);


  if (FUNC_0 (VAR_12) || FUNC_0 (VAR_13))
    return 0;
  else if (FUNC_1 (VAR_12) == VAR_8 && FUNC_1 (FUNC_8 (VAR_12)) == VAR_2)
    return FUNC_11 (VAR_13);
  else if (FUNC_1 (VAR_12) == VAR_8)
    {
      VAR_14 = FUNC_5 (FUNC_8 (VAR_12));
      if (VAR_14 < VAR_1)
 VAR_14 += FUNC_15 (FUNC_5 (FUNC_8 (VAR_12)),
          FUNC_2 (FUNC_8 (VAR_12)),
          FUNC_7 (VAR_12),
          FUNC_2 (VAR_12));
    }
  else if (FUNC_6 (VAR_12))
    {
      VAR_14 = FUNC_5 (VAR_12);




      if (VAR_14 >= VAR_1)
 {
   if (VAR_11[VAR_14])
     return FUNC_11 (VAR_13);
   FUNC_10 (VAR_10[VAR_14]);
   return 0;
 }
    }
  else if (FUNC_4 (VAR_12))
    return FUNC_11 (VAR_13);
  else if (FUNC_1 (VAR_12) == VAR_6 || FUNC_1 (VAR_12) == VAR_3
    || FUNC_1 (VAR_12) == VAR_0)
    return FUNC_13 (VAR_12, VAR_13);
  else
    {
      FUNC_10 (FUNC_1 (VAR_12) == VAR_4);






      while (FUNC_4 (VAR_13))
 VAR_13 = FUNC_9 (VAR_13, 0);
      if (FUNC_6 (VAR_13))
 return 0;
      else if (FUNC_1 (VAR_13) == VAR_4)
 return (FUNC_14 (VAR_12, VAR_13)
  || FUNC_16 (VAR_12, FUNC_9 (VAR_13, 0))
  || FUNC_16 (VAR_12, FUNC_9 (VAR_13, 1)));
      else return (FUNC_16 (FUNC_9 (VAR_12, 0), VAR_13)
     || FUNC_16 (FUNC_9 (VAR_12, 1), VAR_13));
    }

  VAR_15 = VAR_14 + (VAR_14 < VAR_1
        ? VAR_9[VAR_14][FUNC_2 (VAR_12)] : 1);

  return FUNC_12 (VAR_14, VAR_15, VAR_13, (rtx*) 0);
}

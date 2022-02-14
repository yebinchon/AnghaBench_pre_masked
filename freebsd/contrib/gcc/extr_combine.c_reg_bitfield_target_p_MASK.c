
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int) ;
 int FUNC_8 (scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 unsigned int** VAR_6 ;

__attribute__((used)) static int
FUNC_9 (rtx VAR_7, rtx VAR_8)
{
  int VAR_9;

  if (FUNC_0 (VAR_8) == VAR_2)
    {
      rtx VAR_10 = FUNC_4 (VAR_8);
      rtx VAR_11;
      unsigned int VAR_12, VAR_13, VAR_14, VAR_15;

      if (FUNC_0 (VAR_10) == VAR_5)
 VAR_11 = FUNC_6 (VAR_10, 0);
      else if (FUNC_0 (VAR_10) == VAR_3)
 VAR_11 = FUNC_5 (FUNC_6 (VAR_10, 0));
      else
 return 0;

      if (FUNC_0 (VAR_11) == VAR_4)
 VAR_11 = FUNC_5 (VAR_11);

      if (!FUNC_3 (VAR_11))
 return 0;

      VAR_13 = FUNC_2 (VAR_11), VAR_12 = FUNC_2 (VAR_7);
      if (VAR_13 >= VAR_0 || VAR_12 >= VAR_0)
 return VAR_11 == VAR_7;

      VAR_15 = VAR_13 + VAR_6[VAR_13][FUNC_1 (VAR_11)];
      VAR_14 = VAR_12 + VAR_6[VAR_12][FUNC_1 (VAR_7)];

      return VAR_14 > VAR_13 && VAR_12 < VAR_15;
    }

  else if (FUNC_0 (VAR_8) == VAR_1)
    for (VAR_9 = FUNC_8 (VAR_8, 0) - 1; VAR_9 >= 0; VAR_9--)
      if (FUNC_9 (VAR_7, FUNC_7 (VAR_8, 0, VAR_9)))
 return 1;

  return 0;
}

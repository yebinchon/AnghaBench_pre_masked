
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int,int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ,int ) ;
 int VAR_11 ;
 int FUNC_15 (char const*,char const*,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int) ;
 int VAR_12 ;
 int FUNC_18 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_19 (tree VAR_13)
{
  tree VAR_14, VAR_15, VAR_16;
  const char *VAR_17, *VAR_18;

  if (!FUNC_18 (VAR_13,
    VAR_5, VAR_5, VAR_2, VAR_6))
    return 0;

  VAR_14 = FUNC_2 (VAR_13);
  VAR_15 = FUNC_2 (FUNC_0 (VAR_13));
  VAR_16 = FUNC_2 (FUNC_0 (FUNC_0 (VAR_13)));


  if (FUNC_11 (VAR_16))
    return FUNC_13 (VAR_9, VAR_10,
         VAR_14, VAR_15);


  if (FUNC_14 (VAR_14, VAR_15, 0))
    return FUNC_12 (VAR_9, VAR_10, VAR_16);

  VAR_17 = FUNC_6 (VAR_14);
  VAR_18 = FUNC_6 (VAR_15);

  if (FUNC_10 (VAR_16, 1) && VAR_17 && VAR_18)
    {
      const int VAR_19 = FUNC_15 (VAR_17, VAR_18, FUNC_17 (VAR_16, 1));
      if (VAR_19 > 0)
 return VAR_8;
      else if (VAR_19 < 0)
 return VAR_7;
      else
 return VAR_10;
    }



  if (VAR_18 && *VAR_18 == '\0'
      && FUNC_1 (VAR_16) == VAR_1
      && FUNC_16 (VAR_16) == 1)
    {
      tree VAR_20 = FUNC_5 (VAR_12, 1, 0);
      tree VAR_21
 = FUNC_4 (VAR_20, VAR_11, 1);

      return FUNC_9 (VAR_9,
      FUNC_3 (VAR_0, VAR_20,
       FUNC_9 (VAR_21,
       VAR_14)));
    }



  if (VAR_17 && *VAR_17 == '\0'
      && FUNC_1 (VAR_16) == VAR_1
      && FUNC_16 (VAR_16) == 1)
    {
      tree VAR_22 = FUNC_5 (VAR_12, 1, 0);
      tree VAR_23
 = FUNC_4 (VAR_22, VAR_11, 1);

      tree VAR_24 = FUNC_9 (VAR_9,
    FUNC_3 (VAR_0, VAR_22,
     FUNC_9 (VAR_23,
            VAR_15)));
      return FUNC_7 (VAR_4, VAR_9, VAR_24);
    }



  if (FUNC_10 (VAR_16, 1) && FUNC_17 (VAR_16, 1) == 1)
    {
      tree VAR_25 = FUNC_5 (VAR_12, 1, 0);
      tree VAR_26
 = FUNC_4 (VAR_25, VAR_11, 1);

      tree VAR_27 = FUNC_9 (VAR_9,
    FUNC_3 (VAR_0, VAR_25,
     FUNC_9 (VAR_26,
            VAR_14)));
      tree VAR_28 = FUNC_9 (VAR_9,
    FUNC_3 (VAR_0, VAR_25,
     FUNC_9 (VAR_26,
            VAR_15)));
      return FUNC_8 (VAR_3, VAR_9, VAR_27, VAR_28);
    }

  return 0;
}

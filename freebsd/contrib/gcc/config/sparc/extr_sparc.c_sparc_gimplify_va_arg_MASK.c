
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int VAR_9 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *,int *,int *,int ,int ) ;
 int * VAR_10 ;
 int FUNC_13 (int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_14 (int *,int ,int ,int) ;
 int VAR_12 ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_18 (tree VAR_13, tree VAR_14, tree *VAR_15, tree *VAR_16)
{
  HOST_WIDE_INT VAR_17, VAR_18, VAR_19;
  tree VAR_20, VAR_21;
  bool VAR_22;
  tree VAR_23 = FUNC_6 (VAR_14);

  if (FUNC_14 (((void*)0), FUNC_2 (VAR_14), VAR_14, 0))
    {
      VAR_22 = 1;
      VAR_17 = VAR_18 = VAR_8;
      VAR_19 = 0;
    }
  else
    {
      VAR_22 = 0;
      VAR_17 = FUNC_13 (VAR_14);
      VAR_18 = (VAR_17 + VAR_8 - 1) & -VAR_8;
      VAR_19 = 0;

      if (VAR_7)
 {

   if (FUNC_1 (VAR_14) >= 2 * (unsigned) VAR_0)
     VAR_19 = 2 * VAR_8;



   if (FUNC_0 (VAR_14))
     {
       if (VAR_17 == 0)
  VAR_17 = VAR_18 = VAR_8;
       else
  VAR_17 = VAR_18;
     }
 }
    }

  VAR_21 = VAR_13;
  if (VAR_19)
    {
      VAR_21 = FUNC_9 (FUNC_3 (VAR_6, VAR_12, VAR_21,
      FUNC_16 (VAR_19 - 1)));
      VAR_21 = FUNC_9 (FUNC_3 (VAR_1, VAR_12, VAR_21,
      FUNC_16 (-VAR_19)));
    }

  FUNC_12 (&VAR_21, VAR_15, VAR_16, VAR_11, VAR_9);
  VAR_20 = VAR_21;

  if (VAR_3 && VAR_17 < VAR_18)
    VAR_20 = FUNC_9 (FUNC_3 (VAR_6, VAR_12, VAR_21,
    FUNC_16 (VAR_18 - VAR_17)));

  if (VAR_22)
    {
      VAR_20 = FUNC_10 (FUNC_6 (VAR_23), VAR_20);
      VAR_20 = FUNC_7 (VAR_20);
    }




  else if (VAR_19 == 0
    && FUNC_1 (VAR_14) > VAR_0)
    {
      tree VAR_24 = FUNC_8 (VAR_14, "va_arg_tmp");
      tree VAR_25 = FUNC_4 (VAR_24);

      tree VAR_26 = FUNC_5
 (VAR_10[VAR_2],
  FUNC_17 (VAR_5, VAR_25,
      FUNC_17 (VAR_5, VAR_20,
          FUNC_17 (VAR_5, FUNC_15 (VAR_18),
       VAR_5))));

      FUNC_11 (VAR_26, VAR_15);
      VAR_20 = VAR_25;
    }
  else
    VAR_20 = FUNC_10 (VAR_23, VAR_20);

  VAR_21 = FUNC_9 (FUNC_3 (VAR_6, VAR_12, VAR_21, FUNC_16 (VAR_18)));
  VAR_21 = FUNC_3 (VAR_4, VAR_12, VAR_13, VAR_21);
  FUNC_11 (VAR_21, VAR_16);

  return FUNC_7 (VAR_20);
}

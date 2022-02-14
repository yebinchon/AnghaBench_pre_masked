
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (char*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static tree
FUNC_12 (tree VAR_11, tree VAR_12)
{
  tree VAR_13 = VAR_9;

  tree VAR_14 = FUNC_3 (FUNC_3 (VAR_11));
  tree VAR_15, VAR_16, VAR_17, VAR_18;
  tree VAR_19 = VAR_12;

  if (VAR_8 || VAR_10)
    {
      if (FUNC_1 (VAR_14) == VAR_6)
 FUNC_11 ("pointer of type %<void *%> used in subtraction");
      if (FUNC_1 (VAR_14) == VAR_2)
 FUNC_11 ("pointer to a function used in subtraction");
    }
  if ((FUNC_1 (VAR_11) == VAR_4 || FUNC_1 (VAR_11) == VAR_0)
      && (FUNC_4 (FUNC_3 (VAR_11))
   == FUNC_4 (FUNC_3 (FUNC_2 (VAR_11, 0)))))
    VAR_15 = FUNC_2 (VAR_11, 0);
  else
    VAR_15 = VAR_11;
  if ((FUNC_1 (VAR_12) == VAR_4 || FUNC_1 (VAR_12) == VAR_0)
      && (FUNC_4 (FUNC_3 (VAR_12))
   == FUNC_4 (FUNC_3 (FUNC_2 (VAR_12, 0)))))
    VAR_16 = FUNC_2 (VAR_12, 0);
  else
    VAR_16 = VAR_12;

  if (FUNC_1 (VAR_15) == VAR_5)
    {
      VAR_17 = FUNC_2 (VAR_15, 1);
      VAR_15 = FUNC_2 (VAR_15, 0);
    }
  else
    VAR_17 = VAR_7;

  if (FUNC_1 (VAR_16) == VAR_5)
    {
      VAR_18 = FUNC_2 (VAR_16, 1);
      VAR_16 = FUNC_2 (VAR_16, 0);
    }
  else
    VAR_18 = VAR_7;

  if (FUNC_10 (VAR_15, VAR_16, 0))
    {
      VAR_11 = VAR_17;
      VAR_12 = VAR_18;
    }







  VAR_11 = FUNC_5 (VAR_3, FUNC_7 (VAR_13, VAR_11),
    FUNC_7 (VAR_13, VAR_12), 0);

  if (!FUNC_0 (FUNC_3 (FUNC_3 (VAR_19))))
    FUNC_8 ("arithmetic on pointer to an incomplete type");


  VAR_12 = FUNC_6 (VAR_14);


  return FUNC_9 (VAR_1, VAR_13, VAR_11, FUNC_7 (VAR_13, VAR_12));
}

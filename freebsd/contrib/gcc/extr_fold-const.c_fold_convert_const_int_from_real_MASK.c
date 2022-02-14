
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int REAL_VALUE_TYPE ;
typedef scalar_t__ HOST_WIDE_INT ;






 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int,int,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int *,int ,int *) ;
 int FUNC_14 (int *,int ,int *) ;
 int FUNC_15 (int *,int ,int *) ;
 int FUNC_16 (int *,int ,int *) ;
 int FUNC_17 (int ,scalar_t__) ;

__attribute__((used)) static tree
FUNC_18 (enum tree_code VAR_2, tree VAR_3, tree VAR_4)
{
  int VAR_5 = 0;
  tree VAR_6;
  HOST_WIDE_INT VAR_7, VAR_8;
  REAL_VALUE_TYPE VAR_9;
  REAL_VALUE_TYPE VAR_10 = FUNC_7 (VAR_4);

  switch (VAR_2)
    {
    case 128:
      FUNC_16 (&VAR_9, VAR_1, &VAR_10);
      break;

    case 131:
      FUNC_13 (&VAR_9, VAR_1, &VAR_10);
      break;

    case 130:
      FUNC_14 (&VAR_9, VAR_1, &VAR_10);
      break;

    case 129:
      FUNC_15 (&VAR_9, VAR_1, &VAR_10);
      break;

    default:
      FUNC_12 ();
    }


  if (FUNC_1 (VAR_9))
    {
      VAR_5 = 1;
      VAR_7 = 0;
      VAR_8 = 0;
    }




  if (! VAR_5)
    {
      tree VAR_11 = FUNC_9 (VAR_3);
      REAL_VALUE_TYPE VAR_12 = FUNC_17 (VAR_0, VAR_11);
      if (FUNC_0 (VAR_9, VAR_12))
 {
   VAR_5 = 1;
   VAR_7 = FUNC_4 (VAR_11);
   VAR_8 = FUNC_5 (VAR_11);
 }
    }

  if (! VAR_5)
    {
      tree VAR_13 = FUNC_8 (VAR_3);
      if (VAR_13)
 {
   REAL_VALUE_TYPE VAR_14 = FUNC_17 (VAR_0, VAR_13);
   if (FUNC_0 (VAR_14, VAR_9))
     {
       VAR_5 = 1;
       VAR_7 = FUNC_4 (VAR_13);
       VAR_8 = FUNC_5 (VAR_13);
     }
 }
    }

  if (! VAR_5)
    FUNC_2 (&VAR_8, &VAR_7, VAR_9);

  VAR_6 = FUNC_10 (VAR_3, VAR_8, VAR_7);

  VAR_6 = FUNC_11 (VAR_6, -1, VAR_5 | FUNC_6 (VAR_4),
        FUNC_3 (VAR_4));
  return VAR_6;
}

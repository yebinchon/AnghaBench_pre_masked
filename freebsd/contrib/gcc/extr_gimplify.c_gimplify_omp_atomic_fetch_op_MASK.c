
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef enum insn_code { ____Placeholder_insn_code } insn_code ;
typedef enum gimplify_status { ____Placeholder_gimplify_status } gimplify_status ;
typedef enum built_in_function { ____Placeholder_built_in_function } built_in_function ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;
 int * FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int ** VAR_8 ;
 scalar_t__ FUNC_5 (int) ;
 int * FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int* VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int * FUNC_8 (int *,int *,int *) ;

__attribute__((used)) static enum gimplify_status
FUNC_9 (tree *VAR_13, tree VAR_14, tree VAR_15, int VAR_16)
{
  enum built_in_function VAR_17;
  tree VAR_18, VAR_19, VAR_20;
  enum insn_code *VAR_21;


  switch (FUNC_0 (VAR_15))
    {
    case 128:
      VAR_17 = VAR_0;
      VAR_21 = VAR_9;
      break;
    case 129:
      VAR_17 = VAR_3;
      VAR_21 = VAR_9;
      break;
    case 132:
      VAR_17 = VAR_1;
      VAR_21 = VAR_10;
      break;
    case 131:
      VAR_17 = VAR_2;
      VAR_21 = VAR_11;
      break;
    case 130:
      VAR_17 = VAR_4;
      VAR_21 = VAR_12;
      break;
    default:
      return VAR_7;
    }


  if (FUNC_7 (FUNC_1 (VAR_15, 0), VAR_14))
    VAR_15 = FUNC_1 (VAR_15, 1);
  else if (FUNC_5 (FUNC_0 (VAR_15))
    && FUNC_7 (FUNC_1 (VAR_15, 1), VAR_14))
    VAR_15 = FUNC_1 (VAR_15, 0);
  else
    return VAR_7;

  VAR_18 = VAR_8[VAR_17 + VAR_16 + 1];
  VAR_20 = FUNC_2 (FUNC_2 (VAR_18));

  if (VAR_21[FUNC_3 (VAR_20)] == VAR_5)
    return VAR_7;

  VAR_19 = FUNC_8 (((void*)0), FUNC_6 (VAR_20, VAR_15), ((void*)0));
  VAR_19 = FUNC_8 (((void*)0), VAR_14, VAR_19);
  *VAR_13 = FUNC_4 (VAR_18, VAR_19);
  return VAR_6;
}

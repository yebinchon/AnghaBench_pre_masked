
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef enum gimplify_status { ____Placeholder_gimplify_status } gimplify_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **) ;
 int * FUNC_4 (int,int ,int *,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int **) ;
 int FUNC_7 (int **,int **,int **,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static enum gimplify_status
FUNC_8 (tree *VAR_14, tree *VAR_15, tree *VAR_16,
   bool VAR_17)
{
  enum tree_code VAR_18;
  tree VAR_19, VAR_20, VAR_21, VAR_22, VAR_23 = ((void*)0), *VAR_24 = VAR_16;
  bool VAR_25;
  enum tree_code VAR_26;
  enum gimplify_status VAR_27;

  VAR_18 = FUNC_0 (*VAR_14);

  FUNC_5 (VAR_18 == VAR_7 || VAR_18 == VAR_6
       || VAR_18 == VAR_9 || VAR_18 == VAR_8);


  if (VAR_18 == VAR_7 || VAR_18 == VAR_6)

    VAR_25 = VAR_17;
  else
    VAR_25 = 0;



  if (VAR_25)
    VAR_16 = &VAR_23;


  if (VAR_18 == VAR_9 || VAR_18 == VAR_7)
    VAR_26 = VAR_5;
  else
    VAR_26 = VAR_3;


  VAR_20 = FUNC_1 (*VAR_14, 0);
  VAR_27 = FUNC_7 (&VAR_20, VAR_15, VAR_16, VAR_12, VAR_10);
  if (VAR_27 == VAR_1)
    return VAR_27;


  VAR_19 = VAR_20;
  VAR_21 = FUNC_1 (*VAR_14, 1);



  if (VAR_25)
    {
      VAR_27 = FUNC_7 (&VAR_19, VAR_15, VAR_16, VAR_13, VAR_11);
      if (VAR_27 == VAR_1)
 return VAR_27;
    }

  VAR_22 = FUNC_4 (VAR_26, FUNC_2 (*VAR_14), VAR_19, VAR_21);
  VAR_22 = FUNC_4 (VAR_4, FUNC_2 (VAR_20), VAR_20, VAR_22);

  if (VAR_25)
    {
      FUNC_6 (VAR_22, VAR_24);
      FUNC_3 (VAR_23, VAR_24);
      *VAR_14 = VAR_19;
      return VAR_0;
    }
  else
    {
      *VAR_14 = VAR_22;
      return VAR_2;
    }
}

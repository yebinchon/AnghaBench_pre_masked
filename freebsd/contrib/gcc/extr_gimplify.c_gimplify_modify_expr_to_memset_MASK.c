
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef enum gimplify_status { ____Placeholder_gimplify_status } gimplify_status ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int ** VAR_4 ;
 int * VAR_5 ;
 int * FUNC_5 (int *,int *,int *) ;

__attribute__((used)) static enum gimplify_status
FUNC_6 (tree *VAR_6, tree VAR_7, bool VAR_8)
{
  tree VAR_9, VAR_10, VAR_11, VAR_12;

  VAR_11 = FUNC_0 (*VAR_6, 0);

  VAR_9 = FUNC_5 (((void*)0), VAR_7, ((void*)0));

  VAR_9 = FUNC_5 (((void*)0), VAR_5, VAR_9);

  VAR_12 = FUNC_3 (VAR_11);
  VAR_9 = FUNC_5 (((void*)0), VAR_12, VAR_9);
  VAR_10 = VAR_4[VAR_0];
  VAR_10 = FUNC_4 (VAR_10, VAR_9);

  if (VAR_8)
    {
      VAR_10 = FUNC_2 (VAR_3, FUNC_1 (VAR_12), VAR_10);
      VAR_10 = FUNC_2 (VAR_2, FUNC_1 (VAR_11), VAR_10);
    }

  *VAR_6 = VAR_10;
  return VAR_1;
}

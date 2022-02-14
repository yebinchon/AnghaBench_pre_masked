
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsubst_flags_t ;
typedef int * tree ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *,int *) ;
 int * FUNC_6 (int *,int *,int ,int *,int,int) ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static tree
FUNC_7 (tree VAR_3, tree VAR_4, tsubst_flags_t VAR_5,
     tree VAR_6)
{


  tree VAR_7, VAR_8, VAR_9;

  if (VAR_3 == ((void*)0))
    return VAR_3;

  if (FUNC_2 (VAR_3) != VAR_0)
    return FUNC_6 (VAR_3, VAR_4, VAR_5, VAR_6,
                     0,
                                         0);

  if (VAR_3 == VAR_1)
    return VAR_3;

  VAR_7 = FUNC_3 (VAR_3);
  if (VAR_7)
    VAR_7 = FUNC_7 (VAR_7, VAR_4, VAR_5, VAR_6);
  VAR_8 = FUNC_4 (VAR_3);
  if (VAR_8)
    VAR_8 = FUNC_7 (VAR_8, VAR_4, VAR_5, VAR_6);
  VAR_9 = FUNC_1 (VAR_3);
  if (VAR_9 && VAR_9 != VAR_2)
    VAR_9 = FUNC_7 (VAR_9, VAR_4, VAR_5, VAR_6);
  return FUNC_5 (VAR_7, VAR_8, VAR_9);

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int * diagnostic_fn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static tree
FUNC_2 (tree VAR_6, tree VAR_7, int VAR_8,
     diagnostic_fn_t *VAR_9)
{
  int VAR_10, VAR_11;

  VAR_10 = VAR_5, VAR_11 = VAR_3;
  VAR_6 = FUNC_0 (VAR_0,
        VAR_1,
        FUNC_1 (VAR_0, VAR_6),
        VAR_7, VAR_8);
  if (VAR_5 > VAR_10)
    *VAR_9 = VAR_4;
  else if (VAR_3 > VAR_11)
    *VAR_9 = VAR_2;
  else
    *VAR_9 = ((void*)0);
  return VAR_6;
}

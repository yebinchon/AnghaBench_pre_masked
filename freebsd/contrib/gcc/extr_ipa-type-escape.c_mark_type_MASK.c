
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef enum escape_t { ____Placeholder_escape_t } escape_t ;
typedef int * bitmap ;




 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,int,int) ;
 int * VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static tree
FUNC_4 (tree VAR_2, enum escape_t VAR_3)
{
  bitmap VAR_4 = ((void*)0);
  int VAR_5;

  VAR_2 = FUNC_3 (VAR_2, 1, 1);
  if (!VAR_2)
    return ((void*)0);

  switch (VAR_3)
    {
    case 129:
      VAR_4 = VAR_0;
      break;
    case 128:
      VAR_4 = VAR_1;
      break;
    }

  VAR_5 = FUNC_0 (VAR_2);
  if (FUNC_1 (VAR_4, VAR_5))
    return VAR_2;
  else
    {
      FUNC_2 (VAR_4, VAR_5);
      if (VAR_3 == 128)
 {


   FUNC_2 (VAR_0, VAR_5);
 }
    }
  return VAR_2;
}

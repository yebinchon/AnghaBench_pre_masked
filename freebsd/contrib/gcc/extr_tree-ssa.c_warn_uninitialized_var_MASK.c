
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;



 int FUNC_0 (int ) ;
 int VAR_0 ;


 int const FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,void*) ;

__attribute__((used)) static tree
FUNC_4 (tree *VAR_1, int *VAR_2, void *VAR_3)
{
  tree VAR_4 = *VAR_1;

  switch (FUNC_1 (VAR_4))
    {
    case 128:


      FUNC_3 (VAR_4, "%H%qD is used uninitialized in this function", VAR_3);
      *VAR_2 = 0;
      break;

    case 129:
    case 130:



      if (FUNC_1 (FUNC_2 (VAR_4, 0)) == 128)
 *VAR_2 = 0;
      break;

    default:
      if (FUNC_0 (VAR_4))
 *VAR_2 = 0;
      break;
    }

  return VAR_0;
}

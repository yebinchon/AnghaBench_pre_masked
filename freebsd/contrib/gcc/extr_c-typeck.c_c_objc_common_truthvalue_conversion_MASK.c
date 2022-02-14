
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 () ;

tree
FUNC_5 (tree VAR_1)
{
  switch (FUNC_0 (FUNC_1 (VAR_1)))
    {
    case 131:
      FUNC_3 ("used array that cannot be converted to pointer where scalar is required");
      return VAR_0;

    case 129:
      FUNC_3 ("used struct type value where scalar is required");
      return VAR_0;

    case 128:
      FUNC_3 ("used union type value where scalar is required");
      return VAR_0;

    case 130:
      FUNC_4 ();

    default:
      break;
    }



  return FUNC_2 (VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;



 int FUNC_0 (int ) ;


 int VAR_0 ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ,int ,int ) ;

tree
FUNC_6 (tree VAR_1)
{
  tree VAR_2, VAR_3;

  switch (FUNC_1 (VAR_1))
    {
    case 131:
    case 129:
      VAR_2 = FUNC_6 (FUNC_2 (VAR_1, 0));
      return VAR_2 ? VAR_2 : FUNC_2 (VAR_1, 0);

    case 130:
    case 128:
      if (FUNC_0 (FUNC_4 (FUNC_3 (VAR_1))))
 return VAR_0;
      VAR_2 = FUNC_6 (FUNC_2 (VAR_1, 0));
      VAR_3 = FUNC_6 (FUNC_2 (VAR_1, 1));
      if (VAR_2 != VAR_0 || VAR_3 != VAR_0)
 return FUNC_5 (FUNC_1 (VAR_1), FUNC_3 (VAR_1),
       VAR_2 ? VAR_2 : FUNC_2 (VAR_1, 0),
       VAR_3 ? VAR_3 : FUNC_2 (VAR_1, 1));
      break;

    default:
      break;
    }
  return VAR_0;
}

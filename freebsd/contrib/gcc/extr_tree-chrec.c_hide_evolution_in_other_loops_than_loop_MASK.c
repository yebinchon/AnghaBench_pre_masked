
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;

 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (unsigned int,int ,int ) ;
 int FUNC_6 (int ) ;

tree
FUNC_7 (tree VAR_0,
      unsigned VAR_1)
{
  if (FUNC_4 (VAR_0))
    return VAR_0;

  switch (FUNC_3 (VAR_0))
    {
    case 128:
      if (FUNC_2 (VAR_0) == VAR_1)
 return FUNC_5
   (VAR_1,
    FUNC_7 (FUNC_0 (VAR_0),
          VAR_1),
    FUNC_1 (VAR_0));

      else if (FUNC_2 (VAR_0) < VAR_1)

 return FUNC_6 (VAR_0);

      else
 return FUNC_7 (FUNC_0 (VAR_0),
       VAR_1);

    default:
      return VAR_0;
    }
}

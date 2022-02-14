
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int c_parser ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static tree
FUNC_4 (c_parser *VAR_2)
{
  tree VAR_3 = VAR_1;
  while (1)
    {
      tree VAR_4 = FUNC_0 (VAR_2);
      if (VAR_4)
 VAR_3 = FUNC_3 (VAR_1, VAR_4, VAR_3);
      else
 return VAR_1;
      if (FUNC_2 (VAR_2, VAR_0))
 FUNC_1 (VAR_2);
      else
 break;
    }
  return VAR_3;
}

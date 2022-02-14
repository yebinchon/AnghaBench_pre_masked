
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int c_parser ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static tree
FUNC_6 (c_parser *VAR_2)
{
  tree VAR_3 = FUNC_3 (VAR_2);
  tree VAR_4 = VAR_1;
  if (VAR_3 && FUNC_1 (VAR_2, VAR_0))
    return VAR_3;
  while (1)
    {
      tree VAR_5;
      if (!FUNC_4 (VAR_2, VAR_0, "expected %<:%>"))
 return VAR_4;
      VAR_5 = FUNC_2 (VAR_2);
      VAR_4 = FUNC_5 (VAR_4, FUNC_0 (VAR_3, VAR_5));
      VAR_3 = FUNC_3 (VAR_2);
      if (!VAR_3 && FUNC_1 (VAR_2, VAR_0))
 break;
    }
  return VAR_4;
}

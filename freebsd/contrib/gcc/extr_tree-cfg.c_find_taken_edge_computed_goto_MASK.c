
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int * edge ;
typedef scalar_t__ basic_block ;


 int * FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static edge
FUNC_3 (basic_block VAR_0, tree VAR_1)
{
  basic_block VAR_2;
  edge VAR_3 = ((void*)0);

  VAR_2 = FUNC_2 (VAR_1);
  if (VAR_2)
    {
      VAR_3 = FUNC_0 (VAR_0, VAR_2);
      FUNC_1 (VAR_3 != ((void*)0));
    }

  return VAR_3;
}

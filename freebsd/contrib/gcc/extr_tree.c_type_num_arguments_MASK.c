
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

int
FUNC_4 (tree VAR_0)
{
  int VAR_1 = 0;
  tree VAR_2;

  for (VAR_2 = FUNC_2 (VAR_0); VAR_2; VAR_2 = FUNC_0 (VAR_2))


    if (FUNC_3 (FUNC_1 (VAR_2)))
      break;
    else
      ++VAR_1;

  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

int
FUNC_2 (tree VAR_0, tree VAR_1)
{
  HOST_WIDE_INT VAR_2, VAR_3;




  if (VAR_0 == 0 && VAR_1 == 0)
    return 0;


  if (VAR_0 == VAR_1

      || (VAR_0 != 0 && FUNC_0 (VAR_0) && VAR_1 != 0 && FUNC_0 (VAR_1)))
    return 1;

  VAR_2 = VAR_0 ? FUNC_1 (VAR_0) : 0;
  VAR_3 = VAR_1 ? FUNC_1 (VAR_1) : 0;






  return VAR_2 == 0 || VAR_3 == 0 || VAR_2 == VAR_3;
}

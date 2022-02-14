
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int
FUNC_1 (tree VAR_2)
{
  HOST_WIDE_INT VAR_3;

  VAR_3 = FUNC_0 (VAR_2);

  if (VAR_3 < 0 || VAR_3 > VAR_0 * VAR_1)

    return 4;
  else
    return ((VAR_3 + VAR_0 - 1) / VAR_0);
}

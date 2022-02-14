
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool
FUNC_1 (int VAR_2, tree VAR_3)
{
  int VAR_4, VAR_5;

  if (!VAR_0)
    return 0;


  VAR_4 = FUNC_0 (VAR_3);
  VAR_4 = (VAR_4 + 1) * VAR_2;


  VAR_5 = 10 + 2 * VAR_2;


  if (VAR_1)
    return VAR_4 < VAR_5;


  if (VAR_0 > 1)
    return VAR_4 < 100 || VAR_4 < VAR_5 * 2;
  else
    return VAR_4 < 40 || VAR_4 * 2 < VAR_5 * 3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

__attribute__((used)) static double
FUNC_1 (double VAR_0)
{
  double VAR_1, VAR_2;

  if (VAR_0 < 0)
    FUNC_0 ();
  if (VAR_0 == 0)
    return 0;

  VAR_1 = VAR_0;
  do
    {
      VAR_2 = (VAR_1 * VAR_1 - VAR_0) / (2 * VAR_1);
      VAR_1 -= VAR_2;
    }
  while (VAR_2 > .0001);
  return VAR_1;
}

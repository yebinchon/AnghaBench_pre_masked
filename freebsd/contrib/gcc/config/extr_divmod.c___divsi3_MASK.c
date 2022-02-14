
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long FUNC_0 (long,long,int ) ;

long
FUNC_1 (long VAR_0, long VAR_1)
{
  int VAR_2 = 0;
  long VAR_3;

  if (VAR_0 < 0)
    {
      VAR_0 = -VAR_0;
      VAR_2 = !VAR_2;
    }

  if (VAR_1 < 0)
    {
      VAR_1 = -VAR_1;
      VAR_2 = !VAR_2;
    }

  VAR_3 = FUNC_0 (VAR_0, VAR_1, 0);

  if (VAR_2)
    VAR_3 = -VAR_3;

  return VAR_3;
}

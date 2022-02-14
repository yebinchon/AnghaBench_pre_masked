
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1 (unsigned char *VAR_1, int *VAR_2, int VAR_3, int VAR_4)
{
  int VAR_5 = 0;
  int VAR_6 = *VAR_2 / 8;

  if (VAR_6 >= VAR_4)
    return 0;

  if (VAR_3 == -2)
    VAR_3 = VAR_0;

  if (VAR_3 == -1)
    VAR_3 = 0;

  switch (VAR_3)
    {
    case 0:
      return 0;
    case 1:
      VAR_5 = (VAR_1[VAR_6]);
      break;
    case 2:
      VAR_5 = (VAR_1[VAR_6 + 0] << 8) + VAR_1[VAR_6 + 1];
      break;
    case 4:
      VAR_5 = (VAR_1[VAR_6 + 0] << 24) + (VAR_1[VAR_6 + 1] << 16) + (VAR_1[VAR_6 + 2] << 8) + (VAR_1[VAR_6 + 3]);
      break;
    default:
      FUNC_0 ();
    }

  *VAR_2 += VAR_3 * 8;
  return VAR_5;
}

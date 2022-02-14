
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int ) ;


 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2 (rtx *VAR_0, void *VAR_1)
{
  int *VAR_2 = VAR_1;
  rtx VAR_3 = *VAR_0;

  switch (FUNC_0 (VAR_3))
    {
    case 128:
      *VAR_2 |= FUNC_1 (VAR_3) ? 1 : 2;
      break;
    case 129:
      *VAR_2 |= 1;
      break;
    default:
      break;
    }

  return 0;
}

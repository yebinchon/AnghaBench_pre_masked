
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0 (long VAR_3, int *VAR_4)
{
  if (!VAR_4)
    return 0;
  switch (VAR_3)
    {
      case 128:
        *VAR_4 = VAR_2;
 break;
      case 130:
        *VAR_4 = VAR_0;
 break;
      case 129:
        *VAR_4 = VAR_1;
 break;
      default:
        return -1;
    }
  return 0;
}

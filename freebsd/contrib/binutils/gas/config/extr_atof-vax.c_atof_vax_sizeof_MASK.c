
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int
FUNC_0 (int VAR_0)
{
  int VAR_1;




  switch (VAR_0)
    {
    case 'f':
    case 'F':
      VAR_1 = 4;
      break;

    case 'd':
    case 'D':
    case 'g':
    case 'G':
      VAR_1 = 8;
      break;

    case 'h':
    case 'H':
      VAR_1 = 16;
      break;

    default:
      VAR_1 = 0;
      break;
    }

  return VAR_1;
}

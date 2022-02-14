
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static
int FUNC_0 (int VAR_0, int VAR_1)
{


  if ((VAR_0 & 0x60) == 0x60)
    return 0;

  switch (VAR_0 & 7)
    {
    case 130: return 2;
    case 129: return 4;
    case 128: return 8;
    case 131: return VAR_1;
    default:
      break;
    }

  return 0;
}

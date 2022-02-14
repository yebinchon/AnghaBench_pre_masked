
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* range; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;

 unsigned int VAR_2 ;




 TYPE_1__* VAR_3 ;

__attribute__((used)) static int
FUNC_0 (int VAR_4, unsigned int VAR_5, int VAR_6)
{
  switch (VAR_5)
    {
    case 129:
      {
        int VAR_7 = ((VAR_4 & 0xffff0000) >> 16);

        if (VAR_3[VAR_5].range[0] <= VAR_7
            && VAR_7 <= VAR_3[VAR_5].range[1])
   return VAR_7;
      }
      break;

    case 128:
      {
        int VAR_8 = (VAR_4 & 0xffff);

        if (VAR_3[VAR_5].range[0] <= VAR_8
            && VAR_8 <= VAR_3[VAR_5].range[1])
   return VAR_8;
      }
      break;

    case 130:
      return VAR_4;
      break;

    case 132:
      if (VAR_6 == 1)
        {
          if (!(VAR_4 >= -0x2000 && VAR_4 <= 0x3fff))
            {
              return (int) VAR_0;
            }
        }
      else
        {
          if (!(VAR_4 >= -8192 && VAR_4 <= 8191))
            {
              return (int) VAR_0;
            }
        }

      return VAR_4;
      break;

    case 131:
      if (VAR_6 == 1)
        {
          if (!(VAR_4 >= -0x7fff && VAR_4 <= 0xffff && VAR_4 != 0x8000))
            {
              return (int) VAR_0;
            }
        }
      else
        {
          if (!(VAR_4 >= -32767 && VAR_4 <= 32768))
            {
              return (int) VAR_0;
            }
        }

      VAR_4 = -VAR_4;
      return VAR_4;
      break;

    default:
      if (VAR_5 == VAR_2 || VAR_5 == VAR_1)
 VAR_4 = -VAR_4;

      if (VAR_3[VAR_5].range[0] <= VAR_4
          && VAR_4 <= VAR_3[VAR_5].range[1])
 return VAR_4;

      break;
    }

  return (int) VAR_0;
}

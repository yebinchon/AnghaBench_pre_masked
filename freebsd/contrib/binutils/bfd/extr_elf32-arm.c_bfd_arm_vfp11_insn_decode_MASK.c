
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bfd_arm_vfp11_pipe { ____Placeholder_bfd_arm_vfp11_pipe } bfd_arm_vfp11_pipe ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 void* FUNC_1 (unsigned int,int,int,int) ;
 int FUNC_2 (unsigned int*,unsigned int) ;

__attribute__((used)) static enum bfd_arm_vfp11_pipe
FUNC_3 (unsigned int VAR_4, unsigned int *VAR_5, int *VAR_6,
                           int *VAR_7)
{
  enum bfd_arm_vfp11_pipe VAR_8 = VAR_0;
  bfd_boolean VAR_9 = ((VAR_4 & 0xf00) == 0xb00) ? 1 : 0;

  if ((VAR_4 & 0x0f000e10) == 0x0e000a00)
    {
      unsigned int VAR_10;
      unsigned int VAR_11 = FUNC_1 (VAR_4, VAR_9, 12, 22);
      unsigned int VAR_12 = FUNC_1 (VAR_4, VAR_9, 0, 5);

      VAR_10 = ((VAR_4 & 0x00800000) >> 20)
           | ((VAR_4 & 0x00300000) >> 19)
           | ((VAR_4 & 0x00000040) >> 6);

      switch (VAR_10)
        {
        case 0:
        case 1:
        case 2:
        case 3:
          VAR_8 = VAR_2;
          FUNC_2 (VAR_5, VAR_11);
          VAR_6[0] = VAR_11;
          VAR_6[1] = FUNC_1 (VAR_4, VAR_9, 16, 7);
          VAR_6[2] = VAR_12;
          *VAR_7 = 3;
          break;

        case 4:
        case 5:
        case 6:
        case 7:
          VAR_8 = VAR_2;
          goto vfp_binop;

        case 8:
          VAR_8 = VAR_1;
          vfp_binop:
          FUNC_2 (VAR_5, VAR_11);
          VAR_6[0] = FUNC_1 (VAR_4, VAR_9, 16, 7);
          VAR_6[1] = VAR_12;
          *VAR_7 = 2;
          break;

        case 15:
          {
            unsigned int VAR_13 = ((VAR_4 >> 15) & 0x1e)
                              | ((VAR_4 >> 7) & 1);

            switch (VAR_13)
              {
              case 0:
              case 1:
              case 2:
              case 8:
              case 9:
              case 10:
              case 11:
              case 16:
              case 17:
              case 24:
              case 25:
              case 26:
              case 27:

                *VAR_7 = 0;
                VAR_8 = VAR_2;
                break;

              case 3:


                FUNC_2 (VAR_5, VAR_11);
                VAR_8 = VAR_1;
                break;

              case 15:
                {
                  int VAR_14 = 0;

                  FUNC_2 (VAR_5, VAR_11);


                  if ((VAR_4 & 0x100) != 0)
                    VAR_6[VAR_14++] = VAR_12;

                  *VAR_7 = VAR_14;

                  VAR_8 = VAR_2;
                }
                break;

              default:
                return VAR_0;
              }
          }
          break;

        default:
          return VAR_0;
        }
    }

  else if ((VAR_4 & 0x0fe00ed0) == 0x0c400a10)
    {
      unsigned int VAR_15 = FUNC_1 (VAR_4, VAR_9, 0, 5);

      if ((VAR_4 & 0x100000) == 0)
 {
          if (VAR_9)
            FUNC_2 (VAR_5, VAR_15);
          else
            {
              FUNC_2 (VAR_5, VAR_15);
              FUNC_2 (VAR_5, VAR_15 + 1);
            }
 }

      VAR_8 = VAR_3;
    }
  else if ((VAR_4 & 0x0e100e00) == 0x0c100a00)
    {
      int VAR_16 = FUNC_1 (VAR_4, VAR_9, 12, 22);
      unsigned int VAR_17 = ((VAR_4 >> 21) & 0x1) | (((VAR_4 >> 23) & 3) << 1);

      switch (VAR_17)
        {
        case 0:
          FUNC_0 ();

        case 2:
        case 3:
        case 5:
          {
            unsigned int VAR_18, VAR_19 = VAR_4 & 0xff;

            if (VAR_9)
              VAR_19 >>= 1;

            for (VAR_18 = VAR_16; VAR_18 < VAR_16 + VAR_19; VAR_18++)
              FUNC_2 (VAR_5, VAR_18);
          }
          break;

        case 4:
        case 6:
          FUNC_2 (VAR_5, VAR_16);
          break;

        default:
          return VAR_0;
        }

      VAR_8 = VAR_3;
    }

  else if ((VAR_4 & 0x0f100e10) == 0x0e000a10)
    {
      unsigned int VAR_20 = (VAR_4 >> 21) & 7;
      unsigned int VAR_21 = FUNC_1 (VAR_4, VAR_9, 16, 7);

      switch (VAR_20)
        {
        case 0:
        case 1:



          FUNC_2 (VAR_5, VAR_21);
          break;

        case 7:
          break;
        }

      VAR_8 = VAR_3;
    }

  return VAR_8;
}

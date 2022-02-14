
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int instruction; int relax_inst; int relax_size; void* error; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (char**,int,int ) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (char *VAR_4)
{
  int VAR_5;
  int VAR_6 = 0;

  FUNC_4 (VAR_4);
  if (((VAR_5 = FUNC_2 (&VAR_4, 8, VAR_2)) == (int) VAR_1)
      || (FUNC_3 (&VAR_4) == (int) VAR_1))
    return;

  if (VAR_5 >= 16)
    VAR_6 = 1;


  VAR_3.instruction &= ~(1 << 12);

  VAR_3.instruction |= VAR_6 << 7;

  if (*VAR_4 == '[')
    {
      int VAR_7;

      VAR_4++;
      FUNC_4 (VAR_4);
      if ((VAR_7 = FUNC_2 (&VAR_4, 4, VAR_2)) == (int) VAR_1)
 return;
      else if (VAR_7 > 7)
        {
          if (!VAR_3.error)
     VAR_3.error = FUNC_0("base register nums are over 3 bit");

          return;
        }

      FUNC_4 (VAR_4);
      if ((*VAR_4++ != ']') || (FUNC_1 (VAR_4) == (int) VAR_1))
        {
          if (!VAR_3.error)
     VAR_3.error = FUNC_0("missing ]");

          return;
        }


      if ((VAR_3.instruction & 0xf) == 0xa)
        {
          if (VAR_6)
            {
              VAR_3.relax_inst |= ((((VAR_3.instruction >> 8) & 0xf) | 0x10) << 20)
                                  | (((VAR_3.instruction >> 4) & 0x7) << 15) | (4 << 3);
            }
          else
            {
              VAR_3.relax_inst |= (((VAR_3.instruction >> 8) & 0xf) << 20)
                                  | (((VAR_3.instruction >> 4) & 0x7) << 15) | (4 << 3);
            }
        }

      else
        {
          if (VAR_6)
            {
              VAR_3.relax_inst |= ((((VAR_3.instruction >> 8) & 0xf) | 0x10) << 20)
                                  | (((VAR_3.instruction >> 4) & 0x7) << 15) | (((-4) & 0xfff) << 3);
            }
          else
            {
              VAR_3.relax_inst |= (((VAR_3.instruction >> 8) & 0xf) << 20)
                                  | (((VAR_3.instruction >> 4) & 0x7) << 15) | (((-4) & 0xfff) << 3);
            }
        }
      VAR_3.relax_size = 4;
    }
  else
    {
      VAR_3.error = VAR_0;
    }
}

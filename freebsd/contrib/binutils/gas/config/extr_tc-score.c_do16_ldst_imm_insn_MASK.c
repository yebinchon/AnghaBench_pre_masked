
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int instruction; int relax_inst; int relax_size; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**,int,int ) ;
 TYPE_1__ VAR_14 ;
 int FUNC_2 (char**,int) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (char *VAR_15)
{
  char VAR_16[VAR_2];
  int VAR_17;
  char *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
  int VAR_20 = 0;
  int VAR_21 = (int) VAR_0;
  unsigned int VAR_22;

  FUNC_4 (VAR_15);

  if (((VAR_17 = FUNC_2 (&VAR_15, 8)) == (int) VAR_0)
      || (FUNC_3 (&VAR_15) == (int) VAR_0))
    return;

  FUNC_4 (VAR_15);
  VAR_18 = VAR_15;

  while ((*VAR_18 != '\0') && (*VAR_18 != '|') && (VAR_20 <= VAR_2))
    {
      VAR_16[VAR_20] = *VAR_18;
      VAR_18++;
      VAR_20++;
    }

  VAR_16[VAR_20] = '\0';
  VAR_19 = &VAR_16[0];

  VAR_15 = VAR_18;

  VAR_22 = VAR_14.instruction & VAR_1;
  if (VAR_22 == VAR_5)
    VAR_21 = FUNC_1 (&VAR_19, 0, VAR_13);
  else if (VAR_22 == VAR_4 || VAR_22 == VAR_8)
    VAR_21 = FUNC_1 (&VAR_19, 3, VAR_11);
  else if (VAR_22 == VAR_6 || VAR_22 == VAR_9)
    VAR_21 = FUNC_1 (&VAR_19, 3, VAR_12);
  else
    VAR_21 = FUNC_1 (&VAR_19, 3, VAR_10);

  if ((VAR_21 == (int) VAR_0) || (FUNC_0 (VAR_19) == (int) VAR_0))
    return;
  else
    {
      if ((VAR_14.instruction & 0x7000) == VAR_5)
        {
          VAR_14.relax_inst |= ((VAR_14.instruction >> 8) & 0xf) << 20
                          | ((VAR_14.instruction & 0xff) << 1);
        }
      else if (((VAR_14.instruction & 0x7007) == VAR_4)
               || ((VAR_14.instruction & 0x7007) == VAR_8))
        {
          VAR_14.relax_inst |= ((VAR_14.instruction >> 8) & 0xf) << 20 | 2 << 15
                          | (((VAR_14.instruction >> 3) & 0x1f) << 1);
        }
      else if (((VAR_14.instruction & 0x7007) == VAR_6)
               || ((VAR_14.instruction & 0x7007) == VAR_9))
        {
          VAR_14.relax_inst |= ((VAR_14.instruction >> 8) & 0xf) << 20 | 2 << 15
                          | (((VAR_14.instruction >> 3) & 0x1f) << 2);
        }
      else if (((VAR_14.instruction & 0x7007) == VAR_3)
               || ((VAR_14.instruction & 0x7007) == VAR_7))
        {
          VAR_14.relax_inst |= ((VAR_14.instruction >> 8) & 0xf) << 20 | 2 << 15
                          | (((VAR_14.instruction >> 3) & 0x1f));
        }

      VAR_14.relax_size = 4;
    }
}

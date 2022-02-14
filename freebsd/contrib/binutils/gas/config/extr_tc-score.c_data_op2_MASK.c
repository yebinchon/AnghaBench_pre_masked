
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum score_data_type { ____Placeholder_score_data_type } score_data_type ;
struct TYPE_7__ {int X_add_number; int X_unsigned; scalar_t__ X_add_symbol; } ;
struct TYPE_5__ {TYPE_3__ exp; scalar_t__ pc_rel; int type; } ;
struct TYPE_8__ {char* error; scalar_t__ type; int instruction; TYPE_1__ reloc; } ;
struct TYPE_6__ {int bits; int* range; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 char FUNC_0 (char) ;
 char* FUNC_1 (char*) ;

 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;

 int VAR_30 ;
 int VAR_31 ;



 int FUNC_2 (char*) ;
 char* VAR_32 ;
 TYPE_4__ VAR_33 ;
 int FUNC_3 (TYPE_3__*,char**) ;
 TYPE_2__* VAR_34 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int,int,int) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int,int,int) ;

__attribute__((used)) static int
FUNC_8 (char **VAR_35, int VAR_36, enum score_data_type VAR_37)
{
  int VAR_38;
  char VAR_39[VAR_10];
  char *VAR_40;
  int VAR_41 = 0;
  char *VAR_42 = ((void*)0);

  FUNC_4 (*VAR_35);
  VAR_33.error = ((void*)0);
  VAR_40 = * VAR_35;


  int VAR_43 = 0;

  while ((*VAR_40 != '\0') && (*VAR_40 != '|') && (VAR_41 <= VAR_10))
    {
      VAR_39[VAR_41] = *VAR_40;
      VAR_40++;
      VAR_41++;
    }

  VAR_39[VAR_41] = '\0';
  VAR_42 = (char *)&VAR_39;

  if (*VAR_40 == '|')
    {
      if (FUNC_3 (&VAR_33.reloc.exp, &VAR_42) == (int) VAR_7)
        return (int) VAR_7;
      FUNC_2 (VAR_42);
      if (VAR_33.error != 0)
        return (int) VAR_7;
      *VAR_35 = VAR_40;
    }
  else
    {
      if (FUNC_3 (&VAR_33.reloc.exp, VAR_35) == (int) VAR_7)
        {
          return (int) VAR_7;
        }

      VAR_40 = (char *)VAR_39;
      for (; *VAR_40 != '\0'; VAR_40++)
        {
          *VAR_40 = FUNC_0 (*VAR_40);
          if (*VAR_40 == '!' || *VAR_40 == ' ')
            break;
        }
      VAR_40 = (char *)VAR_39;

      if ((VAR_40 != ((void*)0))
          && (((FUNC_6 (VAR_40, "0x")) != ((void*)0))
              || ((FUNC_6 (VAR_40, "0X")) != ((void*)0))))
        {
          VAR_43 = 1;
          if ((VAR_37 != 131)
              && (VAR_37 != 129)
              && (VAR_37 != 128)
              && (VAR_37 != VAR_17)
              && (VAR_37 != VAR_16)
              && (VAR_37 != VAR_15)
              && (VAR_37 != VAR_21)
              && (VAR_37 != VAR_22)
              && (VAR_37 != VAR_26)
              && (VAR_37 != VAR_24)
              && (VAR_37 != VAR_25)
              && (VAR_37 != VAR_27)
              && (VAR_37 != VAR_28)
              && (VAR_37 != VAR_31)
              && (VAR_37 != VAR_14)
              && (VAR_37 != 133))
            {
              VAR_37 += 24;
            }
        }

      if ((VAR_33.reloc.exp.X_add_number == 0)
          && (VAR_33.type != VAR_8)
          && (VAR_33.type != VAR_12)
          && (VAR_33.type != VAR_11)
          && (VAR_33.type != VAR_9)
          && (((*VAR_40 >= 'a') && (*VAR_40 <= 'z'))
             || ((*VAR_40 == '0') && (*(VAR_40 + 1) == 'x') && (*(VAR_40 + 2) != '0'))
             || ((*VAR_40 == '+') && (*(VAR_40 + 1) != '0'))
             || ((*VAR_40 == '-') && (*(VAR_40 + 1) != '0'))))
        {
          VAR_33.error = VAR_0;
          return (int) VAR_7;
        }
    }

  if ((VAR_33.reloc.exp.X_add_symbol)
      && ((VAR_37 == VAR_29)
          || (VAR_37 == VAR_31)
          || (VAR_37 == VAR_18)
          || (VAR_37 == VAR_27)
          || (VAR_37 == VAR_28)
          || (VAR_37 == VAR_22)
          || (VAR_37 == VAR_15)
          || (VAR_37 == VAR_20)
          || (VAR_37 == VAR_17)
          || (VAR_37 == VAR_16)
          || (VAR_37 == VAR_21)))
    {
      VAR_33.error = VAR_0;
      return (int) VAR_7;
    }

  if (VAR_33.reloc.exp.X_add_symbol)
    {
      switch (VAR_37)
        {
        case 131:
          return (int) VAR_7;
        case 129:
          VAR_33.reloc.type = VAR_2;
          VAR_33.reloc.pc_rel = 0;
          break;
        case 128:
          VAR_33.reloc.type = VAR_3;
          VAR_33.reloc.pc_rel = 0;
          break;
        case 133:
          VAR_33.reloc.type = VAR_6;
          VAR_33.reloc.pc_rel = 0;
          break;
        case 130:
        case 132:
          VAR_33.reloc.type = VAR_5;
          VAR_33.reloc.pc_rel = 0;
          break;
        default:
          VAR_33.reloc.type = VAR_1;
          VAR_33.reloc.pc_rel = 0;
          break;
        }
    }
  else
    {
      if (VAR_37 == VAR_19)
 {
          VAR_33.reloc.type = VAR_4;
          VAR_33.reloc.pc_rel = 0;
 }

      if (VAR_37 == 131 && VAR_33.reloc.exp.X_unsigned == 1)
        {
          VAR_38 = FUNC_7 (VAR_33.reloc.exp.X_add_number, VAR_30, VAR_43);
          if (VAR_38 == (int) VAR_7)
            if ((VAR_33.reloc.exp.X_add_number & 0xffff) == 0)
              {
                VAR_33.instruction |= 0x8000000;
                VAR_33.instruction |= ((VAR_33.reloc.exp.X_add_number >> 16) << 1) & 0x1fffe;
                return VAR_13;
              }
        }
      else
        {
          VAR_38 = FUNC_7 (VAR_33.reloc.exp.X_add_number, VAR_37, VAR_43);
        }

      if (VAR_38 == (int) VAR_7)
        {
          if ((VAR_37 != VAR_28) && (VAR_37 != VAR_31) && (VAR_37 != VAR_18))
            {
              FUNC_5 (VAR_32,
                       FUNC_1("invalid constant: %d bit expression not in range %d..%d"),
                       VAR_34[VAR_37].bits,
                       VAR_34[VAR_37].range[0], VAR_34[VAR_37].range[1]);
            }
          else
            {
              FUNC_5 (VAR_32,
                       FUNC_1("invalid constant: %d bit expression not in range %d..%d"),
                       VAR_34[VAR_37].bits,
                       -VAR_34[VAR_37].range[1], -VAR_34[VAR_37].range[0]);
            }

          VAR_33.error = VAR_32;
          return (int) VAR_7;
        }

      if ((VAR_34[VAR_37].range[0] != 0) || (VAR_37 == VAR_23))
        {
          VAR_38 &= (1 << VAR_34[VAR_37].bits) - 1;
        }

      VAR_33.instruction |= VAR_38 << VAR_36;
    }

  if ((VAR_33.instruction & 0xf0000000) == 0x30000000)
    {
      if ((((VAR_33.instruction >> 20) & 0x1F) != 0)
          && (((VAR_33.instruction >> 20) & 0x1F) != 1)
          && (((VAR_33.instruction >> 20) & 0x1F) != 2)
          && (((VAR_33.instruction >> 20) & 0x1F) != 3)
          && (((VAR_33.instruction >> 20) & 0x1F) != 4)
          && (((VAR_33.instruction >> 20) & 0x1F) != 8)
          && (((VAR_33.instruction >> 20) & 0x1F) != 9)
          && (((VAR_33.instruction >> 20) & 0x1F) != 0xa)
          && (((VAR_33.instruction >> 20) & 0x1F) != 0xb)
          && (((VAR_33.instruction >> 20) & 0x1F) != 0xc)
          && (((VAR_33.instruction >> 20) & 0x1F) != 0xd)
          && (((VAR_33.instruction >> 20) & 0x1F) != 0xe)
          && (((VAR_33.instruction >> 20) & 0x1F) != 0x10)
          && (((VAR_33.instruction >> 20) & 0x1F) != 0x11)
          && (((VAR_33.instruction >> 20) & 0x1F) != 0x18)
          && (((VAR_33.instruction >> 20) & 0x1F) != 0x1A)
          && (((VAR_33.instruction >> 20) & 0x1F) != 0x1B)
          && (((VAR_33.instruction >> 20) & 0x1F) != 0x1d)
          && (((VAR_33.instruction >> 20) & 0x1F) != 0x1e)
          && (((VAR_33.instruction >> 20) & 0x1F) != 0x1f))
        {
          VAR_33.error = FUNC_1("invalid constant: bit expression not defined");
          return (int) VAR_7;
        }
    }

  return VAR_13;
}

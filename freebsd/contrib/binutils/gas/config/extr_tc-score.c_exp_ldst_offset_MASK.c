
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ X_op; int X_add_number; } ;
struct TYPE_5__ {scalar_t__ pc_rel; TYPE_3__ exp; } ;
struct TYPE_8__ {int instruction; TYPE_1__ reloc; int error; } ;
struct TYPE_6__ {int bits; int* range; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 TYPE_4__ VAR_17 ;
 int FUNC_1 (TYPE_3__*,char**) ;
 TYPE_2__* VAR_18 ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (int ,unsigned int,int ) ;
 int FUNC_4 (int ,unsigned int) ;

__attribute__((used)) static int
FUNC_5 (char **VAR_19, int VAR_20, unsigned int VAR_21)
{
  char *VAR_22;

  VAR_22 = * VAR_19;

  if ((*VAR_22 == '0') && (*(VAR_22 + 1) == 'x')
      && (VAR_21 != VAR_13)
      && (VAR_21 != VAR_14)
      && (VAR_21 != VAR_15)
      && (VAR_21 != VAR_6)
      && (VAR_21 != VAR_5)
      && (VAR_21 != VAR_4)
      && (VAR_21 != VAR_7)
      && (VAR_21 != VAR_8)
      && (VAR_21 != VAR_11)
      && (VAR_21 != VAR_9)
      && (VAR_21 != VAR_10)
      && (VAR_21 != VAR_12)
      && (VAR_21 != VAR_3))
    {
      VAR_21 += 24;
    }

  if (FUNC_1 (&VAR_17.reloc.exp, VAR_19) == (int) VAR_0)
    return (int) VAR_0;

  if (VAR_17.reloc.exp.X_op == VAR_1)
    {

      int VAR_23 = FUNC_4 (VAR_17.reloc.exp.X_add_number, VAR_21);

      if (VAR_23 == (int) VAR_0)
 return (int) VAR_0;

      VAR_23 = FUNC_3 (VAR_17.reloc.exp.X_add_number, VAR_21, 0);
      if (VAR_23 == (int) VAR_0)
        {
          if (VAR_21 < 30)
            FUNC_2 (VAR_16,
                     FUNC_0("invalid constant: %d bit expression not in range %d..%d"),
                     VAR_18[VAR_21].bits,
                     VAR_18[VAR_21].range[0], VAR_18[VAR_21].range[1]);
          else
            FUNC_2 (VAR_16,
                     FUNC_0("invalid constant: %d bit expression not in range %d..%d"),
                     VAR_18[VAR_21 - 24].bits,
                     VAR_18[VAR_21 - 24].range[0], VAR_18[VAR_21 - 24].range[1]);
          VAR_17.error = VAR_16;
          return (int) VAR_0;
        }

      if (VAR_21 == VAR_9)
        {
          VAR_23 >>= 1;
        }
      else if ((VAR_21 == VAR_10) || (VAR_21 == VAR_3))
        {
          VAR_23 >>= 2;
        }

      if (VAR_18[VAR_21].range[0] != 0)
        {
          VAR_23 &= (1 << VAR_18[VAR_21].bits) - 1;
        }

      VAR_17.instruction |= VAR_23 << VAR_20;
    }
  else
    {
      VAR_17.reloc.pc_rel = 0;
    }

  return VAR_2;
}

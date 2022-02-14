
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spu_insn {int* reloc_arg; int opcode; int* flag; TYPE_1__* exp; } ;
struct TYPE_4__ {int rshift; int hi; int lo; int whi; int wlo; int size; int pos; } ;
struct TYPE_3__ {scalar_t__ X_op; int X_add_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int ,...) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (TYPE_1__*) ;
 char* FUNC_5 (char const*,struct spu_insn*,int,int ) ;
 char* VAR_7 ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 char const* VAR_8 ;

__attribute__((used)) static const char *
FUNC_7 (const char *VAR_9, struct spu_insn *VAR_10, int VAR_11)
{
  int VAR_12;
  char *VAR_13;
  int VAR_14 = 0, VAR_15 = 0;
  int VAR_16 = VAR_10->reloc_arg[0] >= 0 ? 1 : 0;

  if (FUNC_6 (VAR_9, "%lo(", 4) == 0)
    {
      VAR_9 += 3;
      VAR_14 = 1;
      FUNC_3 (FUNC_1("Using old style, %%lo(expr), please change to PPC style, expr@l."));
    }
  else if (FUNC_6 (VAR_9, "%hi(", 4) == 0)
    {
      VAR_9 += 3;
      VAR_15 = 1;
      FUNC_3 (FUNC_1("Using old style, %%hi(expr), please change to PPC style, expr@h."));
    }
  else if (FUNC_6 (VAR_9, "%pic(", 5) == 0)
    {


      VAR_9 += 4;
    }

  if (*VAR_9 == '$')
    {



      struct spu_insn VAR_17;
      const char *VAR_18 = FUNC_5 (VAR_9, &VAR_17, VAR_11, 0);

      if (VAR_18)
 VAR_8 = VAR_18;
    }

  VAR_13 = VAR_7;
  VAR_7 = (char *) VAR_9;
  FUNC_4 (&VAR_10->exp[VAR_16]);
  VAR_9 = VAR_7;
  VAR_7 = VAR_13;



  if (VAR_9[0] == '@' && !FUNC_0 (VAR_9[2]) && VAR_9[2] != '@')
    {
      if (VAR_9[1] == 'h' || VAR_9[1] == 'H')
 {
   VAR_15 = 1;
   VAR_9 += 2;
 }
      else if (VAR_9[1] == 'l' || VAR_9[1] == 'L')
 {
   VAR_14 = 1;
   VAR_9 += 2;
 }
    }

  if (VAR_10->exp[VAR_16].X_op == VAR_4)
    {
      VAR_12 = VAR_10->exp[VAR_16].X_add_number;

      if (VAR_6)
 {

          VAR_12 <<= VAR_5[VAR_11].rshift;
   if (VAR_11 == VAR_2)
     VAR_12 = 173 - VAR_12;
   else if (VAR_11 == VAR_3)
     VAR_12 = 155 - VAR_12;
 }

      if (VAR_15)
 VAR_12 = VAR_12 >> 16;
      else if (VAR_14)
 VAR_12 = VAR_12 & 0xffff;


      {
 int VAR_19 = VAR_5[VAR_11].hi;
 int VAR_20 = VAR_5[VAR_11].lo;
 int VAR_21 = VAR_5[VAR_11].whi;
 int VAR_22 = VAR_5[VAR_11].wlo;

 if (VAR_19 > VAR_20 && (VAR_12 < VAR_20 || VAR_12 > VAR_19))
   FUNC_2 (FUNC_1("Constant expression %d out of range, [%d, %d]."),
      VAR_12, VAR_20, VAR_19);
 else if (VAR_21 > VAR_22 && (VAR_12 < VAR_22 || VAR_12 > VAR_21))
   FUNC_3 (FUNC_1("Constant expression %d out of range, [%d, %d]."),
     VAR_12, VAR_22, VAR_21);
      }

      if (VAR_11 == VAR_2)
        VAR_12 = 173 - VAR_12;
      else if (VAR_11 == VAR_3)
        VAR_12 = 155 - VAR_12;


      if (VAR_11 == VAR_0 || VAR_11 == VAR_1)
 VAR_10->opcode |= ((VAR_12 >> 2) & 0x7f);

      VAR_10->opcode |= (((VAR_12 >> VAR_5[VAR_11].rshift)
   & ((1 << VAR_5[VAR_11].size) - 1))
         << VAR_5[VAR_11].pos);
      VAR_10->reloc_arg[VAR_16] = -1;
      VAR_10->flag[VAR_16] = 0;
    }
  else
    {
      VAR_10->reloc_arg[VAR_16] = VAR_11;
      if (VAR_15)
 VAR_10->flag[VAR_16] = 1;
      else if (VAR_14)
 VAR_10->flag[VAR_16] = 2;
    }

  return VAR_9;
}

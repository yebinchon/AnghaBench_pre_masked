
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct asm_shift_name {int kind; } ;
typedef enum shift_kind { ____Placeholder_shift_kind } shift_kind ;
typedef enum parse_shift_mode { ____Placeholder_parse_shift_mode } parse_shift_mode ;
struct TYPE_4__ {int exp; } ;
struct TYPE_6__ {TYPE_2__* operands; TYPE_1__ reloc; void* error; } ;
struct TYPE_5__ {int imm; int immisreg; int shift_kind; int shifted; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;

 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char**,int ) ;
 int VAR_7 ;
 struct asm_shift_name* FUNC_4 (int ,char*,int) ;
 TYPE_3__ VAR_8 ;
 scalar_t__ FUNC_5 (int *,char**,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7 (char **VAR_9, int VAR_10, enum parse_shift_mode VAR_11)
{
  const struct asm_shift_name *VAR_12;
  enum shift_kind VAR_13;
  char *VAR_14 = *VAR_9;
  char *VAR_15 = VAR_14;
  int VAR_16;

  for (VAR_15 = *VAR_9; FUNC_0 (*VAR_15); VAR_15++)
    ;

  if (VAR_15 == *VAR_9)
    {
      VAR_8.error = FUNC_1("shift expression expected");
      return VAR_0;
    }

  VAR_12 = FUNC_4 (VAR_7, *VAR_9, VAR_15 - *VAR_9);

  if (VAR_12 == ((void*)0))
    {
      VAR_8.error = FUNC_1("shift expression expected");
      return VAR_0;
    }

  VAR_13 = VAR_12->kind;

  switch (VAR_11)
    {
    case 132:
    case 130: break;

    case 128:
      if (VAR_13 != VAR_4 && VAR_13 != VAR_3)
 {
   VAR_8.error = FUNC_1("'LSL' or 'ASR' required");
   return VAR_0;
 }
      break;

    case 129:
      if (VAR_13 != VAR_4)
 {
   VAR_8.error = FUNC_1("'LSL' required");
   return VAR_0;
 }
      break;

    case 131:
      if (VAR_13 != VAR_3)
 {
   VAR_8.error = FUNC_1("'ASR' required");
   return VAR_0;
 }
      break;

    default: FUNC_2 ();
    }

  if (VAR_13 != VAR_5)
    {

      FUNC_6 (VAR_15);

      if (VAR_11 == 132
   && (VAR_16 = FUNC_3 (&VAR_15, VAR_2)) != VAR_0)
 {
   VAR_8.operands[VAR_10].imm = VAR_16;
   VAR_8.operands[VAR_10].immisreg = 1;
 }
      else if (FUNC_5 (&VAR_8.reloc.exp, &VAR_15, VAR_1))
 return VAR_0;
    }
  VAR_8.operands[VAR_10].shift_kind = VAR_13;
  VAR_8.operands[VAR_10].shifted = 1;
  *VAR_9 = VAR_15;
  return VAR_6;
}

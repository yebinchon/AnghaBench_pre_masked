
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ X_op; int X_add_number; } ;
typedef TYPE_3__ expressionS ;
struct TYPE_7__ {scalar_t__ pc_rel; int type; TYPE_3__ exp; } ;
struct TYPE_9__ {TYPE_2__ reloc; void* error; TYPE_1__* operands; } ;
struct TYPE_6__ {int reg; int isreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (char**,int ) ;
 TYPE_5__ VAR_8 ;
 scalar_t__ FUNC_2 (TYPE_3__*,char**,int ) ;
 int FUNC_3 (char**,int,int ) ;
 int FUNC_4 (char**) ;

__attribute__((used)) static int
FUNC_5 (char **VAR_9, int VAR_10)
{
  int VAR_11;
  expressionS VAR_12;

  if ((VAR_11 = FUNC_1 (VAR_9, VAR_6)) != VAR_1)
    {
      VAR_8.operands[VAR_10].reg = VAR_11;
      VAR_8.operands[VAR_10].isreg = 1;


      VAR_8.reloc.exp.X_op = VAR_5;
      VAR_8.reloc.exp.X_add_number = 0;

      if (FUNC_4 (VAR_9) == VAR_1)
 return VAR_7;


      return FUNC_3 (VAR_9, VAR_10, VAR_4);
    }

  if (FUNC_2 (&VAR_8.reloc.exp, VAR_9, VAR_2))
    return VAR_1;

  if (FUNC_4 (VAR_9) == VAR_7)
    {

      if (FUNC_2 (&VAR_12, VAR_9, VAR_3))
 return VAR_1;

      if (VAR_12.X_op != VAR_5 || VAR_8.reloc.exp.X_op != VAR_5)
 {
   VAR_8.error = FUNC_0("constant expression expected");
   return VAR_1;
 }

      VAR_11 = VAR_12.X_add_number;
      if (VAR_11 < 0 || VAR_11 > 30 || VAR_11 % 2 != 0)
 {
   VAR_8.error = FUNC_0("invalid rotation");
   return VAR_1;
 }
      if (VAR_8.reloc.exp.X_add_number < 0 || VAR_8.reloc.exp.X_add_number > 255)
 {
   VAR_8.error = FUNC_0("invalid constant");
   return VAR_1;
 }


      VAR_8.reloc.exp.X_add_number
 = (((VAR_8.reloc.exp.X_add_number << (32 - VAR_11))
     | (VAR_8.reloc.exp.X_add_number >> VAR_11)) & 0xffffffff);
    }

  VAR_8.reloc.type = VAR_0;
  VAR_8.reloc.pc_rel = 0;
  return VAR_7;
}

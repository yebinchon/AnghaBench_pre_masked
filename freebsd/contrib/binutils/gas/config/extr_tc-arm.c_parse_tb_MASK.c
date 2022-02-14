
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int X_add_number; } ;
struct TYPE_6__ {TYPE_1__ exp; } ;
struct TYPE_8__ {void* error; TYPE_3__* operands; TYPE_2__ reloc; } ;
struct TYPE_7__ {int reg; int imm; int shifted; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (char**,size_t) ;
 TYPE_4__ VAR_4 ;
 int FUNC_2 (char**,int ,int ) ;
 char** VAR_5 ;
 int FUNC_3 (char**,char) ;
 int FUNC_4 (char**) ;

__attribute__((used)) static int
FUNC_5 (char **VAR_6)
{
  char * VAR_7 = *VAR_6;
  int VAR_8;

  if (FUNC_3 (&VAR_7, '[') == VAR_0)
    {
      VAR_4.error = FUNC_0("'[' expected");
      return VAR_0;
    }

  if ((VAR_8 = FUNC_1 (&VAR_7, VAR_1)) == VAR_0)
    {
      VAR_4.error = FUNC_0(VAR_5[VAR_1]);
      return VAR_0;
    }
  VAR_4.operands[0].reg = VAR_8;

  if (FUNC_4 (&VAR_7) == VAR_0)
    {
      VAR_4.error = FUNC_0("',' expected");
      return VAR_0;
    }

  if ((VAR_8 = FUNC_1 (&VAR_7, VAR_1)) == VAR_0)
    {
      VAR_4.error = FUNC_0(VAR_5[VAR_1]);
      return VAR_0;
    }
  VAR_4.operands[0].imm = VAR_8;

  if (FUNC_4 (&VAR_7) == VAR_3)
    {
      if (FUNC_2 (&VAR_7, 0, VAR_2) == VAR_0)
 return VAR_0;
      if (VAR_4.reloc.exp.X_add_number != 1)
 {
   VAR_4.error = FUNC_0("invalid shift");
   return VAR_0;
 }
      VAR_4.operands[0].shifted = 1;
    }

  if (FUNC_3 (&VAR_7, ']') == VAR_0)
    {
      VAR_4.error = FUNC_0("']' expected");
      return VAR_0;
    }
  *VAR_6 = VAR_7;
  return VAR_3;
}

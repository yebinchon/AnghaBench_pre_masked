
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ X_add_symbol; int X_add_number; } ;
struct TYPE_4__ {int pc_rel; int type; TYPE_2__ exp; } ;
struct TYPE_6__ {TYPE_1__ reloc; void* error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 (TYPE_2__*,char**) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_4)
{
  char *VAR_5;

  FUNC_3 (VAR_4);
  if (FUNC_2 (&VAR_3.reloc.exp, &VAR_4) == (int) VAR_1
      || FUNC_1 (VAR_4) == (int) VAR_1)
    return;

  if (VAR_3.reloc.exp.X_add_symbol == 0)
    {
      VAR_3.error = FUNC_0("lacking label  ");
      return;
    }

  if (((VAR_3.reloc.exp.X_add_number & 0xff000000) != 0)
      && ((VAR_3.reloc.exp.X_add_number & 0xff000000) != 0xff000000))
    {
      VAR_3.error = FUNC_0("invalid constant: 25 bit expression not in range -2^24..2^24");
      return;
    }

  VAR_5 = VAR_2;
  VAR_2 = VAR_4;
  VAR_3.reloc.type = VAR_0;
  VAR_3.reloc.pc_rel = 1;
  VAR_2 = VAR_5;
}

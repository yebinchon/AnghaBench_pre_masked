
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ X_add_symbol; int X_add_number; } ;
struct TYPE_4__ {int pc_rel; TYPE_2__ exp; int type; } ;
struct TYPE_6__ {int instruction; TYPE_1__ reloc; void* error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (TYPE_2__*,char**) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_3)
{
  if ((FUNC_2 (&VAR_2.reloc.exp, &VAR_3) == (int) VAR_1
      || FUNC_1 (VAR_3) == (int) VAR_1))
    {
      ;
    }
  else if (VAR_2.reloc.exp.X_add_symbol == 0)
    {
      VAR_2.error = FUNC_0("lacking label");
    }
  else if (((VAR_2.reloc.exp.X_add_number & 0xffffff00) != 0)
           && ((VAR_2.reloc.exp.X_add_number & 0xffffff00) != 0xffffff00))
    {
      VAR_2.error = FUNC_0("invalid constant: 9 bit expression not in range -2^8..2^8");
    }
  else
    {
      VAR_2.reloc.type = VAR_0;
      VAR_2.reloc.pc_rel = 1;
      VAR_2.instruction |= ((VAR_2.reloc.exp.X_add_number >> 1) & 0xff);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int fr_literal; } ;
struct TYPE_5__ {scalar_t__ type; int pc_rel; int exp; } ;
struct TYPE_6__ {int size; TYPE_1__ reloc; int instruction; scalar_t__ relax; scalar_t__ error; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,char*,int,int *,int ,scalar_t__) ;
 char* FUNC_4 (int) ;
 TYPE_3__* VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_8 (const char * VAR_6)
{
  char * VAR_7 = ((void*)0);

  if (VAR_4.error)
    {
      FUNC_0 ("%s -- `%s'", VAR_4.error, VAR_6);
      return;
    }
  if (VAR_4.relax) {
      FUNC_6();
      return;
  }
  if (VAR_4.size == 0)
    return;

  VAR_7 = FUNC_4 (VAR_4.size);

  if (VAR_5 && (VAR_4.size > VAR_2))
    {
      FUNC_1 (VAR_4.size == (2 * VAR_2));
      FUNC_7 (VAR_7, VAR_4.instruction);
    }
  else if (VAR_4.size > VAR_1)
    {
      FUNC_1 (VAR_4.size == (2 * VAR_1));
      FUNC_5 (VAR_7, VAR_4.instruction, VAR_1);
      FUNC_5 (VAR_7 + VAR_1, VAR_4.instruction, VAR_1);
    }
  else
    FUNC_5 (VAR_7, VAR_4.instruction, VAR_4.size);

  if (VAR_4.reloc.type != VAR_0)
    FUNC_3 (VAR_3, VAR_7 - VAR_3->fr_literal,
   VAR_4.size, & VAR_4.reloc.exp, VAR_4.reloc.pc_rel,
   VAR_4.reloc.type);

  FUNC_2 (VAR_4.size);
}

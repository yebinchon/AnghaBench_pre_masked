
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int symbolS ;
typedef int relax_substateT ;
typedef int relax_stateT ;
typedef int offsetT ;
struct TYPE_5__ {scalar_t__ opinfo; scalar_t__ opindex; scalar_t__ insn; } ;
struct TYPE_7__ {int fr_var; char* fr_opcode; int fr_line; int fr_file; TYPE_1__ fr_cgen; int fr_offset; int * fr_symbol; int fr_subtype; int fr_type; } ;
struct TYPE_6__ {int frch_obstack; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_4 (int *,int) ;
 char* FUNC_5 (int *) ;

char *
FUNC_6 (relax_stateT VAR_2, int VAR_3, int VAR_4, relax_substateT VAR_5,
   symbolS *VAR_6, offsetT VAR_7, char *VAR_8)
{
  register char *VAR_9;

  FUNC_2 (VAR_3);
  VAR_9 = FUNC_5 (&VAR_1->frch_obstack);
  FUNC_4 (&VAR_1->frch_obstack, VAR_3);
  VAR_0->fr_var = VAR_4;
  VAR_0->fr_type = VAR_2;
  VAR_0->fr_subtype = VAR_5;
  VAR_0->fr_symbol = VAR_6;
  VAR_0->fr_offset = VAR_7;
  VAR_0->fr_opcode = VAR_8;
  FUNC_1 (&VAR_0->fr_file, &VAR_0->fr_line);
  FUNC_3 (VAR_3);
  return (VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
typedef enum emit_note_where { ____Placeholder_emit_note_where } emit_note_where ;
struct TYPE_3__ {int where; int insn; } ;
typedef TYPE_1__ emit_note_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1 (rtx VAR_2, enum emit_note_where VAR_3)
{
  emit_note_data VAR_4;

  VAR_4.insn = VAR_2;
  VAR_4.where = VAR_3;
  FUNC_0 (VAR_0, VAR_1, &VAR_4);
}

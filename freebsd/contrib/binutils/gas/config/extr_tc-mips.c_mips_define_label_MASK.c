
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int symbolS ;
struct insn_label_list {struct insn_label_list* next; int * label; } ;
struct TYPE_3__ {struct insn_label_list* label_list; } ;
typedef TYPE_1__ segment_info_type ;


 int FUNC_0 (int *) ;
 struct insn_label_list* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

void
FUNC_3 (symbolS *VAR_2)
{
  segment_info_type *VAR_3 = FUNC_1 (VAR_1);
  struct insn_label_list *VAR_4;

  if (VAR_0 == ((void*)0))
    VAR_4 = (struct insn_label_list *) FUNC_2 (sizeof *VAR_4);
  else
    {
      VAR_4 = VAR_0;
      VAR_0 = VAR_4->next;
    }

  VAR_4->label = VAR_2;
  VAR_4->next = VAR_3->label_list;
  VAR_3->label_list = VAR_4;




}

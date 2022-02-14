
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ valueT ;
struct insn_label_list {int label; struct insn_label_list* next; } ;
struct TYPE_4__ {struct insn_label_list* label_list; } ;
typedef TYPE_1__ segment_info_type ;
struct TYPE_5__ {scalar_t__ mips16; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 () ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6 (void)
{
  segment_info_type *VAR_3 = FUNC_4 (VAR_2);
  struct insn_label_list *VAR_4;
  valueT VAR_5;

  for (VAR_4 = VAR_3->label_list; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
    {
      FUNC_2 (FUNC_0 (VAR_4->label) == VAR_2);
      FUNC_5 (VAR_4->label, VAR_0);
      VAR_5 = (valueT) FUNC_3 ();

      if (VAR_1.mips16)
 ++VAR_5;
      FUNC_1 (VAR_4->label, VAR_5);
    }
}

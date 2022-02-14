
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int symbolS ;
struct insn_label_list {int * label; struct insn_label_list* next; } ;
struct TYPE_4__ {struct insn_label_list* label_list; } ;
typedef TYPE_1__ segment_info_type ;
struct TYPE_5__ {int mips16; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int ) ;
 TYPE_1__* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (void)
{
  segment_info_type *VAR_4 = FUNC_6 (VAR_3);
  struct insn_label_list *VAR_5;

  if (!VAR_2.mips16)
    return;

  for (VAR_5 = VAR_4->label_list; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
   {
      symbolS *VAR_6 = VAR_5->label;





      if ((FUNC_0 (VAR_6) & 1) == 0




   && ! FUNC_2 (VAR_6)
   && ! FUNC_1 (VAR_6)
   && ! FUNC_5 (VAR_6, VAR_3))
 FUNC_4 (VAR_6, FUNC_0 (VAR_6) | 1);
    }
}

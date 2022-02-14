
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct insn_label_list {struct insn_label_list* next; } ;
struct TYPE_3__ {struct insn_label_list* label_list; } ;
typedef TYPE_1__ segment_info_type ;


 struct insn_label_list* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1 (void)
{
  register struct insn_label_list **VAR_2;
  segment_info_type *VAR_3;

  if (VAR_1)
    {
      for (VAR_2 = &VAR_0; *VAR_2 != ((void*)0); VAR_2 = &(*VAR_2)->next)
 ;

      VAR_3 = FUNC_0 (VAR_1);
      *VAR_2 = VAR_3->label_list;
      VAR_3->label_list = ((void*)0);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elt_loc_list {int in_libcall; int setting_insn; int loc; struct elt_loc_list* next; } ;
typedef int rtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct elt_loc_list* FUNC_0 (int ) ;

__attribute__((used)) static inline struct elt_loc_list *
FUNC_1 (struct elt_loc_list *VAR_3, rtx VAR_4)
{
  struct elt_loc_list *VAR_5;
  VAR_5 = FUNC_0 (VAR_2);
  VAR_5->next = VAR_3;
  VAR_5->loc = VAR_4;
  VAR_5->setting_insn = VAR_0;
  VAR_5->in_libcall = VAR_1;
  return VAR_5;
}

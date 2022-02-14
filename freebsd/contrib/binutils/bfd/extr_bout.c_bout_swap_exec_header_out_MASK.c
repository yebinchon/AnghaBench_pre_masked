
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct internal_exec {int a_relaxable; int a_balign; int a_dalign; int a_talign; int a_dload; int a_tload; int a_drsize; int a_trsize; int a_entry; int a_syms; int a_bss; int a_data; int a_text; int a_info; } ;
struct external_exec {int * e_relaxable; int * e_balign; int * e_dalign; int * e_talign; int e_dload; int e_tload; int e_drsize; int e_trsize; int e_entry; int e_syms; int e_bss; int e_data; int e_text; int e_info; } ;
typedef int bfd ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_2 (bfd *VAR_0,
      struct internal_exec *VAR_1,
      struct external_exec *VAR_2)
{

  FUNC_0 (VAR_0, VAR_1->a_info , VAR_2->e_info);
  FUNC_1 (VAR_0, VAR_1->a_text , VAR_2->e_text);
  FUNC_1 (VAR_0, VAR_1->a_data , VAR_2->e_data);
  FUNC_1 (VAR_0, VAR_1->a_bss , VAR_2->e_bss);
  FUNC_1 (VAR_0, VAR_1->a_syms , VAR_2->e_syms);
  FUNC_1 (VAR_0, VAR_1->a_entry , VAR_2->e_entry);
  FUNC_1 (VAR_0, VAR_1->a_trsize, VAR_2->e_trsize);
  FUNC_1 (VAR_0, VAR_1->a_drsize, VAR_2->e_drsize);
  FUNC_1 (VAR_0, VAR_1->a_tload , VAR_2->e_tload);
  FUNC_1 (VAR_0, VAR_1->a_dload , VAR_2->e_dload);
  VAR_2->e_talign[0] = VAR_1->a_talign;
  VAR_2->e_dalign[0] = VAR_1->a_dalign;
  VAR_2->e_balign[0] = VAR_1->a_balign;
  VAR_2->e_relaxable[0] = VAR_1->a_relaxable;
}

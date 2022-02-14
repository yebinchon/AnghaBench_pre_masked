
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct internal_exec {int a_relaxable; int a_balign; int a_dalign; int a_talign; void* a_dload; void* a_tload; void* a_drsize; void* a_trsize; void* a_entry; void* a_syms; void* a_bss; void* a_data; void* a_text; int a_info; } ;
struct external_exec {int * e_relaxable; int * e_balign; int * e_dalign; int * e_talign; int e_dload; int e_tload; int e_drsize; int e_trsize; int e_entry; int e_syms; int e_bss; int e_data; int e_text; int e_info; } ;
typedef int bfd ;


 void* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2 (bfd *VAR_0,
     struct external_exec *VAR_1,
     struct internal_exec *VAR_2)
{

  VAR_2->a_info = FUNC_1 (VAR_0, VAR_1->e_info);
  VAR_2->a_text = FUNC_0 (VAR_0, VAR_1->e_text);
  VAR_2->a_data = FUNC_0 (VAR_0, VAR_1->e_data);
  VAR_2->a_bss = FUNC_0 (VAR_0, VAR_1->e_bss);
  VAR_2->a_syms = FUNC_0 (VAR_0, VAR_1->e_syms);
  VAR_2->a_entry = FUNC_0 (VAR_0, VAR_1->e_entry);
  VAR_2->a_trsize = FUNC_0 (VAR_0, VAR_1->e_trsize);
  VAR_2->a_drsize = FUNC_0 (VAR_0, VAR_1->e_drsize);
  VAR_2->a_tload = FUNC_0 (VAR_0, VAR_1->e_tload);
  VAR_2->a_dload = FUNC_0 (VAR_0, VAR_1->e_dload);
  VAR_2->a_talign = VAR_1->e_talign[0];
  VAR_2->a_dalign = VAR_1->e_dalign[0];
  VAR_2->a_balign = VAR_1->e_balign[0];
  VAR_2->a_relaxable = VAR_1->e_relaxable[0];
}

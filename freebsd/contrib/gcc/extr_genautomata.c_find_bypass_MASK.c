
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn_reserv_decl {int dummy; } ;
struct bypass_decl {struct insn_reserv_decl* in_insn_reserv; struct bypass_decl* next; } ;



__attribute__((used)) static struct bypass_decl *
FUNC_0 (struct bypass_decl *VAR_0,
      struct insn_reserv_decl *VAR_1)
{
  struct bypass_decl *VAR_2;

  for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
    if (VAR_2->in_insn_reserv == VAR_1)
      break;
  return VAR_2;
}

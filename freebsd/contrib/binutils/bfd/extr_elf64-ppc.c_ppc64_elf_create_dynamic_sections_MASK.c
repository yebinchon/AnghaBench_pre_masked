
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_link_hash_table {void* relbss; void* dynbss; void* relplt; void* plt; void* got; } ;
struct bfd_link_info {int shared; } ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct bfd_link_info*) ;
 int FUNC_1 () ;
 void* FUNC_2 (int *,char*) ;
 struct ppc_link_hash_table* FUNC_3 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_2, struct bfd_link_info *VAR_3)
{
  struct ppc_link_hash_table *VAR_4;

  if (!FUNC_0 (VAR_2, VAR_3))
    return VAR_0;

  VAR_4 = FUNC_3 (VAR_3);
  if (!VAR_4->got)
    VAR_4->got = FUNC_2 (VAR_2, ".got");
  VAR_4->plt = FUNC_2 (VAR_2, ".plt");
  VAR_4->relplt = FUNC_2 (VAR_2, ".rela.plt");
  VAR_4->dynbss = FUNC_2 (VAR_2, ".dynbss");
  if (!VAR_3->shared)
    VAR_4->relbss = FUNC_2 (VAR_2, ".rela.bss");

  if (!VAR_4->got || !VAR_4->plt || !VAR_4->relplt || !VAR_4->dynbss
      || (!VAR_3->shared && !VAR_4->relbss))
    FUNC_1 ();

  return VAR_1;
}

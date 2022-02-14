
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_elf_link_hash_table {scalar_t__ plt_type; int * plt; void* relplt; int srelplt2; scalar_t__ is_vxworks; int * relsbss; void* relbss; int * dynsbss; void* dynbss; int * glink; int * got; } ;
struct bfd_link_info {int shared; } ;
typedef int flagword ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,struct bfd_link_info*) ;
 int FUNC_1 () ;
 void* FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*,int) ;
 int * FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,struct bfd_link_info*,int *) ;
 int FUNC_8 (int *,struct bfd_link_info*) ;
 struct ppc_elf_link_hash_table* FUNC_9 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (bfd *VAR_9, struct bfd_link_info *VAR_10)
{
  struct ppc_elf_link_hash_table *VAR_11;
  asection *VAR_12;
  flagword VAR_13;

  VAR_11 = FUNC_9 (VAR_10);

  if (VAR_11->got == ((void*)0)
      && !FUNC_8 (VAR_9, VAR_10))
    return VAR_0;

  if (!FUNC_0 (VAR_9, VAR_10))
    return VAR_0;

  VAR_13 = (VAR_2 | VAR_7 | VAR_8 | VAR_4
    | VAR_5 | VAR_6);

  VAR_12 = FUNC_3 (VAR_9, ".glink", VAR_13 | VAR_3);
  VAR_11->glink = VAR_12;
  if (VAR_12 == ((void*)0)
      || !FUNC_5 (VAR_9, VAR_12, 4))
    return VAR_0;

  VAR_11->dynbss = FUNC_2 (VAR_9, ".dynbss");
  VAR_12 = FUNC_4 (VAR_9, ".dynsbss",
       VAR_2 | VAR_6);
  VAR_11->dynsbss = VAR_12;
  if (VAR_12 == ((void*)0))
    return VAR_0;

  if (! VAR_10->shared)
    {
      VAR_11->relbss = FUNC_2 (VAR_9, ".rela.bss");
      VAR_12 = FUNC_4 (VAR_9, ".rela.sbss", VAR_13);
      VAR_11->relsbss = VAR_12;
      if (VAR_12 == ((void*)0)
   || ! FUNC_5 (VAR_9, VAR_12, 2))
 return VAR_0;
    }

  if (VAR_11->is_vxworks
      && !FUNC_7 (VAR_9, VAR_10, &VAR_11->srelplt2))
    return VAR_0;

  VAR_11->relplt = FUNC_2 (VAR_9, ".rela.plt");
  VAR_11->plt = VAR_12 = FUNC_2 (VAR_9, ".plt");
  if (VAR_12 == ((void*)0))
    FUNC_1 ();

  VAR_13 = VAR_2 | VAR_3 | VAR_6;
  if (VAR_11->plt_type == VAR_1)

    VAR_13 |= VAR_4 | VAR_7 | VAR_8;
  return FUNC_6 (VAR_9, VAR_12, VAR_13);
}

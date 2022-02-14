
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_elf_link_hash_table {int relgot; void* sgotplt; scalar_t__ is_vxworks; int * got; } ;
struct bfd_link_info {int dummy; } ;
typedef int flagword ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int *,int) ;
 struct ppc_elf_link_hash_table* FUNC_6 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (bfd *VAR_9, struct bfd_link_info *VAR_10)
{
  struct ppc_elf_link_hash_table *VAR_11;
  asection *VAR_12;
  flagword VAR_13;

  if (!FUNC_0 (VAR_9, VAR_10))
    return VAR_0;

  VAR_11 = FUNC_6 (VAR_10);
  VAR_11->got = VAR_12 = FUNC_2 (VAR_9, ".got");
  if (VAR_12 == ((void*)0))
    FUNC_1 ();

  if (VAR_11->is_vxworks)
    {
      VAR_11->sgotplt = FUNC_2 (VAR_9, ".got.plt");
      if (!VAR_11->sgotplt)
 FUNC_1 ();
    }
  else
    {


      VAR_13 = (VAR_1 | VAR_6 | VAR_2 | VAR_3
        | VAR_4 | VAR_5);
      if (!FUNC_5 (VAR_9, VAR_12, VAR_13))
 return VAR_0;
    }

  VAR_13 = (VAR_1 | VAR_6 | VAR_3 | VAR_4
    | VAR_5 | VAR_7);
  VAR_11->relgot = FUNC_3 (VAR_9, ".rela.got", VAR_13);
  if (!VAR_11->relgot
      || ! FUNC_4 (VAR_9, VAR_11->relgot, 2))
    return VAR_0;

  return VAR_8;
}

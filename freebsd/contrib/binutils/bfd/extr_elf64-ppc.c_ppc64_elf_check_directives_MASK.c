
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int creator; } ;
struct TYPE_7__ {TYPE_5__ root; } ;
struct ppc_link_hash_table {scalar_t__ twiddled_syms; TYPE_2__ elf; struct ppc_link_hash_entry* dot_syms; } ;
struct TYPE_6__ {struct ppc_link_hash_entry* next_dot_sym; } ;
struct ppc_link_hash_entry {TYPE_1__ u; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_boolean ;
struct TYPE_8__ {int xvec; } ;
typedef TYPE_3__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ppc_link_hash_entry*,struct bfd_link_info*) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct ppc_link_hash_table* FUNC_3 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_2, struct bfd_link_info *VAR_3)
{
  struct ppc_link_hash_table *VAR_4;
  struct ppc_link_hash_entry **VAR_5, *VAR_6;

  VAR_4 = FUNC_3 (VAR_3);
  if (!FUNC_2 (VAR_4->elf.root.creator))
    return VAR_1;

  if (FUNC_2 (VAR_2->xvec))
    {
      VAR_5 = &VAR_4->dot_syms;
      while ((VAR_6 = *VAR_5) != ((void*)0))
 {
   *VAR_5 = ((void*)0);
   if (!FUNC_0 (VAR_6, VAR_3))
     return VAR_0;
   VAR_5 = &VAR_6->u.next_dot_sym;
 }
    }


  VAR_5 = &VAR_4->dot_syms;
  while ((VAR_6 = *VAR_5) != ((void*)0))
    {
      *VAR_5 = ((void*)0);
      VAR_5 = &VAR_6->u.next_dot_sym;
    }



  if (VAR_4->twiddled_syms)
    {
      FUNC_1 (&VAR_4->elf.root);
      VAR_4->twiddled_syms = 0;
    }
  return VAR_1;
}

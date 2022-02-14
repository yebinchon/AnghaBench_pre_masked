
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ppc_link_hash_table {int elf; } ;
struct TYPE_4__ {char* string; } ;
struct TYPE_5__ {TYPE_1__ root; } ;
struct TYPE_6__ {TYPE_2__ root; } ;
struct ppc_link_hash_entry {int is_func_descriptor; int is_func; struct ppc_link_hash_entry* oh; TYPE_3__ elf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*,int ,int ,int ) ;

__attribute__((used)) static struct ppc_link_hash_entry *
FUNC_1 (struct ppc_link_hash_entry *VAR_1, struct ppc_link_hash_table *VAR_2)
{
  struct ppc_link_hash_entry *VAR_3 = VAR_1->oh;

  if (VAR_3 == ((void*)0))
    {
      const char *VAR_4 = VAR_1->elf.root.root.string + 1;

      VAR_3 = (struct ppc_link_hash_entry *)
 FUNC_0 (&VAR_2->elf, VAR_4, VAR_0, VAR_0, VAR_0);
      if (VAR_3 != ((void*)0))
 {
   VAR_3->is_func_descriptor = 1;
   VAR_3->oh = VAR_1;
   VAR_1->is_func = 1;
   VAR_1->oh = VAR_3;
 }
    }

  return VAR_3;
}

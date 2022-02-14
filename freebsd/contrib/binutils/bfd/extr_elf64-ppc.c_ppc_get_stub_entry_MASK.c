
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ppc_stub_hash_entry {TYPE_3__ const* id_sec; struct ppc_link_hash_entry* h; } ;
struct ppc_link_hash_table {int stub_hash_table; TYPE_1__* stub_group; } ;
struct TYPE_9__ {struct ppc_stub_hash_entry* stub_cache; } ;
struct ppc_link_hash_entry {TYPE_2__ u; } ;
struct TYPE_10__ {size_t id; } ;
typedef TYPE_3__ asection ;
struct TYPE_8__ {TYPE_3__* link_sec; } ;
typedef int Elf_Internal_Rela ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct ppc_stub_hash_entry* FUNC_1 (int *,char*,int ,int ) ;
 char* FUNC_2 (TYPE_3__ const*,TYPE_3__ const*,struct ppc_link_hash_entry*,int const*) ;

__attribute__((used)) static struct ppc_stub_hash_entry *
FUNC_3 (const asection *VAR_1,
      const asection *VAR_2,
      struct ppc_link_hash_entry *VAR_3,
      const Elf_Internal_Rela *VAR_4,
      struct ppc_link_hash_table *VAR_5)
{
  struct ppc_stub_hash_entry *VAR_6;
  const asection *VAR_7;






  VAR_7 = VAR_5->stub_group[VAR_1->id].link_sec;

  if (VAR_3 != ((void*)0) && VAR_3->u.stub_cache != ((void*)0)
      && VAR_3->u.stub_cache->h == VAR_3
      && VAR_3->u.stub_cache->id_sec == VAR_7)
    {
      VAR_6 = VAR_3->u.stub_cache;
    }
  else
    {
      char *VAR_8;

      VAR_8 = FUNC_2 (VAR_7, VAR_2, VAR_3, VAR_4);
      if (VAR_8 == ((void*)0))
 return ((void*)0);

      VAR_6 = FUNC_1 (&VAR_5->stub_hash_table,
      VAR_8, VAR_0, VAR_0);
      if (VAR_3 != ((void*)0))
 VAR_3->u.stub_cache = VAR_6;

      FUNC_0 (VAR_8);
    }

  return VAR_6;
}

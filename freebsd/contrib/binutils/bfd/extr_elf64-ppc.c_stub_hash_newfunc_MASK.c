
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_stub_hash_entry {int * id_sec; int * h; int * target_section; scalar_t__ target_value; scalar_t__ stub_offset; int * stub_sec; int stub_type; } ;
struct bfd_hash_table {int dummy; } ;
struct bfd_hash_entry {int dummy; } ;


 struct bfd_hash_entry* FUNC_0 (struct bfd_hash_table*,int) ;
 struct bfd_hash_entry* FUNC_1 (struct bfd_hash_entry*,struct bfd_hash_table*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static struct bfd_hash_entry *
FUNC_2 (struct bfd_hash_entry *VAR_1,
     struct bfd_hash_table *VAR_2,
     const char *VAR_3)
{


  if (VAR_1 == ((void*)0))
    {
      VAR_1 = FUNC_0 (VAR_2, sizeof (struct ppc_stub_hash_entry));
      if (VAR_1 == ((void*)0))
 return VAR_1;
    }


  VAR_1 = FUNC_1 (VAR_1, VAR_2, VAR_3);
  if (VAR_1 != ((void*)0))
    {
      struct ppc_stub_hash_entry *VAR_4;


      VAR_4 = (struct ppc_stub_hash_entry *) VAR_1;
      VAR_4->stub_type = VAR_0;
      VAR_4->stub_sec = ((void*)0);
      VAR_4->stub_offset = 0;
      VAR_4->target_value = 0;
      VAR_4->target_section = ((void*)0);
      VAR_4->h = ((void*)0);
      VAR_4->id_sec = ((void*)0);
    }

  return VAR_1;
}

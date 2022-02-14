
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_stub_hash_entry {scalar_t__ delta; scalar_t__ off; scalar_t__ target_off; int * target_section; } ;
struct bfd_hash_table {int dummy; } ;
struct bfd_hash_entry {int dummy; } ;


 struct bfd_hash_entry* FUNC_0 (struct bfd_hash_table*,int) ;
 struct bfd_hash_entry* FUNC_1 (struct bfd_hash_entry*,struct bfd_hash_table*,char const*) ;

__attribute__((used)) static struct bfd_hash_entry *
FUNC_2 (struct bfd_hash_entry *VAR_0,
     struct bfd_hash_table *VAR_1,
     const char *VAR_2)
{


  if (VAR_0 == ((void*)0))
    {
      VAR_0 = FUNC_0 (VAR_1, sizeof (struct spu_stub_hash_entry));
      if (VAR_0 == ((void*)0))
 return VAR_0;
    }


  VAR_0 = FUNC_1 (VAR_0, VAR_1, VAR_2);
  if (VAR_0 != ((void*)0))
    {
      struct spu_stub_hash_entry *VAR_3 = (struct spu_stub_hash_entry *) VAR_0;

      VAR_3->target_section = ((void*)0);
      VAR_3->target_off = 0;
      VAR_3->off = 0;
      VAR_3->delta = 0;
    }

  return VAR_0;
}

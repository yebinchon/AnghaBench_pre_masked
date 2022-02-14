
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_hash_entry {int section; } ;
struct bfd_hash_table {int dummy; } ;
struct bfd_hash_entry {int dummy; } ;
typedef int asection ;


 scalar_t__ FUNC_0 (struct bfd_hash_table*,int) ;
 struct bfd_hash_entry* FUNC_1 (struct bfd_hash_entry*,struct bfd_hash_table*,char const*) ;
 int FUNC_2 (int *,int ,int) ;

struct bfd_hash_entry *
FUNC_3 (struct bfd_hash_entry *VAR_0,
     struct bfd_hash_table *VAR_1,
     const char *VAR_2)
{


  if (VAR_0 == ((void*)0))
    {
      VAR_0 = (struct bfd_hash_entry *)
 FUNC_0 (VAR_1, sizeof (struct section_hash_entry));
      if (VAR_0 == ((void*)0))
 return VAR_0;
    }


  VAR_0 = FUNC_1 (VAR_0, VAR_1, VAR_2);
  if (VAR_0 != ((void*)0))
    FUNC_2 (&((struct section_hash_entry *) VAR_0)->section, 0,
     sizeof (asection));

  return VAR_0;
}

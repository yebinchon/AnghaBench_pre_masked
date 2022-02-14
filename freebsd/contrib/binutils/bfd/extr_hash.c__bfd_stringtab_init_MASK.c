
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strtab_hash_entry {int dummy; } ;
struct bfd_strtab_hash {int xcoff; int * last; int * first; scalar_t__ size; int table; } ;
typedef int bfd_size_type ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 struct bfd_strtab_hash* FUNC_1 (int) ;
 int FUNC_2 (struct bfd_strtab_hash*) ;
 int VAR_1 ;

struct bfd_strtab_hash *
FUNC_3 (void)
{
  struct bfd_strtab_hash *VAR_2;
  bfd_size_type VAR_3 = sizeof (* VAR_2);

  VAR_2 = FUNC_1 (VAR_3);
  if (VAR_2 == ((void*)0))
    return ((void*)0);

  if (!FUNC_0 (&VAR_2->table, VAR_1,
       sizeof (struct strtab_hash_entry)))
    {
      FUNC_2 (VAR_2);
      return ((void*)0);
    }

  VAR_2->size = 0;
  VAR_2->first = ((void*)0);
  VAR_2->last = ((void*)0);
  VAR_2->xcoff = VAR_0;

  return VAR_2;
}

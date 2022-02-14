
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecoff_link_hash_entry {int indx; int esym; scalar_t__ small; scalar_t__ written; int * abfd; } ;
struct bfd_hash_table {int dummy; } ;
struct bfd_hash_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct bfd_hash_entry*,struct bfd_hash_table*,char const*) ;
 scalar_t__ FUNC_1 (struct bfd_hash_table*,int) ;
 int FUNC_2 (void*,int ,int) ;

__attribute__((used)) static struct bfd_hash_entry *
FUNC_3 (struct bfd_hash_entry *VAR_0,
    struct bfd_hash_table *VAR_1,
    const char *VAR_2)
{
  struct ecoff_link_hash_entry *VAR_3 = (struct ecoff_link_hash_entry *) VAR_0;



  if (VAR_3 == ((void*)0))
    VAR_3 = ((struct ecoff_link_hash_entry *)
    FUNC_1 (VAR_1, sizeof (struct ecoff_link_hash_entry)));
  if (VAR_3 == ((void*)0))
    return ((void*)0);


  VAR_3 = ((struct ecoff_link_hash_entry *)
  FUNC_0 ((struct bfd_hash_entry *) VAR_3,
     VAR_1, VAR_2));

  if (VAR_3)
    {

      VAR_3->indx = -1;
      VAR_3->abfd = ((void*)0);
      VAR_3->written = 0;
      VAR_3->small = 0;
    }
  FUNC_2 ((void *) &VAR_3->esym, 0, sizeof VAR_3->esym);

  return (struct bfd_hash_entry *) VAR_3;
}

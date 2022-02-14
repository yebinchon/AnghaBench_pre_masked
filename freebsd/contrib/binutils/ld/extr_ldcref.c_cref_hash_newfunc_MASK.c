
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_hash_entry {int dummy; } ;
struct cref_hash_entry {struct bfd_hash_entry root; int * refs; int * demangled; } ;
struct bfd_hash_table {int dummy; } ;


 scalar_t__ FUNC_0 (struct bfd_hash_table*,int) ;
 scalar_t__ FUNC_1 (struct bfd_hash_entry*,struct bfd_hash_table*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static struct bfd_hash_entry *
FUNC_2 (struct bfd_hash_entry *VAR_1,
     struct bfd_hash_table *VAR_2,
     const char *VAR_3)
{
  struct cref_hash_entry *VAR_4 = (struct cref_hash_entry *) VAR_1;



  if (VAR_4 == ((void*)0))
    VAR_4 = ((struct cref_hash_entry *)
    FUNC_0 (VAR_2, sizeof (struct cref_hash_entry)));
  if (VAR_4 == ((void*)0))
    return ((void*)0);


  VAR_4 = ((struct cref_hash_entry *)
  FUNC_1 ((struct bfd_hash_entry *) VAR_4, VAR_2, VAR_3));
  if (VAR_4 != ((void*)0))
    {

      VAR_4->demangled = ((void*)0);
      VAR_4->refs = ((void*)0);



      ++VAR_0;
    }

  return &VAR_4->root;
}

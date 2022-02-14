
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_link_hash_table {int dummy; } ;
struct ecoff_link_hash_table {struct bfd_link_hash_table root; } ;
struct ecoff_link_hash_entry {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd ;


 int FUNC_0 (struct bfd_link_hash_table*,int *,int ,int) ;
 struct ecoff_link_hash_table* FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct ecoff_link_hash_table*) ;

struct bfd_link_hash_table *
FUNC_3 (bfd *VAR_1)
{
  struct ecoff_link_hash_table *VAR_2;
  bfd_size_type VAR_3 = sizeof (struct ecoff_link_hash_table);

  VAR_2 = FUNC_1 (VAR_3);
  if (VAR_2 == ((void*)0))
    return ((void*)0);
  if (!FUNC_0 (&VAR_2->root, VAR_1,
      VAR_0,
      sizeof (struct ecoff_link_hash_entry)))
    {
      FUNC_2 (VAR_2);
      return ((void*)0);
    }
  return &VAR_2->root;
}

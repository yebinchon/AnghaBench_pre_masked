
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_link_hash_table {int dummy; } ;
struct coff_link_hash_table {struct bfd_link_hash_table root; } ;
struct coff_link_hash_entry {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd ;


 int VAR_0 ;
 int FUNC_0 (struct coff_link_hash_table*,int *,int ,int) ;
 struct coff_link_hash_table* FUNC_1 (int) ;
 int FUNC_2 (struct coff_link_hash_table*) ;

struct bfd_link_hash_table *
FUNC_3 (bfd *VAR_1)
{
  struct coff_link_hash_table *VAR_2;
  bfd_size_type VAR_3 = sizeof (struct coff_link_hash_table);

  VAR_2 = FUNC_1 (VAR_3);
  if (VAR_2 == ((void*)0))
    return ((void*)0);

  if (! FUNC_0 (VAR_2, VAR_1,
     VAR_0,
     sizeof (struct coff_link_hash_entry)))
    {
      FUNC_2 (VAR_2);
      return (struct bfd_link_hash_table *) ((void*)0);
    }
  return &VAR_2->root;
}

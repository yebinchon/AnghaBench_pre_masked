
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_link_hash_entry {int indx; int * aux; int * auxbfd; scalar_t__ numaux; int class; int type; } ;
struct bfd_hash_table {int dummy; } ;
struct bfd_hash_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bfd_hash_entry*,struct bfd_hash_table*,char const*) ;
 scalar_t__ FUNC_1 (struct bfd_hash_table*,int) ;

struct bfd_hash_entry *
FUNC_2 (struct bfd_hash_entry *VAR_2,
        struct bfd_hash_table *VAR_3,
        const char *VAR_4)
{
  struct coff_link_hash_entry *VAR_5 = (struct coff_link_hash_entry *) VAR_2;



  if (VAR_5 == (struct coff_link_hash_entry *) ((void*)0))
    VAR_5 = ((struct coff_link_hash_entry *)
    FUNC_1 (VAR_3, sizeof (struct coff_link_hash_entry)));
  if (VAR_5 == (struct coff_link_hash_entry *) ((void*)0))
    return (struct bfd_hash_entry *) VAR_5;


  VAR_5 = ((struct coff_link_hash_entry *)
  FUNC_0 ((struct bfd_hash_entry *) VAR_5,
     VAR_3, VAR_4));
  if (VAR_5 != (struct coff_link_hash_entry *) ((void*)0))
    {

      VAR_5->indx = -1;
      VAR_5->type = VAR_1;
      VAR_5->class = VAR_0;
      VAR_5->numaux = 0;
      VAR_5->auxbfd = ((void*)0);
      VAR_5->aux = ((void*)0);
    }

  return (struct bfd_hash_entry *) VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int toc_indx; } ;
struct xcoff_link_hash_entry {int indx; int ldindx; int smclas; scalar_t__ flags; int * ldsym; int * descriptor; TYPE_1__ u; int * toc_section; } ;
struct bfd_hash_table {int dummy; } ;
struct bfd_hash_entry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bfd_hash_entry*,struct bfd_hash_table*,char const*) ;
 struct xcoff_link_hash_entry* FUNC_1 (struct bfd_hash_table*,int) ;

__attribute__((used)) static struct bfd_hash_entry *
FUNC_2 (struct bfd_hash_entry *VAR_1,
    struct bfd_hash_table *VAR_2,
    const char *VAR_3)
{
  struct xcoff_link_hash_entry *VAR_4 = (struct xcoff_link_hash_entry *) VAR_1;



  if (VAR_4 == ((void*)0))
    VAR_4 = FUNC_1 (VAR_2, sizeof (* VAR_4));
  if (VAR_4 == ((void*)0))
    return ((void*)0);


  VAR_4 = ((struct xcoff_link_hash_entry *)
  FUNC_0 ((struct bfd_hash_entry *) VAR_4,
     VAR_2, VAR_3));
  if (VAR_4 != ((void*)0))
    {

      VAR_4->indx = -1;
      VAR_4->toc_section = ((void*)0);
      VAR_4->u.toc_indx = -1;
      VAR_4->descriptor = ((void*)0);
      VAR_4->ldsym = ((void*)0);
      VAR_4->ldindx = -1;
      VAR_4->flags = 0;
      VAR_4->smclas = VAR_0;
    }

  return (struct bfd_hash_entry *) VAR_4;
}

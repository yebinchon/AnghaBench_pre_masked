
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfd_link_hash_table {int dummy; } ;
struct xcoff_link_hash_table {struct bfd_link_hash_table root; int * special_sections; void* gc; void* textro; scalar_t__ file_align; int * imports; int * descriptor_section; int * toc_section; int * linkage_section; int ldhdr; scalar_t__ ldrel_count; int * loader_section; int * debug_section; int debug_strtab; } ;
struct xcoff_link_hash_entry {int dummy; } ;
struct internal_ldhdr {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd ;
struct TYPE_2__ {int full_aouthdr; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfd_link_hash_table*,int *,int ,int) ;
 int FUNC_1 () ;
 struct xcoff_link_hash_table* FUNC_2 (int) ;
 int FUNC_3 (struct xcoff_link_hash_table*) ;
 int FUNC_4 (int *,int ,int) ;
 TYPE_1__* FUNC_5 (int *) ;
 int VAR_2 ;

struct bfd_link_hash_table *
FUNC_6 (bfd *VAR_3)
{
  struct xcoff_link_hash_table *VAR_4;
  bfd_size_type VAR_5 = sizeof (* VAR_4);

  VAR_4 = FUNC_2 (VAR_5);
  if (VAR_4 == ((void*)0))
    return ((void*)0);
  if (!FUNC_0 (&VAR_4->root, VAR_3, VAR_2,
      sizeof (struct xcoff_link_hash_entry)))
    {
      FUNC_3 (VAR_4);
      return ((void*)0);
    }

  VAR_4->debug_strtab = FUNC_1 ();
  VAR_4->debug_section = ((void*)0);
  VAR_4->loader_section = ((void*)0);
  VAR_4->ldrel_count = 0;
  FUNC_4 (&VAR_4->ldhdr, 0, sizeof (struct internal_ldhdr));
  VAR_4->linkage_section = ((void*)0);
  VAR_4->toc_section = ((void*)0);
  VAR_4->descriptor_section = ((void*)0);
  VAR_4->imports = ((void*)0);
  VAR_4->file_align = 0;
  VAR_4->textro = VAR_0;
  VAR_4->gc = VAR_0;
  FUNC_4 (VAR_4->special_sections, 0, sizeof VAR_4->special_sections);




  FUNC_5 (VAR_3)->full_aouthdr = VAR_1;

  return &VAR_4->root;
}

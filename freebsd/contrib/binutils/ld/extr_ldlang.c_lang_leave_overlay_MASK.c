
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct overlay_list {struct overlay_list* next; TYPE_1__* os; } ;
typedef int lang_output_section_phdr_list ;
struct TYPE_6__ {struct TYPE_6__* next; int name; } ;
typedef TYPE_2__ lang_nocrossref_type ;
typedef int lang_memory_region_type ;
typedef int fill_type ;
typedef int etree_type ;
struct TYPE_5__ {int name; int * phdrs; int sectype; int * load_base; int * lma_region; int * region; int * fill; int update_dot_tree; } ;


 int VAR_0 ;
 int FUNC_0 (char,char*,int ) ;
 int FUNC_1 (char,int *,int *) ;
 int FUNC_2 (struct overlay_list*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int **,int **,char const*,char const*,int ,int ) ;
 int VAR_1 ;
 struct overlay_list* VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 TYPE_2__* FUNC_5 (int) ;

void
FUNC_6 (etree_type *VAR_5,
      int VAR_6,
      fill_type *VAR_7,
      const char *VAR_8,
      lang_output_section_phdr_list *VAR_9,
      const char *VAR_10)
{
  lang_memory_region_type *VAR_11;
  lang_memory_region_type *VAR_12;
  struct overlay_list *VAR_13;
  lang_nocrossref_type *VAR_14;

  FUNC_4 (&VAR_11, &VAR_12,
      VAR_8, VAR_10,
      VAR_5 != ((void*)0), VAR_0);

  VAR_14 = ((void*)0);



  if (VAR_2 != ((void*)0))
    VAR_2->os->update_dot_tree
      = FUNC_0 ('=', ".", FUNC_1 ('+', VAR_4, VAR_3));

  VAR_13 = VAR_2;
  while (VAR_13 != ((void*)0))
    {
      struct overlay_list *VAR_15;

      if (VAR_7 != ((void*)0) && VAR_13->os->fill == ((void*)0))
 VAR_13->os->fill = VAR_7;

      VAR_13->os->region = VAR_11;
      VAR_13->os->lma_region = VAR_12;





      if (VAR_13->next == 0)
 {
   VAR_13->os->load_base = VAR_5;
   VAR_13->os->sectype = VAR_1;
 }
      if (VAR_9 != ((void*)0) && VAR_13->os->phdrs == ((void*)0))
 VAR_13->os->phdrs = VAR_9;

      if (VAR_6)
 {
   lang_nocrossref_type *VAR_16;

   VAR_16 = FUNC_5 (sizeof *VAR_16);
   VAR_16->name = VAR_13->os->name;
   VAR_16->next = VAR_14;
   VAR_14 = VAR_16;
 }

      VAR_15 = VAR_13->next;
      FUNC_2 (VAR_13);
      VAR_13 = VAR_15;
    }

  if (VAR_14 != ((void*)0))
    FUNC_3 (VAR_14);

  VAR_4 = ((void*)0);
  VAR_2 = ((void*)0);
  VAR_3 = ((void*)0);
}

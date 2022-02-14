
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lang_output_section_phdr_list ;
typedef int fill_type ;
struct TYPE_2__ {int * phdrs; int * fill; int * addr_tree; int * load_base; int lma_region; int region; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int *,char const*,char const*,int ,int ) ;
 int * VAR_1 ;
 int VAR_2 ;

void
FUNC_1 (fill_type *VAR_3, const char *VAR_4,
         lang_output_section_phdr_list *VAR_5,
         const char *VAR_6)
{
  FUNC_0 (&VAR_0->region,
      &VAR_0->lma_region,
      VAR_4, VAR_6,
      VAR_0->load_base != ((void*)0),
      VAR_0->addr_tree != ((void*)0));
  VAR_0->fill = VAR_3;
  VAR_0->phdrs = VAR_5;
  VAR_1 = &VAR_2;
}

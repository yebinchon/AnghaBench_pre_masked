
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sectype; int block_value; int * load_base; void* section_alignment; void* subsection_alignment; int children; int flags; int * addr_tree; } ;
typedef TYPE_1__ lang_output_section_statement_type ;
typedef int etree_type ;
typedef enum section_type { ____Placeholder_section_type } section_type ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,int,char*) ;
 TYPE_1__* FUNC_1 (char const*,int) ;
 int VAR_3 ;
 int * VAR_4 ;
 void* FUNC_2 (int ) ;

lang_output_section_statement_type *
FUNC_3 (const char *VAR_5,
         etree_type *VAR_6,
         enum section_type VAR_7,
         etree_type *VAR_8,
         etree_type *VAR_9,
         etree_type *VAR_10,
         int VAR_11)
{
  lang_output_section_statement_type *VAR_12;

   VAR_12 = FUNC_1 (VAR_5,
      VAR_11);
   VAR_2 = VAR_12;



  if (VAR_12->addr_tree == ((void*)0))
    {
      VAR_12->addr_tree = VAR_6;
    }
  VAR_12->sectype = VAR_7;
  if (VAR_7 != VAR_3)
    VAR_12->flags = VAR_1;
  else
    VAR_12->flags = VAR_0;
  VAR_12->block_value = 1;
  VAR_4 = &VAR_12->children;

  VAR_12->subsection_alignment =
    FUNC_2 (FUNC_0 (VAR_9, -1, "subsection alignment"));
  VAR_12->section_alignment =
    FUNC_2 (FUNC_0 (VAR_8, -1, "section alignment"));

  VAR_12->load_base = VAR_10;
  return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * name; } ;
struct wildcard_list {TYPE_1__ spec; struct wildcard_list* next; } ;
struct TYPE_5__ {struct wildcard_list** handler_data; struct wildcard_list* section_list; int walk_wild_section_handler; int * tree; } ;
typedef TYPE_2__ lang_wild_statement_type ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3 (lang_wild_statement_type *VAR_6)
{
  int VAR_7 = 0;
  int VAR_8 = 0;
  struct wildcard_list *VAR_9;
  int VAR_10;
  int VAR_11;

  VAR_6->walk_wild_section_handler = VAR_0;
  VAR_6->handler_data[0] = ((void*)0);
  VAR_6->handler_data[1] = ((void*)0);
  VAR_6->handler_data[2] = ((void*)0);
  VAR_6->handler_data[3] = ((void*)0);
  VAR_6->tree = ((void*)0);







  for (VAR_9 = VAR_6->section_list; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
    {
      ++VAR_7;
      if (VAR_9->spec.name == ((void*)0))
 return;
      if (FUNC_2 (VAR_9->spec.name))
 {
   ++VAR_8;
   if (!FUNC_0 (VAR_9->spec.name))
     return;
 }
    }




  if (VAR_7 == 0 || VAR_7 > 4)
    return;


  for (VAR_9 = VAR_6->section_list; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
    {
      struct wildcard_list *VAR_12;
      for (VAR_12 = VAR_9->next; VAR_12 != ((void*)0); VAR_12 = VAR_12->next)
 {
   if (FUNC_1 (VAR_9->spec.name, VAR_12->spec.name))
     return;
 }
    }

  VAR_10 = (VAR_7 << 8) + VAR_8;
  switch (VAR_10)
    {
    case 0x0100:
      VAR_6->walk_wild_section_handler = VAR_1;
      break;
    case 0x0101:
      VAR_6->walk_wild_section_handler = VAR_2;
      break;
    case 0x0201:
      VAR_6->walk_wild_section_handler = VAR_3;
      break;
    case 0x0302:
      VAR_6->walk_wild_section_handler = VAR_4;
      break;
    case 0x0402:
      VAR_6->walk_wild_section_handler = VAR_5;
      break;
    default:
      return;
    }






  VAR_11 = 0;
  for (VAR_9 = VAR_6->section_list; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
    if (!FUNC_2 (VAR_9->spec.name))
      VAR_6->handler_data[VAR_11++] = VAR_9;
  for (VAR_9 = VAR_6->section_list; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
    if (FUNC_2 (VAR_9->spec.name))
      VAR_6->handler_data[VAR_11++] = VAR_9;
}

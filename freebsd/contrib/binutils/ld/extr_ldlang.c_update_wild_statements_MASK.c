
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {int sorted; } ;
struct wildcard_list {TYPE_3__ spec; struct wildcard_list* next; } ;
struct TYPE_17__ {TYPE_8__* head; } ;
struct TYPE_18__ {TYPE_6__ children; } ;
struct TYPE_15__ {TYPE_8__* head; } ;
struct TYPE_16__ {TYPE_4__ children; } ;
struct TYPE_13__ {struct wildcard_list* section_list; } ;
struct TYPE_12__ {int type; TYPE_8__* next; } ;
struct TYPE_19__ {TYPE_7__ group_statement; TYPE_5__ output_section_statement; TYPE_2__ wild_statement; TYPE_1__ header; } ;
typedef TYPE_8__ lang_statement_union_type ;
struct TYPE_11__ {TYPE_8__* head; } ;


 int FUNC_0 () ;

 int VAR_0 ;

 int VAR_1 ;
 TYPE_10__ VAR_2 ;





 int VAR_3 ;

__attribute__((used)) static void
FUNC_1 (lang_statement_union_type *VAR_4)
{
  struct wildcard_list *VAR_5;

  switch (VAR_3)
    {
    default:
      FUNC_0 ();

    case 128:
      break;

    case 133:
    case 134:
      for (; VAR_4 != ((void*)0); VAR_4 = VAR_4->header.next)
 {
   switch (VAR_4->header.type)
     {
     default:
       break;

     case 129:
       VAR_5 = VAR_4->wild_statement.section_list;
       for (VAR_5 = VAR_4->wild_statement.section_list; VAR_5 != ((void*)0);
     VAR_5 = VAR_5->next)
  {
    switch (VAR_5->spec.sorted)
      {
      case 128:
        VAR_5->spec.sorted = VAR_3;
        break;
      case 133:
        if (VAR_3 == 134)
   VAR_5->spec.sorted = VAR_1;
        break;
      case 134:
        if (VAR_3 == 133)
   VAR_5->spec.sorted = VAR_0;
        break;
      default:
        break;
      }
  }
       break;

     case 132:
       FUNC_1 (VAR_2.head);
       break;

     case 130:
       FUNC_1
  (VAR_4->output_section_statement.children.head);
       break;

     case 131:
       FUNC_1 (VAR_4->group_statement.children.head);
       break;
     }
 }
      break;
    }
}

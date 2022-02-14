
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* head; } ;
struct TYPE_11__ {TYPE_1__ children; } ;
struct TYPE_12__ {int type; TYPE_4__* next; } ;
struct TYPE_13__ {TYPE_2__ group_statement; int wild_statement; TYPE_3__ header; } ;
typedef TYPE_4__ lang_statement_union_type ;
struct TYPE_14__ {int all_input_readonly; } ;
typedef TYPE_5__ lang_output_section_statement_type ;
struct TYPE_15__ {TYPE_4__* head; } ;


 int VAR_0 ;
 TYPE_7__ VAR_1 ;



 int FUNC_0 (int *,int ,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_1
  (lang_statement_union_type *VAR_2,
   lang_output_section_statement_type *VAR_3)
{
  for (; VAR_2 != (lang_statement_union_type *) ((void*)0); VAR_2 = VAR_2->header.next)
    {
      switch (VAR_2->header.type)
      {
      case 128:
 FUNC_0 (&VAR_2->wild_statement, VAR_0,
     VAR_3);
 if (! VAR_3->all_input_readonly)
   return;
 break;
      case 130:
 FUNC_1 (VAR_1.head,
         VAR_3);
 if (! VAR_3->all_input_readonly)
   return;
 break;
      case 129:
 FUNC_1 (VAR_2->group_statement.children.head,
         VAR_3);
 if (! VAR_3->all_input_readonly)
   return;
 break;
      default:
 break;
      }
    }
}

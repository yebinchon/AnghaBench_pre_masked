
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_6__* head; } ;
struct TYPE_13__ {TYPE_4__ children; } ;
struct TYPE_10__ {TYPE_6__* head; } ;
struct TYPE_11__ {TYPE_2__ children; } ;
struct TYPE_9__ {int type; TYPE_6__* next; } ;
struct TYPE_14__ {TYPE_5__ group_statement; TYPE_3__ output_section_statement; int wild_statement; TYPE_1__ header; } ;
typedef TYPE_6__ lang_statement_union_type ;
struct TYPE_15__ {TYPE_6__* head; } ;


 TYPE_8__ VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int *,int ,int *) ;

__attribute__((used)) static void
FUNC_1 (lang_statement_union_type *VAR_2)
{
  for (; VAR_2 != ((void*)0); VAR_2 = VAR_2->header.next)
    {
      switch (VAR_2->header.type)
 {
 case 128:
   FUNC_0 (&VAR_2->wild_statement, VAR_1, ((void*)0));
   break;
 case 131:
   FUNC_1 (VAR_0.head);
   break;
 case 129:
   FUNC_1 (VAR_2->output_section_statement.children.head);
   break;
 case 130:
   FUNC_1 (VAR_2->group_statement.children.head);
   break;
 default:
   break;
 }
    }
}

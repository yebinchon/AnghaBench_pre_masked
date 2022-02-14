
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_13__ {TYPE_8__* head; } ;
struct TYPE_14__ {TYPE_1__ children; } ;
struct TYPE_18__ {TYPE_8__* head; } ;
struct TYPE_19__ {TYPE_6__ children; } ;
struct TYPE_16__ {TYPE_8__* head; } ;
struct TYPE_17__ {TYPE_4__ children; } ;
struct TYPE_15__ {int type; TYPE_8__* next; } ;
struct TYPE_20__ {TYPE_2__ group_statement; TYPE_7__ wild_statement; TYPE_5__ output_section_statement; TYPE_3__ header; } ;
typedef TYPE_8__ lang_statement_union_type ;
struct TYPE_12__ {TYPE_8__* head; } ;


 int FUNC_0 () ;
 TYPE_11__ VAR_0 ;
__attribute__((used)) static void
FUNC_1 (void (*VAR_1) (lang_statement_union_type *),
    lang_statement_union_type *VAR_2)
{
  for (; VAR_2 != ((void*)0); VAR_2 = VAR_2->header.next)
    {
      VAR_1 (VAR_2);

      switch (VAR_2->header.type)
 {
 case 140:
   FUNC_1 (VAR_1, VAR_0.head);
   break;
 case 133:
   FUNC_1
     (VAR_1, VAR_2->output_section_statement.children.head);
   break;
 case 128:
   FUNC_1 (VAR_1,
       VAR_2->wild_statement.children.head);
   break;
 case 137:
   FUNC_1 (VAR_1,
       VAR_2->group_statement.children.head);
   break;
 case 139:
 case 130:
 case 134:
 case 132:
 case 129:
 case 136:
 case 135:
 case 141:
 case 131:
 case 142:
 case 138:
   break;
 default:
   FUNC_0 ();
   break;
 }
    }
}

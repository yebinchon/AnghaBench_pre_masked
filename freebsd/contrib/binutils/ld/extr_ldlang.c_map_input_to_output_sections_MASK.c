
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_18__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_21__ {int address; int section_name; TYPE_8__* segment; } ;
struct TYPE_31__ {int exp; } ;
struct TYPE_30__ {int exp; } ;
struct TYPE_28__ {TYPE_11__* head; } ;
struct TYPE_29__ {TYPE_4__ children; } ;
struct TYPE_27__ {char* target; } ;
struct TYPE_26__ {TYPE_11__* head; } ;
struct TYPE_23__ {int constraint; int flags; int addr_tree; TYPE_9__* bfd_section; TYPE_2__ children; int all_input_readonly; } ;
struct TYPE_25__ {int type; TYPE_11__* next; } ;
struct TYPE_22__ {TYPE_10__ address_statement; TYPE_7__ assignment_statement; TYPE_6__ data_statement; TYPE_5__ group_statement; TYPE_3__ target_statement; TYPE_12__ output_section_statement; int wild_statement; TYPE_1__ header; } ;
typedef TYPE_11__ lang_statement_union_type ;
typedef TYPE_12__ lang_output_section_statement_type ;
typedef int flagword ;
struct TYPE_33__ {int flags; } ;
struct TYPE_32__ {int used; } ;
struct TYPE_24__ {TYPE_11__* head; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_11__*,TYPE_12__*) ;
 TYPE_18__ VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_12__*,int *,int) ;
 TYPE_12__* FUNC_4 (int ) ;





 int FUNC_5 (int *,char const*,TYPE_12__*) ;

__attribute__((used)) static void
FUNC_6
  (lang_statement_union_type *VAR_8, const char *VAR_9,
   lang_output_section_statement_type *VAR_10)
{
  flagword VAR_11;

  for (; VAR_8 != ((void*)0); VAR_8 = VAR_8->header.next)
    {
      switch (VAR_8->header.type)
 {
 case 128:
   FUNC_5 (&VAR_8->wild_statement, VAR_9, VAR_10);
   break;
 case 140:
   FUNC_6 (VAR_7.head,
     VAR_9,
     VAR_10);
   break;
 case 133:
   if (VAR_8->output_section_statement.constraint)
     {
       if (VAR_8->output_section_statement.constraint != VAR_1
    && VAR_8->output_section_statement.constraint != VAR_0)
  break;
       VAR_8->output_section_statement.all_input_readonly = VAR_6;
       FUNC_1 (VAR_8->output_section_statement.children.head,
        &VAR_8->output_section_statement);
       if ((VAR_8->output_section_statement.all_input_readonly
     && VAR_8->output_section_statement.constraint == VAR_1)
    || (!VAR_8->output_section_statement.all_input_readonly
        && VAR_8->output_section_statement.constraint == VAR_0))
  {
    VAR_8->output_section_statement.constraint = -1;
    break;
  }
     }

   FUNC_6 (VAR_8->output_section_statement.children.head,
     VAR_9,
     &VAR_8->output_section_statement);
   break;
 case 132:
   break;
 case 129:
   VAR_9 = VAR_8->target_statement.target;
   break;
 case 137:
   FUNC_6 (VAR_8->group_statement.children.head,
     VAR_9,
     VAR_10);
   break;
 case 139:


   FUNC_2 (VAR_8->data_statement.exp);
   VAR_11 = VAR_3;


   if (!(VAR_10->flags & VAR_5))
     VAR_11 |= VAR_2 | VAR_4;
   if (VAR_10->bfd_section == ((void*)0))
     FUNC_3 (VAR_10, ((void*)0), VAR_11);
   else
     VAR_10->bfd_section->flags |= VAR_11;
   break;
 case 136:
   break;
 case 138:
 case 134:
 case 130:
 case 131:
 case 135:
   if (VAR_10 != ((void*)0) && VAR_10->bfd_section == ((void*)0))
     FUNC_3 (VAR_10, ((void*)0), 0);
   break;
 case 141:
   if (VAR_10 != ((void*)0) && VAR_10->bfd_section == ((void*)0))
     FUNC_3 (VAR_10, ((void*)0), 0);



   FUNC_2 (VAR_8->assignment_statement.exp);
   break;
 case 142:
   FUNC_0 ();
   break;
 case 143:
   if (!VAR_8->address_statement.segment
       || !VAR_8->address_statement.segment->used)
     {
       lang_output_section_statement_type *VAR_12
  = (FUNC_4
     (VAR_8->address_statement.section_name));

       if (VAR_12->bfd_section == ((void*)0))
  FUNC_3 (VAR_12, ((void*)0), 0);
       VAR_12->addr_tree = VAR_8->address_statement.address;
     }
   break;
 }
    }
}

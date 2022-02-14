
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
typedef struct TYPE_23__ TYPE_17__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct bfd_link_hash_entry {int dummy; } ;
struct TYPE_33__ {int type; TYPE_10__* next; } ;
struct TYPE_21__ {void* loaded; int the_bfd; int whole_archive; int target; int real; } ;
struct TYPE_32__ {int target; } ;
struct TYPE_30__ {TYPE_10__* head; } ;
struct TYPE_31__ {TYPE_6__ children; } ;
struct TYPE_27__ {TYPE_10__* head; } ;
struct TYPE_28__ {TYPE_3__ children; int filename; } ;
struct TYPE_25__ {TYPE_10__* head; } ;
struct TYPE_26__ {TYPE_1__ children; } ;
struct TYPE_19__ {TYPE_9__ header; TYPE_13__ input_statement; TYPE_8__ target_statement; TYPE_7__ group_statement; TYPE_4__ wild_statement; TYPE_2__ output_section_statement; } ;
typedef TYPE_10__ lang_statement_union_type ;
struct TYPE_20__ {TYPE_10__* head; TYPE_10__** tail; } ;
typedef TYPE_11__ lang_statement_list_type ;
typedef int bfd_boolean ;
struct TYPE_29__ {struct bfd_link_hash_entry* undefs_tail; } ;
struct TYPE_24__ {void* make_executable; } ;
struct TYPE_23__ {TYPE_10__* head; } ;
struct TYPE_22__ {TYPE_5__* hash; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_18__ VAR_3 ;
 TYPE_17__ VAR_4 ;
 int VAR_5 ;



 int FUNC_1 (TYPE_11__*) ;



 TYPE_15__ VAR_6 ;
 int FUNC_2 (TYPE_13__*,TYPE_11__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5 (lang_statement_union_type *VAR_7, bfd_boolean VAR_8)
{
  for (; VAR_7 != ((void*)0); VAR_7 = VAR_7->header.next)
    {
      switch (VAR_7->header.type)
 {
 case 133:
   FUNC_5 (VAR_4.head, VAR_8);
   break;
 case 130:
   FUNC_5 (VAR_7->output_section_statement.children.head, VAR_8);
   break;
 case 128:

   if (VAR_7->wild_statement.filename
       && ! FUNC_4 (VAR_7->wild_statement.filename))
     FUNC_3 (VAR_7->wild_statement.filename);
   FUNC_5 (VAR_7->wild_statement.children.head, VAR_8);
   break;
 case 132:
   {
     struct bfd_link_hash_entry *VAR_9;





     do
       {
  VAR_9 = VAR_6.hash->undefs_tail;
  FUNC_5 (VAR_7->group_statement.children.head, VAR_1);
       }
     while (VAR_9 != VAR_6.hash->undefs_tail);
   }
   break;
 case 129:
   VAR_5 = VAR_7->target_statement.target;
   break;
 case 131:
   if (VAR_7->input_statement.real)
     {
       lang_statement_list_type VAR_10;

       VAR_7->input_statement.target = VAR_5;





       if (VAR_8
    && !VAR_7->input_statement.whole_archive
    && VAR_7->input_statement.loaded
    && FUNC_0 (VAR_7->input_statement.the_bfd,
           VAR_2))
  VAR_7->input_statement.loaded = VAR_0;

       FUNC_1 (&VAR_10);

       if (! FUNC_2 (&VAR_7->input_statement, &VAR_10))
  VAR_3.make_executable = VAR_0;

       if (VAR_10.head != ((void*)0))
  {
    *VAR_10.tail = VAR_7->header.next;
    VAR_7->header.next = VAR_10.head;
  }
     }
   break;
 default:
   break;
 }
    }
}

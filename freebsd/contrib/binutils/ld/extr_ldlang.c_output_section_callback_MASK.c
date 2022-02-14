
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct wildcard_list {int dummy; } ;
struct TYPE_13__ {TYPE_3__* head; } ;
struct TYPE_11__ {TYPE_4__ children; } ;
typedef TYPE_2__ lang_wild_statement_type ;
struct TYPE_10__ {TYPE_3__* next; } ;
struct TYPE_12__ {TYPE_1__ header; } ;
typedef TYPE_3__ lang_statement_union_type ;
typedef TYPE_4__ lang_statement_list_type ;
typedef int lang_output_section_statement_type ;
typedef int lang_input_statement_type ;
typedef int asection ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int *,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,struct wildcard_list*,int *,int *) ;

__attribute__((used)) static void
FUNC_5 (lang_wild_statement_type *VAR_0,
    struct wildcard_list *VAR_1,
    asection *VAR_2,
    lang_input_statement_type *VAR_3,
    void *VAR_4)
{
  lang_statement_union_type *VAR_5;


  if (FUNC_3 (VAR_2))
    return;

  VAR_5 = FUNC_4 (VAR_0, VAR_1, VAR_3, VAR_2);






  if (VAR_5 == ((void*)0))
    FUNC_1 (&VAR_0->children, VAR_2,
        (lang_output_section_statement_type *) VAR_4);
  else
    {
      lang_statement_list_type VAR_6;
      lang_statement_union_type **VAR_7;

      FUNC_2 (&VAR_6);
      FUNC_1 (&VAR_6, VAR_2,
   (lang_output_section_statement_type *) VAR_4);



      if (VAR_6.head != ((void*)0))
 {
   FUNC_0 (VAR_6.head->header.next == ((void*)0));

   for (VAR_7 = &VAR_0->children.head;
        *VAR_7 != VAR_5;
        VAR_7 = &(*VAR_7)->header.next)
     FUNC_0 (*VAR_7 != ((void*)0));

   VAR_6.head->header.next = *VAR_7;
   *VAR_7 = VAR_6.head;
 }
    }
}

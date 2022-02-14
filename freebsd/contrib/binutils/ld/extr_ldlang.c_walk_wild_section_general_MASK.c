
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_22__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_24__ {int * name; } ;
struct wildcard_list {struct wildcard_list* next; TYPE_1__ spec; } ;
struct TYPE_26__ {struct wildcard_list* section_list; } ;
typedef TYPE_2__ lang_wild_statement_type ;
struct TYPE_27__ {TYPE_22__* the_bfd; } ;
typedef TYPE_3__ lang_input_statement_type ;
typedef int (* callback_t ) (TYPE_2__*,struct wildcard_list*,TYPE_5__*,TYPE_3__*,void*) ;
typedef int bfd_boolean ;
struct TYPE_28__ {struct TYPE_28__* next; } ;
typedef TYPE_5__ asection ;
struct TYPE_25__ {TYPE_5__* sections; } ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_22__*,TYPE_5__*) ;
 scalar_t__ FUNC_1 (int *,char const*,int ) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 int FUNC_3 (TYPE_2__*,struct wildcard_list*,TYPE_5__*,TYPE_3__*,void*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,TYPE_5__*,struct wildcard_list*,int (*) (TYPE_2__*,struct wildcard_list*,TYPE_5__*,TYPE_3__*,void*),void*) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6 (lang_wild_statement_type *VAR_1,
      lang_input_statement_type *VAR_2,
      callback_t VAR_3,
      void *VAR_4)
{
  asection *VAR_5;
  struct wildcard_list *VAR_6;

  for (VAR_5 = VAR_2->the_bfd->sections; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    {
      VAR_6 = VAR_1->section_list;
      if (VAR_6 == ((void*)0))
 (*VAR_3) (VAR_1, VAR_6, VAR_5, VAR_2, VAR_4);

      while (VAR_6 != ((void*)0))
 {
   bfd_boolean VAR_7 = VAR_0;

   if (VAR_6->spec.name != ((void*)0))
     {
       const char *VAR_8 = FUNC_0 (VAR_2->the_bfd, VAR_5);

       if (FUNC_5 (VAR_6->spec.name))
  VAR_7 = FUNC_1 (VAR_6->spec.name, VAR_8, 0) != 0;
       else
  VAR_7 = FUNC_2 (VAR_6->spec.name, VAR_8) != 0;
     }

   if (!VAR_7)
     FUNC_4 (VAR_1, VAR_2, VAR_5, VAR_6, VAR_3, VAR_4);

   VAR_6 = VAR_6->next;
 }
    }
}

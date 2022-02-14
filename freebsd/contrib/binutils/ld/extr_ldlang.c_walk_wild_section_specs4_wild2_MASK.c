
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


struct TYPE_17__ {int name; } ;
struct wildcard_list {TYPE_1__ spec; } ;
struct TYPE_18__ {struct wildcard_list** handler_data; } ;
typedef TYPE_2__ lang_wild_statement_type ;
struct TYPE_19__ {TYPE_14__* the_bfd; } ;
typedef TYPE_3__ lang_input_statement_type ;
typedef int callback_t ;
typedef int bfd_boolean ;
struct TYPE_20__ {struct TYPE_20__* next; } ;
typedef TYPE_4__ asection ;
struct TYPE_16__ {TYPE_4__* sections; } ;


 char* FUNC_0 (TYPE_14__*,TYPE_4__*) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,struct wildcard_list*,int*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,TYPE_4__*,struct wildcard_list*,int ,void*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int ,void*) ;

__attribute__((used)) static void
FUNC_5 (lang_wild_statement_type *VAR_0,
    lang_input_statement_type *VAR_1,
    callback_t VAR_2,
    void *VAR_3)
{
  asection *VAR_4;
  struct wildcard_list *VAR_5 = VAR_0->handler_data[0];
  struct wildcard_list *VAR_6 = VAR_0->handler_data[1];
  struct wildcard_list *VAR_7 = VAR_0->handler_data[2];
  struct wildcard_list *VAR_8 = VAR_0->handler_data[3];
  bfd_boolean VAR_9;
  asection *VAR_10 = FUNC_1 (VAR_1, VAR_5, &VAR_9), *VAR_11;

  if (VAR_9)
    {
      FUNC_4 (VAR_0, VAR_1, VAR_2, VAR_3);
      return;
    }

  VAR_11 = FUNC_1 (VAR_1, VAR_6, &VAR_9);
  if (VAR_9)
    {
      FUNC_4 (VAR_0, VAR_1, VAR_2, VAR_3);
      return;
    }

  for (VAR_4 = VAR_1->the_bfd->sections; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
    {
      if (VAR_4 == VAR_10)
 FUNC_3 (VAR_0, VAR_1, VAR_4, VAR_5, VAR_2, VAR_3);
      else
 if (VAR_4 == VAR_11)
   FUNC_3 (VAR_0, VAR_1, VAR_4, VAR_6, VAR_2, VAR_3);
 else
   {
     const char *VAR_12 = FUNC_0 (VAR_1->the_bfd, VAR_4);
     bfd_boolean VAR_13 = !FUNC_2 (VAR_7->spec.name,
         VAR_12);

     if (!VAR_13)
       FUNC_3 (VAR_0, VAR_1, VAR_4, VAR_7, VAR_2,
       VAR_3);
     else
       {
  VAR_13 = !FUNC_2 (VAR_8->spec.name, VAR_12);
  if (!VAR_13)
    FUNC_3 (VAR_0, VAR_1, VAR_4, VAR_8,
           VAR_2, VAR_3);
       }
   }
    }
}

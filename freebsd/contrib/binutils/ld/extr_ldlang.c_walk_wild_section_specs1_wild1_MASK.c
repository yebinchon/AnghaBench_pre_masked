
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_13__ {int name; } ;
struct wildcard_list {TYPE_1__ spec; } ;
struct TYPE_14__ {struct wildcard_list** handler_data; } ;
typedef TYPE_2__ lang_wild_statement_type ;
struct TYPE_15__ {TYPE_10__* the_bfd; } ;
typedef TYPE_3__ lang_input_statement_type ;
typedef int callback_t ;
typedef int bfd_boolean ;
struct TYPE_16__ {struct TYPE_16__* next; } ;
typedef TYPE_4__ asection ;
struct TYPE_12__ {TYPE_4__* sections; } ;


 char* FUNC_0 (TYPE_10__*,TYPE_4__*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,TYPE_4__*,struct wildcard_list*,int ,void*) ;

__attribute__((used)) static void
FUNC_3 (lang_wild_statement_type *VAR_0,
    lang_input_statement_type *VAR_1,
    callback_t VAR_2,
    void *VAR_3)
{
  asection *VAR_4;
  struct wildcard_list *VAR_5 = VAR_0->handler_data[0];

  for (VAR_4 = VAR_1->the_bfd->sections; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
    {
      const char *VAR_6 = FUNC_0 (VAR_1->the_bfd, VAR_4);
      bfd_boolean VAR_7 = !FUNC_1 (VAR_5->spec.name, VAR_6);

      if (!VAR_7)
 FUNC_2 (VAR_0, VAR_1, VAR_4, VAR_5, VAR_2, VAR_3);
    }
}

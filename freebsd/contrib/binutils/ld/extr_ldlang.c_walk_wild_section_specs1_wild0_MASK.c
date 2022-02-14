
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct wildcard_list {int dummy; } ;
struct TYPE_5__ {struct wildcard_list** handler_data; } ;
typedef TYPE_1__ lang_wild_statement_type ;
typedef int lang_input_statement_type ;
typedef int callback_t ;
typedef scalar_t__ bfd_boolean ;
typedef int asection ;


 int * FUNC_0 (int *,struct wildcard_list*,scalar_t__*) ;
 int FUNC_1 (TYPE_1__*,int *,int *,struct wildcard_list*,int ,void*) ;
 int FUNC_2 (TYPE_1__*,int *,int ,void*) ;

__attribute__((used)) static void
FUNC_3 (lang_wild_statement_type *VAR_0,
    lang_input_statement_type *VAR_1,
    callback_t VAR_2,
    void *VAR_3)
{





  bfd_boolean VAR_4;
  struct wildcard_list *VAR_5 = VAR_0->handler_data[0];
  asection *VAR_6 = FUNC_0 (VAR_1, VAR_5, &VAR_4);

  if (VAR_4)
    FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3);
  else if (VAR_6)
    FUNC_1 (VAR_0, VAR_1, VAR_6, VAR_5, VAR_2, VAR_3);
}

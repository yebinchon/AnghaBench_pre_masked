
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* local_sym_name; int real; scalar_t__ loaded; scalar_t__ next_real_file; } ;
typedef TYPE_1__ lang_input_statement_type ;
struct TYPE_7__ {scalar_t__ head; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_1 (char const*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static lang_input_statement_type *
FUNC_3 (const char *VAR_4)
{
  lang_input_statement_type *VAR_5;

  for (VAR_5 = (lang_input_statement_type *) VAR_2.head;
       VAR_5 != ((void*)0);
       VAR_5 = (lang_input_statement_type *) VAR_5->next_real_file)
    {



      const char *VAR_6 = VAR_5->local_sym_name;

      if (VAR_6 != ((void*)0)
   && FUNC_2 (VAR_6, VAR_4) == 0)
 break;
    }

  if (VAR_5 == ((void*)0))
    VAR_5 = FUNC_1 (VAR_4, VAR_3,
   VAR_1, VAR_0);



  if (VAR_5->loaded || !VAR_5->real)
    return VAR_5;

  if (! FUNC_0 (VAR_5, ((void*)0)))
    return ((void*)0);

  return VAR_5;
}

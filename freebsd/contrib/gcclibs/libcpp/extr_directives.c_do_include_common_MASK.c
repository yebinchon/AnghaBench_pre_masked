
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef enum include_type { ____Placeholder_include_type } include_type ;
typedef int cpp_token ;
struct TYPE_15__ {int (* include ) (TYPE_5__*,int ,int ,char const*,int,int const**) ;} ;
struct TYPE_13__ {int save_comments; } ;
struct TYPE_17__ {TYPE_4__* directive; int directive_line; TYPE_3__ cb; TYPE_2__* line_table; TYPE_1__ state; } ;
typedef TYPE_5__ cpp_reader ;
struct TYPE_16__ {int name; } ;
struct TYPE_14__ {scalar_t__ depth; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_5__*,char const*,int,int) ;
 int FUNC_3 (TYPE_5__*,int ,char*,...) ;
 int VAR_2 ;
 char* FUNC_4 (TYPE_5__*,int*,int const***) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,int ,int ,char const*,int,int const**) ;

__attribute__((used)) static void
FUNC_7 (cpp_reader *VAR_3, enum include_type VAR_4)
{
  const char *VAR_5;
  int VAR_6;
  const cpp_token **VAR_7 = ((void*)0);



  VAR_3->state.save_comments = ! FUNC_0 (VAR_3, VAR_2);

  VAR_5 = FUNC_4 (VAR_3, &VAR_6, &VAR_7);
  if (!VAR_5)
    {
      if (VAR_7)
 FUNC_1 (VAR_7);
      return;
    }

  if (!*VAR_5)
  {
    FUNC_3 (VAR_3, VAR_0, "empty filename in #%s",
               VAR_3->directive->name);
    FUNC_1 (VAR_5);
    if (VAR_7)
      FUNC_1 (VAR_7);
    return;
  }


  if (VAR_3->line_table->depth >= VAR_1)
    FUNC_3 (VAR_3, VAR_0, "#include nested too deeply");
  else
    {

      FUNC_5 (VAR_3);

      if (VAR_3->cb.include)
 VAR_3->cb.include (VAR_3, VAR_3->directive_line,
      VAR_3->directive->name, VAR_5, VAR_6,
      VAR_7);

      FUNC_2 (VAR_3, VAR_5, VAR_6, VAR_4);
    }

  FUNC_1 (VAR_5);
  if (VAR_7)
    FUNC_1 (VAR_7);
}

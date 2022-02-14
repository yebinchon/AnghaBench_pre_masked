
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* line_table; int main_file; int no_search_path; scalar_t__ deps; } ;
typedef TYPE_3__ cpp_reader ;
struct TYPE_13__ {int style; } ;
struct TYPE_11__ {int used; TYPE_1__* maps; } ;
struct TYPE_10__ {char* to_file; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,char const*,int *,int,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 TYPE_5__ VAR_1 ;
 int FUNC_4 (scalar_t__,char const*) ;
 scalar_t__ FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 (TYPE_3__*) ;

const char *
FUNC_7 (cpp_reader *VAR_3, const char *VAR_4)
{
  if (FUNC_0 (VAR_3, VAR_1.style) != VAR_0)
    {
      if (!VAR_3->deps)
 VAR_3->deps = FUNC_5 ();


      FUNC_4 (VAR_3->deps, VAR_4);
    }

  VAR_3->main_file
    = FUNC_2 (VAR_3, VAR_4, &VAR_3->no_search_path, 0, 0);
  if (FUNC_1 (VAR_3->main_file))
    return ((void*)0);

  FUNC_3 (VAR_3, VAR_3->main_file, 0);



  if (FUNC_0 (VAR_3, VAR_2))
    {
      FUNC_6 (VAR_3);
      VAR_4 = VAR_3->line_table->maps[VAR_3->line_table->used-1].to_file;
    }
  return VAR_4;
}

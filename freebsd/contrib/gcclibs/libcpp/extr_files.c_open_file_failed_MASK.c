
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int deps; TYPE_1__* buffer; TYPE_2__* line_table; } ;
typedef TYPE_3__ cpp_reader ;
struct TYPE_13__ {scalar_t__ err_no; int path; int name; } ;
typedef TYPE_4__ _cpp_file ;
struct TYPE_14__ {int style; int missing_files; } ;
struct TYPE_11__ {int highest_line; } ;
struct TYPE_10__ {int sysp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 TYPE_7__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_3 (cpp_reader *VAR_5, _cpp_file *VAR_6, int VAR_7)
{
  int VAR_8 = VAR_5->line_table->highest_line > 1 && VAR_5->buffer ? VAR_5->buffer->sysp : 0;
  bool VAR_9 = FUNC_0 (VAR_5, VAR_3.style) > (VAR_7 || !!VAR_8);

  VAR_4 = VAR_6->err_no;
  if (VAR_9 && FUNC_0 (VAR_5, VAR_3.missing_files) && VAR_4 == VAR_2)
    FUNC_2 (VAR_5->deps, VAR_6->name);
  else
    {


      if (FUNC_0 (VAR_5, VAR_3.style) && ! VAR_9)
 FUNC_1 (VAR_5, VAR_1, VAR_6->path);
      else
 FUNC_1 (VAR_5, VAR_0, VAR_6->path);
    }
}

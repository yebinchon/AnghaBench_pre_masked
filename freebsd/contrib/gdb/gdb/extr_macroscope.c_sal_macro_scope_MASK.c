
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab_and_line {int line; TYPE_1__* symtab; } ;
struct macro_source_file {int dummy; } ;
struct macro_scope {int line; struct macro_source_file* file; } ;
struct TYPE_2__ {int filename; int macro_table; } ;


 int FUNC_0 (int *,char*,int ) ;
 struct macro_source_file* FUNC_1 (struct macro_source_file*,int ) ;
 struct macro_source_file* FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int) ;

struct macro_scope *
FUNC_4 (struct symtab_and_line VAR_1)
{
  struct macro_source_file *VAR_2, *VAR_3;
  struct macro_scope *VAR_4;

  if (! VAR_1.symtab
      || ! VAR_1.symtab->macro_table)
    return 0;

  VAR_4 = (struct macro_scope *) FUNC_3 (sizeof (*VAR_4));

  VAR_2 = FUNC_2 (VAR_1.symtab->macro_table);
  VAR_3 = FUNC_1 (VAR_2, VAR_1.symtab->filename);

  if (VAR_3)
    {
      VAR_4->file = VAR_3;
      VAR_4->line = VAR_1.line;
    }
  else
    {
      VAR_4->file = VAR_2;
      VAR_4->line = -1;

      FUNC_0 (&VAR_0,
                 "symtab found for `%s', but that file\n"
                 "is not covered in the compilation unit's macro information",
                 VAR_1.symtab->filename);
    }

  return VAR_4;
}

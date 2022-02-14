
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coff_symfile_info {scalar_t__ min_lineno_offset; scalar_t__ max_lineno_offset; } ;
struct bfd_section {int lineno_count; scalar_t__ line_filepos; int name; } ;
struct bfd {int dummy; } ;
typedef scalar_t__ file_ptr ;
struct TYPE_2__ {int local_linesz; } ;


 int FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (struct bfd*) ;

__attribute__((used)) static void
FUNC_2 (struct bfd *VAR_0, struct bfd_section *VAR_1, void *VAR_2)
{
  struct coff_symfile_info *VAR_3;
  int VAR_4, VAR_5;
  file_ptr VAR_6, VAR_7;

  VAR_5 = VAR_1->lineno_count;

  if (!FUNC_0 (VAR_1->name, ".text") || VAR_5 == 0)
    return;

  VAR_4 = VAR_5 * FUNC_1 (VAR_0)->local_linesz;
  VAR_3 = (struct coff_symfile_info *) VAR_2;
  VAR_6 = VAR_1->line_filepos;
  VAR_7 = VAR_6 + VAR_4;

  if (VAR_6 < VAR_3->min_lineno_offset || VAR_3->min_lineno_offset == 0)
    VAR_3->min_lineno_offset = VAR_6;

  if (VAR_7 > VAR_3->max_lineno_offset)
    VAR_3->max_lineno_offset = VAR_7;
}

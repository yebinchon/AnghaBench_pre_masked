
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_symfile_info {scalar_t__ min_lineno_offset; scalar_t__ max_lineno_offset; } ;
struct bfd_section {int lineno_count; scalar_t__ line_filepos; } ;
typedef scalar_t__ file_ptr ;
typedef int bfd ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0 (bfd *VAR_1, struct bfd_section *VAR_2, void *VAR_3)
{
  struct coff_symfile_info *VAR_4;
  int VAR_5, VAR_6;
  file_ptr VAR_7, VAR_8;


  VAR_6 = VAR_2->lineno_count;


  if (VAR_6 == 0)
    return;
  VAR_5 = VAR_6 * VAR_0;

  VAR_4 = (struct coff_symfile_info *) VAR_3;

  VAR_7 = VAR_2->line_filepos;


  if (VAR_7 < VAR_4->min_lineno_offset || VAR_4->min_lineno_offset == 0)
    VAR_4->min_lineno_offset = VAR_7;

  VAR_8 = VAR_7 + VAR_5;
  if (VAR_8 > VAR_4->max_lineno_offset)
    VAR_4->max_lineno_offset = VAR_8;
}

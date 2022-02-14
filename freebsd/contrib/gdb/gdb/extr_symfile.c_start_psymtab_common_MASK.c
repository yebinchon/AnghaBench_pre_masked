
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct section_offsets {int dummy; } ;
struct partial_symtab {struct partial_symbol** statics_offset; struct partial_symbol** globals_offset; int textlow; int texthigh; struct section_offsets* section_offsets; } ;
struct partial_symbol {int dummy; } ;
struct TYPE_4__ {int list; } ;
struct TYPE_3__ {int list; } ;
struct objfile {TYPE_2__ static_psymbols; TYPE_1__ global_psymbols; } ;
typedef int CORE_ADDR ;


 struct partial_symtab* FUNC_0 (char*,struct objfile*) ;

struct partial_symtab *
FUNC_1 (struct objfile *VAR_0,
        struct section_offsets *VAR_1, char *VAR_2,
        CORE_ADDR VAR_3, struct partial_symbol **VAR_4,
        struct partial_symbol **VAR_5)
{
  struct partial_symtab *VAR_6;

  VAR_6 = FUNC_0 (VAR_2, VAR_0);
  VAR_6->section_offsets = VAR_1;
  VAR_6->textlow = VAR_3;
  VAR_6->texthigh = VAR_6->textlow;
  VAR_6->globals_offset = VAR_4 - VAR_0->global_psymbols.list;
  VAR_6->statics_offset = VAR_5 - VAR_0->static_psymbols.list;
  return (VAR_6);
}

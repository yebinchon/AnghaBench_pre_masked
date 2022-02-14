
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_scope {int line; int file; } ;
struct macro_definition {int dummy; } ;


 struct macro_definition* FUNC_0 (int ,int ,char const*) ;

struct macro_definition *
FUNC_1 (const char *VAR_0, void *VAR_1)
{
  struct macro_scope *VAR_2 = (struct macro_scope *) VAR_1;

  return FUNC_0 (VAR_2->file, VAR_2->line, VAR_0);
}

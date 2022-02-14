
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab_and_line {int line; TYPE_1__* symtab; } ;
struct TYPE_2__ {char* filename; } ;


 int FUNC_0 (char*,char*,char const*,char const*,int) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static char *
FUNC_3 (struct symtab_and_line VAR_0, const char *VAR_1)
{
  char *VAR_2;

  if (VAR_0.symtab == ((void*)0) || VAR_0.symtab->filename == ((void*)0) || VAR_0.line <= 0)
    return ((void*)0);

  VAR_2 = (char *) FUNC_2 (FUNC_1 (VAR_1) + FUNC_1 (VAR_0.symtab->filename)
   + sizeof (VAR_0.line) * 3 + 3);
  FUNC_0 (VAR_2, "%s:'%s':%d", VAR_0.symtab->filename, VAR_1, VAR_0.line);
  return VAR_2;
}

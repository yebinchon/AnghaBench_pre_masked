
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_constant {char* name; char* value; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_1 (void **VAR_0, void *VAR_1)
{
  struct md_constant *VAR_2 = (struct md_constant *) *VAR_0;
  FILE *VAR_3 = (FILE *) VAR_1;

  FUNC_0 (VAR_3, "#define %s %s\n", VAR_2->name, VAR_2->value);
  return 1;
}

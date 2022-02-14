
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_loc {int lineno; char* filename; } ;


 struct ptr_loc* FUNC_0 (void const*) ;
 int FUNC_1 (char*,int,char*) ;

void
FUNC_2 (const void *VAR_0)
{
  const struct ptr_loc *VAR_1 = FUNC_0 (VAR_0);
  if (VAR_1 != 0)
    FUNC_1 ("#line %d \"%s\"\n", VAR_1->lineno, VAR_1->filename);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_loc {int lineno; int filename; } ;


 struct ptr_loc* FUNC_0 (void const*) ;
 int FUNC_1 (void const*,int ,int ) ;

void
FUNC_2 (const void *VAR_0, const void *VAR_1)
{
  const struct ptr_loc *VAR_2 = FUNC_0 (VAR_1);
  if (VAR_2 != 0)
    FUNC_1 (VAR_0, VAR_2->filename, VAR_2->lineno);
}

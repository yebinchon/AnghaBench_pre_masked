
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symbol {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct symbol*) ;
 struct type* FUNC_1 (struct symbol*) ;
 int VAR_2 ;
 struct symbol* FUNC_2 (char const*,int ) ;

struct type *
FUNC_3 (const char *VAR_3)
{
  struct symbol *VAR_4;

  VAR_4 = FUNC_2 (VAR_3, VAR_2);
  if (VAR_4 != ((void*)0) && FUNC_0 (VAR_4) == VAR_0)
    return FUNC_1 (VAR_4);

  VAR_4 = FUNC_2 (VAR_3, VAR_1);
  if (VAR_4 != ((void*)0))
    return FUNC_1 (VAR_4);

  return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct block {int dummy; } ;
struct TYPE_2__ {char const* scope; } ;


 TYPE_1__* FUNC_0 (struct block const*) ;
 struct block* FUNC_1 (struct block const*) ;

const char *
FUNC_2 (const struct block *VAR_0)
{
  for (; VAR_0 != ((void*)0); VAR_0 = FUNC_1 (VAR_0))
    {
      if (FUNC_0 (VAR_0) != ((void*)0)
   && FUNC_0 (VAR_0)->scope != ((void*)0))
 return FUNC_0 (VAR_0)->scope;
    }

  return "";
}

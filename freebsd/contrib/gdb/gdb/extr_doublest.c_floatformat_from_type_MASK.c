
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct floatformat {int dummy; } ;


 scalar_t__ FUNC_0 (struct type const*) ;
 scalar_t__ VAR_0 ;
 struct floatformat const* FUNC_1 (struct type const*) ;
 int FUNC_2 (struct type const*) ;
 struct floatformat const* FUNC_3 (int ) ;
 int FUNC_4 (int) ;

const struct floatformat *
FUNC_5 (const struct type *VAR_1)
{
  FUNC_4 (FUNC_0 (VAR_1) == VAR_0);
  if (FUNC_1 (VAR_1) != ((void*)0))
    return FUNC_1 (VAR_1);
  else
    return FUNC_3 (FUNC_2 (VAR_1));
}

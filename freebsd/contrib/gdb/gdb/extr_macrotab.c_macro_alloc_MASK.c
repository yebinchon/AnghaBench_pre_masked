
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_table {scalar_t__ obstack; } ;


 void* FUNC_0 (scalar_t__,int) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void *
FUNC_2 (int VAR_0, struct macro_table *VAR_1)
{
  if (VAR_1->obstack)
    return FUNC_0 (VAR_1->obstack, VAR_0);
  else
    return FUNC_1 (VAR_0);
}

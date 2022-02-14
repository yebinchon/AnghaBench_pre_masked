
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ieee_symbol_type ;
struct TYPE_4__ {int symcount; } ;
typedef TYPE_1__ bfd ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static long
FUNC_1 (bfd *VAR_0)
{
  if (! FUNC_0 (VAR_0))
    return -1;

  return (VAR_0->symcount != 0) ?
    (VAR_0->symcount + 1) * (sizeof (ieee_symbol_type *)) : 0;
}

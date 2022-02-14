
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct core_fns {scalar_t__ core_flavour; } ;
typedef int bfd ;


 scalar_t__ FUNC_0 (int *) ;

int
FUNC_1 (struct core_fns *VAR_0, bfd *VAR_1)
{
  int VAR_2;

  VAR_2 = (FUNC_0 (VAR_1) == VAR_0 -> core_flavour);
  return (VAR_2);
}

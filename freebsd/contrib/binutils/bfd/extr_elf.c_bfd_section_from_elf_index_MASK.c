
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd ;
typedef int asection ;
struct TYPE_2__ {int * bfd_section; } ;


 TYPE_1__** FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *) ;

asection *
FUNC_2 (bfd *VAR_0, unsigned int VAR_1)
{
  if (VAR_1 >= FUNC_1 (VAR_0))
    return ((void*)0);
  return FUNC_0 (VAR_0)[VAR_1]->bfd_section;
}

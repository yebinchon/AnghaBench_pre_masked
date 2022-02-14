
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct objalloc {int dummy; } ;
struct TYPE_4__ {scalar_t__ memory; int section_htab; } ;
typedef TYPE_1__ bfd ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct objalloc*) ;

void
FUNC_3 (bfd *VAR_0)
{
  if (VAR_0->memory)
    {
      FUNC_0 (&VAR_0->section_htab);
      FUNC_2 ((struct objalloc *) VAR_0->memory);
    }
  FUNC_1 (VAR_0);
}

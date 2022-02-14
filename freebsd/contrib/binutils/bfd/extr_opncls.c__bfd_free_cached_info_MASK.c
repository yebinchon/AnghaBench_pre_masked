
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct objalloc {int dummy; } ;
typedef int bfd_boolean ;
struct TYPE_4__ {int * any; } ;
struct TYPE_5__ {int * memory; int * usrdata; TYPE_1__ tdata; int * outsymbols; int * section_last; int * sections; int section_htab; } ;
typedef TYPE_2__ bfd ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct objalloc*) ;

bfd_boolean
FUNC_2 (bfd *VAR_1)
{
  if (VAR_1->memory)
    {
      FUNC_0 (&VAR_1->section_htab);
      FUNC_1 ((struct objalloc *) VAR_1->memory);

      VAR_1->sections = ((void*)0);
      VAR_1->section_last = ((void*)0);
      VAR_1->outsymbols = ((void*)0);
      VAR_1->tdata.any = ((void*)0);
      VAR_1->usrdata = ((void*)0);
      VAR_1->memory = ((void*)0);
    }

  return VAR_0;
}

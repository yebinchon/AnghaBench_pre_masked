
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfd_preserve {int * marker; int section_count; int section_last; int sections; int section_htab; int flags; int arch_info; int tdata; } ;
struct TYPE_5__ {int any; } ;
struct TYPE_6__ {int section_count; int section_last; int sections; int section_htab; int flags; int arch_info; TYPE_1__ tdata; } ;
typedef TYPE_2__ bfd ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;

void
FUNC_2 (bfd *VAR_0, struct bfd_preserve *VAR_1)
{
  FUNC_0 (&VAR_0->section_htab);

  VAR_0->tdata.any = VAR_1->tdata;
  VAR_0->arch_info = VAR_1->arch_info;
  VAR_0->flags = VAR_1->flags;
  VAR_0->section_htab = VAR_1->section_htab;
  VAR_0->sections = VAR_1->sections;
  VAR_0->section_last = VAR_1->section_last;
  VAR_0->section_count = VAR_1->section_count;



  if (VAR_1->marker != ((void*)0))
    {
      FUNC_1 (VAR_0, VAR_1->marker);
      VAR_1->marker = ((void*)0);
    }
}

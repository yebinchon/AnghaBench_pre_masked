
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct section_hash_entry {int dummy; } ;
struct bfd_preserve {int section_htab; scalar_t__ section_count; int * section_last; int * sections; int flags; int * arch_info; int * tdata; } ;
typedef int bfd_boolean ;
struct TYPE_4__ {int * any; } ;
struct TYPE_5__ {scalar_t__ section_count; int * section_last; int * sections; int flags; int * arch_info; TYPE_1__ tdata; int section_htab; } ;
typedef TYPE_2__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int VAR_4 ;

bfd_boolean
FUNC_1 (bfd *VAR_5, struct bfd_preserve *VAR_6)
{
  VAR_6->tdata = VAR_5->tdata.any;
  VAR_6->arch_info = VAR_5->arch_info;
  VAR_6->flags = VAR_5->flags;
  VAR_6->sections = VAR_5->sections;
  VAR_6->section_last = VAR_5->section_last;
  VAR_6->section_count = VAR_5->section_count;
  VAR_6->section_htab = VAR_5->section_htab;

  if (! FUNC_0 (&VAR_5->section_htab, VAR_4,
        sizeof (struct section_hash_entry)))
    return VAR_1;

  VAR_5->tdata.any = ((void*)0);
  VAR_5->arch_info = &VAR_3;
  VAR_5->flags &= VAR_0;
  VAR_5->sections = ((void*)0);
  VAR_5->section_last = ((void*)0);
  VAR_5->section_count = 0;

  return VAR_2;
}

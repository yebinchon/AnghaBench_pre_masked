
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* bfd_boolean ;
struct TYPE_10__ {scalar_t__ any; } ;
struct TYPE_11__ {scalar_t__ direction; int flags; TYPE_1__ tdata; scalar_t__ outsymbols; scalar_t__ symcount; scalar_t__ sections; void* target_defaulted; void* mtime_set; void* cacheable; int * usrdata; scalar_t__ section_count; void* output_has_begun; void* opened_once; scalar_t__ origin; int * my_archive; int format; scalar_t__ where; int * arch_info; } ;
typedef TYPE_2__ bfd ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,TYPE_2__*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

bfd_boolean
FUNC_5 (bfd *VAR_11)
{
  if (VAR_11->direction != VAR_10 || !(VAR_11->flags & VAR_0))
    {
      FUNC_4 (VAR_6);
      return VAR_1;
    }

  if (! FUNC_1 (VAR_11, VAR_3, (VAR_11)))
    return VAR_1;

  if (! FUNC_0 (VAR_11, VAR_4, (VAR_11)))
    return VAR_1;


  VAR_11->arch_info = &VAR_5;

  VAR_11->where = 0;
  VAR_11->format = VAR_8;
  VAR_11->my_archive = ((void*)0);
  VAR_11->origin = 0;
  VAR_11->opened_once = VAR_1;
  VAR_11->output_has_begun = VAR_1;
  VAR_11->section_count = 0;
  VAR_11->usrdata = ((void*)0);
  VAR_11->cacheable = VAR_1;
  VAR_11->flags = VAR_0;
  VAR_11->mtime_set = VAR_1;

  VAR_11->target_defaulted = VAR_2;
  VAR_11->direction = VAR_9;
  VAR_11->sections = 0;
  VAR_11->symcount = 0;
  VAR_11->outsymbols = 0;
  VAR_11->tdata.any = 0;

  FUNC_3 (VAR_11);
  FUNC_2 (VAR_11, VAR_7);

  return VAR_2;
}

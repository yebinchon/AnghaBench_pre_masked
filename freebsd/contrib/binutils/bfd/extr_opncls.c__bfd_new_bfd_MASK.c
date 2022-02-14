
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct section_hash_entry {int dummy; } ;
struct TYPE_5__ {void* mtime_set; int flags; void* cacheable; int * usrdata; scalar_t__ section_count; void* output_has_begun; void* opened_once; scalar_t__ origin; int * my_archive; int format; int * section_last; int * sections; int section_htab; scalar_t__ where; int * iostream; int direction; int * arch_info; int * memory; scalar_t__ id; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int,int) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_7 ;
 int * FUNC_4 () ;

bfd *
FUNC_5 (void)
{
  bfd *VAR_8;

  VAR_8 = FUNC_2 (sizeof (bfd));
  if (VAR_8 == ((void*)0))
    return ((void*)0);

  VAR_8->id = VAR_2++;

  VAR_8->memory = FUNC_4 ();
  if (VAR_8->memory == ((void*)0))
    {
      FUNC_1 (VAR_4);
      FUNC_3 (VAR_8);
      return ((void*)0);
    }

  VAR_8->arch_info = &VAR_3;

  VAR_8->direction = VAR_7;
  VAR_8->iostream = ((void*)0);
  VAR_8->where = 0;
  if (!FUNC_0 (& VAR_8->section_htab, VAR_5,
         sizeof (struct section_hash_entry), 251))
    {
      FUNC_3 (VAR_8);
      return ((void*)0);
    }
  VAR_8->sections = ((void*)0);
  VAR_8->section_last = ((void*)0);
  VAR_8->format = VAR_6;
  VAR_8->my_archive = ((void*)0);
  VAR_8->origin = 0;
  VAR_8->opened_once = VAR_1;
  VAR_8->output_has_begun = VAR_1;
  VAR_8->section_count = 0;
  VAR_8->usrdata = ((void*)0);
  VAR_8->cacheable = VAR_1;
  VAR_8->flags = VAR_0;
  VAR_8->mtime_set = VAR_1;

  return VAR_8;
}

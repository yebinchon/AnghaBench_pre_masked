
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sec_merge_sec_info {void** psecinfo; int contents; int * first_str; int * htab; TYPE_2__* sec; struct sec_merge_sec_info* next; } ;
struct sec_merge_info {int * htab; struct sec_merge_sec_info* chain; struct sec_merge_info* next; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ bfd ;
struct TYPE_8__ {int flags; unsigned int entsize; unsigned int alignment_power; scalar_t__ output_section; int size; int owner; int rawsize; } ;
typedef TYPE_2__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 void* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,TYPE_2__*,int ,int ,int ) ;
 int * FUNC_3 (unsigned int,int) ;

bfd_boolean
FUNC_4 (bfd *VAR_7, void **VAR_8, asection *VAR_9,
   void **VAR_10)
{
  struct sec_merge_info *VAR_11;
  struct sec_merge_sec_info *VAR_12;
  unsigned int VAR_13;
  bfd_size_type VAR_14;

  if ((VAR_7->flags & VAR_0) != 0
      || (VAR_9->flags & VAR_3) == 0)
    FUNC_0 ();

  if (VAR_9->size == 0
      || (VAR_9->flags & VAR_2) != 0
      || VAR_9->entsize == 0)
    return VAR_6;

  if ((VAR_9->flags & VAR_4) != 0)
    {

      return VAR_6;
    }

  VAR_13 = VAR_9->alignment_power;
  if ((VAR_9->entsize < (unsigned) 1 << VAR_13
       && ((VAR_9->entsize & (VAR_9->entsize - 1))
    || !(VAR_9->flags & VAR_5)))
      || (VAR_9->entsize > (unsigned) 1 << VAR_13
   && (VAR_9->entsize & (((unsigned) 1 << VAR_13) - 1))))
    {






      return VAR_6;
    }

  for (VAR_11 = (struct sec_merge_info *) *VAR_8; VAR_11; VAR_11 = VAR_11->next)
    if ((VAR_12 = VAR_11->chain)
 && ! ((VAR_12->sec->flags ^ VAR_9->flags) & (VAR_3 | VAR_5))
 && VAR_12->sec->entsize == VAR_9->entsize
 && VAR_12->sec->alignment_power == VAR_9->alignment_power
 && VAR_12->sec->output_section == VAR_9->output_section)
      break;

  if (VAR_11 == ((void*)0))
    {

      VAR_11 = FUNC_1 (VAR_7, sizeof (struct sec_merge_info));
      if (VAR_11 == ((void*)0))
 goto error_return;
      VAR_11->next = (struct sec_merge_info *) *VAR_8;
      VAR_11->chain = ((void*)0);
      *VAR_8 = VAR_11;
      VAR_11->htab = FUNC_3 (VAR_9->entsize, (VAR_9->flags & VAR_5));
      if (VAR_11->htab == ((void*)0))
 goto error_return;
    }



  VAR_14 = sizeof (struct sec_merge_sec_info) + VAR_9->size - 1;
  *VAR_10 = FUNC_1 (VAR_7, VAR_14);
  if (*VAR_10 == ((void*)0))
    goto error_return;

  VAR_12 = (struct sec_merge_sec_info *) *VAR_10;
  if (VAR_11->chain)
    {
      VAR_12->next = VAR_11->chain->next;
      VAR_11->chain->next = VAR_12;
    }
  else
    VAR_12->next = VAR_12;
  VAR_11->chain = VAR_12;
  VAR_12->sec = VAR_9;
  VAR_12->psecinfo = VAR_10;
  VAR_12->htab = VAR_11->htab;
  VAR_12->first_str = ((void*)0);

  VAR_9->rawsize = VAR_9->size;
  if (! FUNC_2 (VAR_9->owner, VAR_9, VAR_12->contents,
      0, VAR_9->size))
    goto error_return;

  return VAR_6;

 error_return:
  *VAR_10 = ((void*)0);
  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_7__ {unsigned int vma; unsigned int alignment_power; struct TYPE_7__* next; } ;
typedef TYPE_2__ asection ;
struct TYPE_6__ {scalar_t__ phase; int relro_end; unsigned int min_base; unsigned int maxpagesize; int base; int pagesize; int end; } ;
struct TYPE_10__ {int phase; TYPE_1__ dataseg; } ;
struct TYPE_9__ {int relro_start; unsigned int relro_end; scalar_t__ relro; } ;
struct TYPE_8__ {TYPE_2__* sections; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 TYPE_4__ VAR_7 ;
 int FUNC_1 (int *,int ) ;
 TYPE_3__* VAR_8 ;

void
FUNC_2 (bfd_boolean *VAR_9, bfd_boolean VAR_10)
{
  VAR_4.phase = VAR_5;
  VAR_4.dataseg.phase = VAR_2;

  FUNC_1 (VAR_9, VAR_10);
  if (VAR_4.dataseg.phase == VAR_1
      && VAR_7.relro && VAR_4.dataseg.relro_end)
    {


      bfd_vma VAR_11, VAR_12, VAR_13;

      VAR_4.dataseg.phase = VAR_3;
      VAR_11 = VAR_4.dataseg.min_base;
      VAR_13 = VAR_4.dataseg.maxpagesize;
      VAR_4.dataseg.base += (-VAR_4.dataseg.relro_end
        & (VAR_4.dataseg.pagesize - 1));

      VAR_12 = (VAR_4.dataseg.relro_end + VAR_4.dataseg.pagesize - 1)
    & ~(VAR_4.dataseg.pagesize - 1);
      if (VAR_11 + VAR_13 < VAR_4.dataseg.base)
 {
   VAR_4.dataseg.base -= VAR_13;
   VAR_12 -= VAR_13;
 }
      FUNC_0 ();
      FUNC_1 (VAR_9, VAR_10);
      if (VAR_4.dataseg.relro_end > VAR_12)
 {



   asection *VAR_14;
   unsigned int VAR_15 = 0;



   for (VAR_14 = VAR_8->sections; VAR_14; VAR_14 = VAR_14->next)
     if (VAR_14->vma >= VAR_4.dataseg.base
  && VAR_14->vma < VAR_4.dataseg.relro_end
  && VAR_14->alignment_power > VAR_15)
       VAR_15 = VAR_14->alignment_power;

   if (((bfd_vma) 1 << VAR_15) < VAR_4.dataseg.pagesize)
     {
       if (VAR_4.dataseg.base - (1 << VAR_15)
    < VAR_11)
  VAR_4.dataseg.base += VAR_4.dataseg.pagesize;
       VAR_4.dataseg.base -= (1 << VAR_15);
       FUNC_0 ();
       FUNC_1 (VAR_9, VAR_10);
     }
 }
      VAR_7.relro_start = VAR_4.dataseg.base;
      VAR_7.relro_end = VAR_4.dataseg.relro_end;
    }
  else if (VAR_4.dataseg.phase == VAR_1)
    {


      bfd_vma VAR_16, VAR_17;

      VAR_16 = -VAR_4.dataseg.base & (VAR_4.dataseg.pagesize - 1);
      VAR_17 = VAR_4.dataseg.end & (VAR_4.dataseg.pagesize - 1);
      if (VAR_16 && VAR_17
   && ((VAR_4.dataseg.base & ~(VAR_4.dataseg.pagesize - 1))
       != (VAR_4.dataseg.end & ~(VAR_4.dataseg.pagesize - 1)))
   && VAR_16 + VAR_17 <= VAR_4.dataseg.pagesize)
 {
   VAR_4.dataseg.phase = VAR_0;
   FUNC_0 ();
   FUNC_1 (VAR_9, VAR_10);
 }
    }

  VAR_4.phase = VAR_6;
}

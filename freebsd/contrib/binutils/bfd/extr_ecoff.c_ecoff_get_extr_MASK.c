
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;


struct TYPE_21__ {int ifdMax; } ;
struct ecoff_debug_info {int* ifdmap; TYPE_3__ symbolic_header; } ;
struct TYPE_22__ {int * native; scalar_t__ local; } ;
typedef TYPE_4__ ecoff_symbol_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_23__ {int flags; } ;
typedef TYPE_5__ asymbol ;
struct TYPE_20__ {scalar_t__ sc; int index; scalar_t__ reserved; int st; } ;
struct TYPE_24__ {int weakext; int ifd; TYPE_2__ asym; scalar_t__ reserved; scalar_t__ cobol_main; scalar_t__ jmptbl; } ;
struct TYPE_19__ {int (* swap_ext_in ) (int *,int *,TYPE_6__*) ;} ;
struct TYPE_18__ {TYPE_1__ debug_swap; } ;
struct TYPE_17__ {struct ecoff_debug_info debug_info; } ;
typedef TYPE_6__ EXTR ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_6 ;
 TYPE_13__* FUNC_5 (int *) ;
 TYPE_12__* FUNC_6 (int *) ;
 TYPE_4__* FUNC_7 (TYPE_5__*) ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int *,int *,TYPE_6__*) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (asymbol *VAR_13, EXTR *VAR_14)
{
  ecoff_symbol_type *VAR_15;
  bfd *VAR_16;

  if (FUNC_2 (VAR_13) != VAR_6
      || FUNC_7 (VAR_13)->native == ((void*)0))
    {

      if ((VAR_13->flags & VAR_0) != 0
   || (VAR_13->flags & VAR_1) != 0
   || (VAR_13->flags & VAR_2) != 0)
 return VAR_4;

      VAR_14->jmptbl = 0;
      VAR_14->cobol_main = 0;
      VAR_14->weakext = (VAR_13->flags & VAR_3) != 0;
      VAR_14->reserved = 0;
      VAR_14->ifd = VAR_7;

      VAR_14->asym.st = VAR_12;
      VAR_14->asym.sc = VAR_9;
      VAR_14->asym.reserved = 0;
      VAR_14->asym.index = VAR_8;
      return VAR_5;
    }

  VAR_15 = FUNC_7 (VAR_13);

  if (VAR_15->local)
    return VAR_4;

  VAR_16 = FUNC_1 (VAR_13);
  (*(FUNC_5 (VAR_16)->debug_swap.swap_ext_in))
    (VAR_16, VAR_15->native, VAR_14);




  if ((VAR_14->asym.sc == VAR_11
       || VAR_14->asym.sc == VAR_10)
      && ! FUNC_4 (FUNC_3 (VAR_13)))
    VAR_14->asym.sc = VAR_9;



  if (VAR_14->ifd != -1)
    {
      struct ecoff_debug_info *VAR_17;

      VAR_17 = &FUNC_6 (VAR_16)->debug_info;
      FUNC_0 (VAR_14->ifd < VAR_17->symbolic_header.ifdMax);
      if (VAR_17->ifdmap != ((void*)0))
 VAR_14->ifd = VAR_17->ifdmap[VAR_14->ifd];
    }

  return VAR_5;
}

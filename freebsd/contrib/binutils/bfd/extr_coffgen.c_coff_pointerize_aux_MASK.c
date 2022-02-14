
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


struct TYPE_22__ {scalar_t__ l; TYPE_9__* p; } ;
struct TYPE_19__ {scalar_t__ l; TYPE_9__* p; } ;
struct TYPE_20__ {TYPE_2__ x_endndx; } ;
struct TYPE_21__ {TYPE_3__ x_fcn; } ;
struct TYPE_23__ {TYPE_5__ x_tagndx; TYPE_4__ x_fcnary; } ;
struct TYPE_24__ {TYPE_6__ x_sym; } ;
struct TYPE_18__ {unsigned int n_type; unsigned int n_sclass; } ;
struct TYPE_25__ {TYPE_7__ auxent; TYPE_1__ syment; } ;
struct TYPE_26__ {int fix_end; int fix_tag; TYPE_8__ u; } ;
typedef TYPE_9__ combined_entry_type ;
typedef int bfd ;
struct TYPE_17__ {scalar_t__ (* _bfd_coff_pointerize_aux_hook ) (int *,TYPE_9__*,TYPE_9__*,unsigned int,TYPE_9__*) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int VAR_4 ;
 TYPE_16__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_9__*,TYPE_9__*,unsigned int,TYPE_9__*) ;

__attribute__((used)) static void
FUNC_4 (bfd *VAR_5,
       combined_entry_type *VAR_6,
       combined_entry_type *VAR_7,
       unsigned int VAR_8,
       combined_entry_type *VAR_9)
{
  unsigned int VAR_10 = VAR_7->u.syment.n_type;
  unsigned int VAR_11 = VAR_7->u.syment.n_sclass;

  if (FUNC_2 (VAR_5)->_bfd_coff_pointerize_aux_hook)
    {
      if ((*FUNC_2 (VAR_5)->_bfd_coff_pointerize_aux_hook)
   (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9))
 return;
    }


  if (VAR_11 == VAR_3 && VAR_10 == VAR_4)
    return;
  if (VAR_11 == VAR_2)
    return;





  if ((FUNC_0 (VAR_10) || FUNC_1 (VAR_11) || VAR_11 == VAR_0 || VAR_11 == VAR_1)
      && VAR_9->u.auxent.x_sym.x_fcnary.x_fcn.x_endndx.l > 0)
    {
      VAR_9->u.auxent.x_sym.x_fcnary.x_fcn.x_endndx.p =
 VAR_6 + VAR_9->u.auxent.x_sym.x_fcnary.x_fcn.x_endndx.l;
      VAR_9->fix_end = 1;
    }


  if (VAR_9->u.auxent.x_sym.x_tagndx.l > 0)
    {
      VAR_9->u.auxent.x_sym.x_tagndx.p =
 VAR_6 + VAR_9->u.auxent.x_sym.x_tagndx.l;
      VAR_9->fix_tag = 1;
    }
}

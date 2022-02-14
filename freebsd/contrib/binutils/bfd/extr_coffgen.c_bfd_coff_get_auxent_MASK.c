
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_22__ {scalar_t__ p; TYPE_10__* l; } ;
struct TYPE_23__ {TYPE_8__ x_scnlen; } ;
struct TYPE_18__ {scalar_t__ p; TYPE_10__* l; } ;
struct TYPE_19__ {TYPE_4__ x_endndx; } ;
struct TYPE_20__ {TYPE_5__ x_fcn; } ;
struct TYPE_17__ {scalar_t__ p; TYPE_10__* l; } ;
struct TYPE_21__ {TYPE_6__ x_fcnary; TYPE_3__ x_tagndx; } ;
union internal_auxent {TYPE_9__ x_csect; TYPE_7__ x_sym; } ;
struct TYPE_15__ {int n_numaux; } ;
struct TYPE_16__ {union internal_auxent auxent; TYPE_1__ syment; } ;
struct TYPE_13__ {scalar_t__ fix_scnlen; scalar_t__ fix_end; scalar_t__ fix_tag; TYPE_2__ u; } ;
typedef TYPE_10__ combined_entry_type ;
struct TYPE_14__ {TYPE_10__* native; } ;
typedef TYPE_11__ coff_symbol_type ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_11__* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

bfd_boolean
FUNC_3 (bfd *VAR_3,
       asymbol *VAR_4,
       int VAR_5,
       union internal_auxent *VAR_6)
{
  coff_symbol_type *VAR_7;
  combined_entry_type *VAR_8;

  VAR_7 = FUNC_1 (VAR_3, VAR_4);

  if (VAR_7 == ((void*)0)
      || VAR_7->native == ((void*)0)
      || VAR_5 >= VAR_7->native->u.syment.n_numaux)
    {
      FUNC_0 (VAR_2);
      return VAR_0;
    }

  VAR_8 = VAR_7->native + VAR_5 + 1;

  *VAR_6 = VAR_8->u.auxent;

  if (VAR_8->fix_tag)
    VAR_6->x_sym.x_tagndx.l =
      ((combined_entry_type *) VAR_6->x_sym.x_tagndx.p
       - FUNC_2 (VAR_3));

  if (VAR_8->fix_end)
    VAR_6->x_sym.x_fcnary.x_fcn.x_endndx.l =
      ((combined_entry_type *) VAR_6->x_sym.x_fcnary.x_fcn.x_endndx.p
       - FUNC_2 (VAR_3));

  if (VAR_8->fix_scnlen)
    VAR_6->x_csect.x_scnlen.l =
      ((combined_entry_type *) VAR_6->x_csect.x_scnlen.p
       - FUNC_2 (VAR_3));

  return VAR_1;
}

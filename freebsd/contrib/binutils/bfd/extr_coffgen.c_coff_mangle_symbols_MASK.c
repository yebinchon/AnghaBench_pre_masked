
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_21__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_18__ ;
typedef struct TYPE_33__ TYPE_17__ ;
typedef struct TYPE_32__ TYPE_16__ ;
typedef struct TYPE_31__ TYPE_15__ ;
typedef struct TYPE_30__ TYPE_14__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct TYPE_28__ {TYPE_11__* p; int l; } ;
struct TYPE_29__ {TYPE_12__ x_scnlen; } ;
struct TYPE_42__ {TYPE_6__* p; int l; } ;
struct TYPE_43__ {TYPE_7__ x_endndx; } ;
struct TYPE_44__ {TYPE_8__ x_fcn; } ;
struct TYPE_40__ {TYPE_4__* p; int l; } ;
struct TYPE_26__ {TYPE_9__ x_fcnary; TYPE_5__ x_tagndx; } ;
struct TYPE_30__ {TYPE_13__ x_csect; TYPE_10__ x_sym; } ;
struct TYPE_38__ {int n_value; int n_numaux; } ;
struct TYPE_31__ {TYPE_14__ auxent; TYPE_3__ syment; } ;
struct TYPE_32__ {scalar_t__ fix_scnlen; TYPE_15__ u; scalar_t__ fix_end; scalar_t__ fix_tag; scalar_t__ fix_line; scalar_t__ fix_value; scalar_t__ offset; } ;
typedef TYPE_16__ combined_entry_type ;
struct TYPE_37__ {int flags; TYPE_21__* section; } ;
struct TYPE_33__ {TYPE_2__ symbol; TYPE_16__* native; } ;
typedef TYPE_17__ coff_symbol_type ;
typedef int bfd_vma ;
struct TYPE_34__ {int ** outsymbols; } ;
typedef TYPE_18__ bfd ;
typedef int asymbol ;
struct TYPE_41__ {int offset; } ;
struct TYPE_39__ {int offset; } ;
struct TYPE_36__ {TYPE_1__* output_section; } ;
struct TYPE_35__ {int line_filepos; } ;
struct TYPE_27__ {int offset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_18__*) ;
 unsigned int FUNC_2 (TYPE_18__*) ;
 TYPE_21__* FUNC_3 (TYPE_18__*,int ) ;
 TYPE_17__* FUNC_4 (TYPE_18__*,int *) ;

void
FUNC_5 (bfd *VAR_2)
{
  unsigned int VAR_3 = FUNC_2 (VAR_2);
  asymbol **VAR_4 = VAR_2->outsymbols;
  unsigned int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
    {
      coff_symbol_type *VAR_6 =
      FUNC_4 (VAR_2, VAR_4[VAR_5]);

      if (VAR_6 && VAR_6->native)
 {
   int VAR_7;
   combined_entry_type *VAR_8 = VAR_6->native;

   if (VAR_8->fix_value)
     {

       VAR_8->u.syment.n_value =
  (bfd_vma)((combined_entry_type *)
     ((unsigned long) VAR_8->u.syment.n_value))->offset;
       VAR_8->fix_value = 0;
     }
   if (VAR_8->fix_line)
     {



       VAR_8->u.syment.n_value =
  (VAR_6->symbol.section->output_section->line_filepos
   + VAR_8->u.syment.n_value * FUNC_1 (VAR_2));
       VAR_6->symbol.section =
  FUNC_3 (VAR_2, VAR_1);
       FUNC_0 (VAR_6->symbol.flags & VAR_0);
     }
   for (VAR_7 = 0; VAR_7 < VAR_8->u.syment.n_numaux; VAR_7++)
     {
       combined_entry_type *VAR_9 = VAR_8 + VAR_7 + 1;
       if (VAR_9->fix_tag)
  {
    VAR_9->u.auxent.x_sym.x_tagndx.l =
      VAR_9->u.auxent.x_sym.x_tagndx.p->offset;
    VAR_9->fix_tag = 0;
  }
       if (VAR_9->fix_end)
  {
    VAR_9->u.auxent.x_sym.x_fcnary.x_fcn.x_endndx.l =
      VAR_9->u.auxent.x_sym.x_fcnary.x_fcn.x_endndx.p->offset;
    VAR_9->fix_end = 0;
  }
       if (VAR_9->fix_scnlen)
  {
    VAR_9->u.auxent.x_csect.x_scnlen.l =
      VAR_9->u.auxent.x_csect.x_scnlen.p->offset;
    VAR_9->fix_scnlen = 0;
  }
     }
 }
    }
}

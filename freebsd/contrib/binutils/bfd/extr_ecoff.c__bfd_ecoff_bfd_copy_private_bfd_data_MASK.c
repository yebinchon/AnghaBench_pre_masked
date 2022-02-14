
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int crfd; int ifdMax; int issMax; int iauxMax; int ioptMax; int isymMax; int ipdMax; int idnMax; int cbLine; int ilineMax; int vstamp; } ;
struct ecoff_debug_info {int external_rfd; TYPE_1__ symbolic_header; int external_fdr; int ss; int external_aux; int external_opt; int external_sym; int external_pdr; int external_dnr; int line; } ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;
struct TYPE_12__ {int (* swap_ext_out ) (int *,TYPE_4__*,int ) ;int (* swap_ext_in ) (int *,int ,TYPE_4__*) ;} ;
struct TYPE_16__ {TYPE_3__ debug_swap; } ;
struct TYPE_15__ {int * cprmask; int fprmask; int gprmask; int gp; struct ecoff_debug_info debug_info; } ;
struct TYPE_14__ {int native; scalar_t__ local; } ;
struct TYPE_11__ {int index; } ;
struct TYPE_13__ {TYPE_2__ asym; int ifd; } ;
typedef TYPE_4__ EXTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int ** FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 TYPE_9__* FUNC_3 (int *) ;
 TYPE_8__* FUNC_4 (int *) ;
 TYPE_7__* FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,int ,TYPE_4__*) ;
 int FUNC_7 (int *,TYPE_4__*,int ) ;

bfd_boolean
FUNC_8 (bfd *VAR_5, bfd *VAR_6)
{
  struct ecoff_debug_info *VAR_7 = &FUNC_4 (VAR_5)->debug_info;
  struct ecoff_debug_info *VAR_8 = &FUNC_4 (VAR_6)->debug_info;
  int VAR_9;
  asymbol **VAR_10;
  size_t VAR_11;
  bfd_boolean VAR_12;



  if (FUNC_0 (VAR_5) != VAR_2
      || FUNC_0 (VAR_6) != VAR_2)
    return VAR_1;


  FUNC_4 (VAR_6)->gp = FUNC_4 (VAR_5)->gp;
  FUNC_4 (VAR_6)->gprmask = FUNC_4 (VAR_5)->gprmask;
  FUNC_4 (VAR_6)->fprmask = FUNC_4 (VAR_5)->fprmask;
  for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
    FUNC_4 (VAR_6)->cprmask[VAR_9] = FUNC_4 (VAR_5)->cprmask[VAR_9];


  VAR_8->symbolic_header.vstamp = VAR_7->symbolic_header.vstamp;


  VAR_11 = FUNC_2 (VAR_6);
  VAR_10 = FUNC_1 (VAR_6);
  if (VAR_11 == 0 || VAR_10 == ((void*)0))
    return VAR_1;


  VAR_12 = VAR_0;
  for (; VAR_11 > 0; VAR_11--, VAR_10++)
    {
      if (FUNC_5 (*VAR_10)->local)
 {
   VAR_12 = VAR_1;
   break;
 }
    }

  if (VAR_12)
    {
      VAR_8->symbolic_header.ilineMax = VAR_7->symbolic_header.ilineMax;
      VAR_8->symbolic_header.cbLine = VAR_7->symbolic_header.cbLine;
      VAR_8->line = VAR_7->line;

      VAR_8->symbolic_header.idnMax = VAR_7->symbolic_header.idnMax;
      VAR_8->external_dnr = VAR_7->external_dnr;

      VAR_8->symbolic_header.ipdMax = VAR_7->symbolic_header.ipdMax;
      VAR_8->external_pdr = VAR_7->external_pdr;

      VAR_8->symbolic_header.isymMax = VAR_7->symbolic_header.isymMax;
      VAR_8->external_sym = VAR_7->external_sym;

      VAR_8->symbolic_header.ioptMax = VAR_7->symbolic_header.ioptMax;
      VAR_8->external_opt = VAR_7->external_opt;

      VAR_8->symbolic_header.iauxMax = VAR_7->symbolic_header.iauxMax;
      VAR_8->external_aux = VAR_7->external_aux;

      VAR_8->symbolic_header.issMax = VAR_7->symbolic_header.issMax;
      VAR_8->ss = VAR_7->ss;

      VAR_8->symbolic_header.ifdMax = VAR_7->symbolic_header.ifdMax;
      VAR_8->external_fdr = VAR_7->external_fdr;

      VAR_8->symbolic_header.crfd = VAR_7->symbolic_header.crfd;
      VAR_8->external_rfd = VAR_7->external_rfd;
    }
  else
    {



      VAR_11 = FUNC_2 (VAR_6);
      VAR_10 = FUNC_1 (VAR_6);
      for (; VAR_11 > 0; VAR_11--, VAR_10++)
 {
   EXTR VAR_13;

   (*(FUNC_3 (VAR_6)->debug_swap.swap_ext_in))
     (VAR_6, FUNC_5 (*VAR_10)->native, &VAR_13);
   VAR_13.ifd = VAR_3;
   VAR_13.asym.index = VAR_4;
   (*(FUNC_3 (VAR_6)->debug_swap.swap_ext_out))
     (VAR_6, &VAR_13, FUNC_5 (*VAR_10)->native);
 }
    }

  return VAR_1;
}

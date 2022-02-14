
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int x_size; } ;
struct TYPE_11__ {TYPE_4__ x_lnsz; } ;
struct TYPE_7__ {long l; } ;
struct TYPE_8__ {TYPE_1__ x_endndx; } ;
struct TYPE_9__ {TYPE_2__ x_fcn; } ;
struct TYPE_12__ {TYPE_5__ x_misc; TYPE_3__ x_fcnary; } ;
union internal_auxent {TYPE_6__ x_sym; } ;
struct internal_syment {scalar_t__ n_numaux; int n_sclass; int n_type; } ;
struct coff_types {int dummy; } ;
struct coff_symbols {long coff_symno; scalar_t__ symno; scalar_t__ symcount; int ** syms; } ;
typedef int debug_type ;
typedef scalar_t__ debug_field ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;






 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,union internal_auxent*) ;
 int FUNC_4 (int *,int *,struct internal_syment*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (void*,int ,int ,int,int,int ) ;
 int FUNC_8 (void*,int,int,scalar_t__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,struct coff_symbols*,struct coff_types*,long,int ,union internal_auxent*,int ,void*) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (scalar_t__*,int) ;

__attribute__((used)) static debug_type
FUNC_13 (bfd *VAR_6, struct coff_symbols *VAR_7,
   struct coff_types *VAR_8, int VAR_9,
   union internal_auxent *VAR_10, void *VAR_11)
{
  long VAR_12;
  int VAR_13;
  debug_field *VAR_14;
  int VAR_15;
  bfd_boolean VAR_16;

  VAR_12 = VAR_10->x_sym.x_fcnary.x_fcn.x_endndx.l;

  VAR_13 = 10;
  VAR_14 = (debug_field *) FUNC_11 (VAR_13 * sizeof *VAR_14);
  VAR_15 = 0;

  VAR_16 = VAR_3;
  while (! VAR_16
  && VAR_7->coff_symno < VAR_12
  && VAR_7->symno < VAR_7->symcount)
    {
      asymbol *VAR_17;
      long VAR_18;
      struct internal_syment VAR_19;
      union internal_auxent VAR_20;
      union internal_auxent *VAR_21;
      bfd_vma VAR_22 = 0, VAR_23 = 0;

      VAR_17 = VAR_7->syms[VAR_7->symno];

      if (! FUNC_4 (VAR_6, VAR_17, &VAR_19))
 {
   FUNC_9 (FUNC_0("bfd_coff_get_syment failed: %s"),
       FUNC_5 (FUNC_6 ()));
   return VAR_1;
 }

      VAR_18 = VAR_7->coff_symno;

      ++VAR_7->symno;
      VAR_7->coff_symno += 1 + VAR_19.n_numaux;

      if (VAR_19.n_numaux == 0)
 VAR_21 = ((void*)0);
      else
 {
   if (! FUNC_3 (VAR_6, VAR_17, 0, &VAR_20))
     {
       FUNC_9 (FUNC_0("bfd_coff_get_auxent failed: %s"),
    FUNC_5 (FUNC_6 ()));
       return VAR_1;
     }
   VAR_21 = &VAR_20;
 }

      switch (VAR_19.n_sclass)
 {
 case 129:
 case 128:
   VAR_22 = 8 * FUNC_2 (VAR_17);
   VAR_23 = 0;
   break;

 case 130:
   VAR_22 = FUNC_2 (VAR_17);
   VAR_23 = VAR_20.x_sym.x_misc.x_lnsz.x_size;
   break;

 case 131:
   VAR_16 = VAR_4;
   break;
 }

      if (! VAR_16)
 {
   debug_type VAR_24;
   debug_field VAR_25;

   VAR_24 = FUNC_10 (VAR_6, VAR_7, VAR_8, VAR_18,
       VAR_19.n_type, VAR_21, VAR_4, VAR_11);
   VAR_25 = FUNC_7 (VAR_11, FUNC_1 (VAR_17), VAR_24,
    VAR_22, VAR_23, VAR_2);
   if (VAR_25 == VAR_0)
     return VAR_1;

   if (VAR_15 + 1 >= VAR_13)
     {
       VAR_13 += 10;
       VAR_14 = ((debug_field *)
   FUNC_12 (VAR_14, VAR_13 * sizeof *VAR_14));
     }

   VAR_14[VAR_15] = VAR_25;
   ++VAR_15;
 }
    }

  VAR_14[VAR_15] = VAR_0;

  return FUNC_8 (VAR_11, VAR_9 == VAR_5,
     VAR_10->x_sym.x_misc.x_lnsz.x_size,
     VAR_14);
}

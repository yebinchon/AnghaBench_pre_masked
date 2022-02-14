
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int x_lnno; } ;
struct TYPE_8__ {TYPE_1__ x_lnsz; scalar_t__ x_fsize; } ;
struct TYPE_9__ {TYPE_2__ x_misc; } ;
union internal_auxent {TYPE_3__ x_sym; } ;
struct internal_syment {scalar_t__ n_numaux; int n_sclass; long n_value; int n_type; } ;
struct coff_types {int * basic; int * slots; } ;
struct coff_symbols {long symcount; long symno; long coff_symno; int ** syms; } ;
typedef int debug_type ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;
struct TYPE_10__ {scalar_t__ offset; } ;
struct TYPE_11__ {TYPE_4__ u; int line_number; } ;
typedef TYPE_5__ alent ;


 TYPE_5__* FUNC_0 (int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,union internal_auxent*) ;
 int FUNC_7 (int *,int *,struct internal_syment*) ;
 long FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 int FUNC_12 (void*,scalar_t__) ;
 int FUNC_13 (void*,scalar_t__) ;
 int FUNC_14 (void*,char const*,int ,int ,scalar_t__) ;
 int FUNC_15 (void*,int ,scalar_t__) ;
 int FUNC_16 (void*,char const*) ;
 int FUNC_17 (void*,scalar_t__) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int ,long) ;
 int FUNC_20 (int *,struct coff_types*,int *,long,struct internal_syment*,void*,int ,int ) ;
 int FUNC_21 (int *,struct coff_symbols*,struct coff_types*,long,int,union internal_auxent*,int ,void*) ;
 int FUNC_22 (char const*,char*) ;

bfd_boolean
FUNC_23 (bfd *VAR_6, asymbol **VAR_7, long VAR_8, void *VAR_9)
{
  struct coff_symbols VAR_10;
  struct coff_types VAR_11;
  int VAR_12;
  long VAR_13;
  const char *VAR_14;
  int VAR_15;
  int VAR_16;
  bfd_vma VAR_17;
  alent *VAR_18;
  bfd_boolean VAR_19;
  long VAR_20;

  VAR_10.syms = VAR_7;
  VAR_10.symcount = VAR_8;
  VAR_10.symno = 0;
  VAR_10.coff_symno = 0;

  VAR_11.slots = ((void*)0);
  for (VAR_12 = 0; VAR_12 <= VAR_3; VAR_12++)
    VAR_11.basic[VAR_12] = VAR_0;

  VAR_13 = -1;
  VAR_14 = ((void*)0);
  VAR_15 = 0;
  VAR_16 = 0;
  VAR_17 = 0;
  VAR_18 = ((void*)0);
  VAR_19 = VAR_1;

  while (VAR_10.symno < VAR_8)
    {
      asymbol *VAR_21;
      const char *VAR_22;
      struct internal_syment VAR_23;
      union internal_auxent VAR_24;
      union internal_auxent *VAR_25;
      debug_type VAR_26;

      VAR_21 = VAR_7[VAR_10.symno];

      if (! FUNC_7 (VAR_6, VAR_21, &VAR_23))
 {
   FUNC_19 (FUNC_3("bfd_coff_get_syment failed: %s"),
       FUNC_8 (FUNC_9 ()));
   return VAR_1;
 }

      VAR_22 = FUNC_4 (VAR_21);

      VAR_20 = VAR_10.coff_symno;

      ++VAR_10.symno;
      VAR_10.coff_symno += 1 + VAR_23.n_numaux;



      if (VAR_23.n_numaux == 0)
 VAR_25 = ((void*)0);
      else
 {
   if (! FUNC_6 (VAR_6, VAR_21, 0, &VAR_24))
     {
       FUNC_19 (FUNC_3("bfd_coff_get_auxent failed: %s"),
    FUNC_8 (FUNC_9 ()));
       return VAR_1;
     }
   VAR_25 = &VAR_24;
 }

      if (VAR_20 == VAR_13 && VAR_23.n_sclass != 134)
 {


   if (! FUNC_16 (VAR_9, "*globals*"))
     return VAR_1;
 }

      switch (VAR_23.n_sclass)
 {
 case 138:
 case 136:
 case 130:
 case 129:
 case 132:
 case 140:
 case 133:

   break;

 case 134:
   VAR_13 = VAR_23.n_value;
   if (! FUNC_16 (VAR_9, VAR_22))
     return VAR_1;
   break;

 case 131:


   if (VAR_23.n_type == VAR_4)
     break;

 case 128:
 case 137:
   if (FUNC_2 (VAR_23.n_type))
     {
       VAR_14 = VAR_22;
       VAR_15 = VAR_23.n_sclass;
       VAR_16 = VAR_23.n_type;
       if (VAR_23.n_numaux > 0)
  VAR_17 = FUNC_5 (VAR_21) + VAR_24.x_sym.x_misc.x_fsize;
       else
  VAR_17 = 0;
       VAR_18 = FUNC_0 (VAR_6, VAR_5, (VAR_6, VAR_21));
       break;
     }
   VAR_26 = FUNC_21 (VAR_6, &VAR_10, &VAR_11, VAR_20,
      VAR_23.n_type, VAR_25, VAR_2, VAR_9);
   if (VAR_26 == VAR_0)
     return VAR_1;
   if (! FUNC_20 (VAR_6, &VAR_11, VAR_21, VAR_20, &VAR_23,
       VAR_9, VAR_26, VAR_19))
     return VAR_1;
   break;

 case 135:
   if (FUNC_22 (VAR_22, ".bf") == 0)
     {
       if (VAR_14 == ((void*)0))
  {
    FUNC_19 (FUNC_3("%ld: .bf without preceding function"),
        VAR_20);
    return VAR_1;
  }

       VAR_26 = FUNC_21 (VAR_6, &VAR_10, &VAR_11, VAR_20,
          FUNC_1 (VAR_16), VAR_25, VAR_1, VAR_9);
       if (VAR_26 == VAR_0)
  return VAR_1;

       if (! FUNC_14 (VAR_9, VAR_14, VAR_26,
        FUNC_18 (VAR_15),
        FUNC_5 (VAR_21)))
  return VAR_1;

       if (VAR_18 != ((void*)0))
  {
    int VAR_27;
    bfd_vma VAR_28;

    if (VAR_23.n_numaux == 0)
      VAR_27 = 0;
    else
      VAR_27 = VAR_24.x_sym.x_misc.x_lnsz.x_lnno - 1;

    VAR_28 = FUNC_11 (VAR_6, FUNC_10 (VAR_21));

    ++VAR_18;

    while (VAR_18->line_number != 0)
      {
        if (! FUNC_15 (VAR_9,
            VAR_18->line_number + VAR_27,
            VAR_18->u.offset + VAR_28))
   return VAR_1;
        ++VAR_18;
      }
  }

       VAR_14 = ((void*)0);
       VAR_18 = ((void*)0);
       VAR_15 = 0;
       VAR_16 = 0;

       VAR_19 = VAR_2;
     }
   else if (FUNC_22 (VAR_22, ".ef") == 0)
     {
       if (! VAR_19)
  {
    FUNC_19 (FUNC_3("%ld: unexpected .ef\n"), VAR_20);
    return VAR_1;
  }

       if (FUNC_5 (VAR_21) > VAR_17)
  VAR_17 = FUNC_5 (VAR_21);
       if (! FUNC_13 (VAR_9, VAR_17))
  return VAR_1;

       VAR_17 = 0;
       VAR_19 = VAR_1;
     }
   break;

 case 139:
   if (FUNC_22 (VAR_22, ".bb") == 0)
     {
       if (! FUNC_17 (VAR_9, FUNC_5 (VAR_21)))
  return VAR_1;
     }
   else if (FUNC_22 (VAR_22, ".eb") == 0)
     {
       if (! FUNC_12 (VAR_9, FUNC_5 (VAR_21)))
  return VAR_1;
     }
   break;

 default:
   VAR_26 = FUNC_21 (VAR_6, &VAR_10, &VAR_11, VAR_20,
      VAR_23.n_type, VAR_25, VAR_2, VAR_9);
   if (VAR_26 == VAR_0)
     return VAR_1;
   if (! FUNC_20 (VAR_6, &VAR_11, VAR_21, VAR_20, &VAR_23,
       VAR_9, VAR_26, VAR_19))
     return VAR_1;
   break;
 }
    }

  return VAR_2;
}

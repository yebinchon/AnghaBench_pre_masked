
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_14__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct TYPE_28__ {unsigned int x_lnno; } ;
struct TYPE_29__ {TYPE_2__ x_lnsz; } ;
struct TYPE_30__ {TYPE_3__ x_misc; } ;
union internal_auxent {TYPE_4__ x_sym; } ;
struct coff_section_tdata {unsigned int i; scalar_t__ offset; char* function; unsigned int line_base; } ;
struct TYPE_32__ {scalar_t__ _n_offset; } ;
struct TYPE_33__ {TYPE_6__ _n_n; } ;
struct TYPE_34__ {scalar_t__ n_sclass; int n_numaux; scalar_t__ n_scnum; scalar_t__ n_value; TYPE_7__ _n; } ;
struct TYPE_35__ {union internal_auxent auxent; TYPE_8__ syment; } ;
struct TYPE_22__ {TYPE_9__ u; } ;
typedef TYPE_10__ combined_entry_type ;
struct TYPE_27__ {scalar_t__ value; char* name; } ;
struct TYPE_23__ {TYPE_10__* native; TYPE_1__ symbol; } ;
typedef TYPE_11__ coff_symbol_type ;
struct TYPE_24__ {int raw_syment_count; TYPE_10__* raw_syments; int dwarf2_find_line_info; int line_info; } ;
typedef TYPE_12__ coff_data_type ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;
struct TYPE_25__ {unsigned int lineno_count; scalar_t__ used_by_bfd; int * owner; TYPE_14__* lineno; } ;
typedef TYPE_13__ asection ;
struct TYPE_31__ {scalar_t__ offset; scalar_t__ sym; } ;
struct TYPE_26__ {unsigned int line_number; TYPE_5__ u; } ;
typedef TYPE_14__ alent ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,TYPE_13__*,int **,scalar_t__,char const**,char const**,unsigned int*,int ,int *) ;
 int FUNC_1 (int *,int **,TYPE_13__*,scalar_t__,scalar_t__*,char const**,char const**,unsigned int*,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_13__*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 TYPE_12__* FUNC_5 (int *) ;
 struct coff_section_tdata* FUNC_6 (int *,TYPE_13__*) ;
 TYPE_13__* FUNC_7 (int *,scalar_t__) ;

bfd_boolean
FUNC_8 (bfd *VAR_4,
   asection *VAR_5,
   asymbol **VAR_6,
   bfd_vma VAR_7,
   const char **VAR_8,
   const char **VAR_9,
   unsigned int *VAR_10)
{
  bfd_boolean VAR_11;
  unsigned int VAR_12;
  unsigned int VAR_13;
  coff_data_type *VAR_14 = FUNC_5 (VAR_4);

  combined_entry_type *VAR_15;
  combined_entry_type *VAR_16;
  alent *VAR_17;
  struct coff_section_tdata *VAR_18;
  bfd_size_type VAR_19;



  if (! FUNC_1 (VAR_4, VAR_6, VAR_5, VAR_7,
          &VAR_11, VAR_8,
          VAR_9, VAR_10,
          &FUNC_5(VAR_4)->line_info))
    return VAR_1;

  if (VAR_11)
    return VAR_3;


  if (FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_7,
         VAR_8, VAR_9,
         VAR_10, 0,
         &FUNC_5(VAR_4)->dwarf2_find_line_info))
    return VAR_3;

  *VAR_8 = 0;
  *VAR_9 = 0;
  *VAR_10 = 0;


  if (!FUNC_2 (VAR_4))
    return VAR_1;

  if (VAR_14 == ((void*)0))
    return VAR_1;


  VAR_15 = VAR_14->raw_syments;
  if (!VAR_15)
    return VAR_1;

  VAR_16 = VAR_15 + VAR_14->raw_syment_count;
  while (VAR_15 < VAR_16)
    {
      if (VAR_15->u.syment.n_sclass == VAR_0)
 break;
      VAR_15 += 1 + VAR_15->u.syment.n_numaux;
    }

  if (VAR_15 < VAR_16)
    {
      bfd_vma VAR_20;
      bfd_vma VAR_21;


      VAR_20 = FUNC_3 (VAR_4, VAR_5);
      *VAR_8 = (char *) VAR_15->u.syment._n._n_n._n_offset;
      VAR_21 = (bfd_vma) 0 - (bfd_vma) 1;
      while (1)
 {
   combined_entry_type *VAR_22;

   for (VAR_22 = VAR_15 + 1 + VAR_15->u.syment.n_numaux;
        VAR_22 < VAR_16;
        VAR_22 += 1 + VAR_22->u.syment.n_numaux)
     {
       if (VAR_22->u.syment.n_scnum > 0
    && (VAR_5
        == FUNC_7 (VAR_4,
            VAR_22->u.syment.n_scnum)))
  break;
       if (VAR_22->u.syment.n_sclass == VAR_0)
  {
    VAR_22 = VAR_16;
    break;
  }
     }



   if (VAR_22 < VAR_16
       && VAR_7 + VAR_20 >= (bfd_vma) VAR_22->u.syment.n_value
       && VAR_7 + VAR_20 - (bfd_vma) VAR_22->u.syment.n_value <= VAR_21)
     {
       *VAR_8 = (char *) VAR_15->u.syment._n._n_n._n_offset;
       VAR_21 = VAR_7 + VAR_20 - VAR_22->u.syment.n_value;
     }



   if (VAR_15 >= VAR_14->raw_syments + VAR_15->u.syment.n_value)
     break;

   VAR_15 = VAR_14->raw_syments + VAR_15->u.syment.n_value;
   if (VAR_15 > VAR_16 || VAR_15->u.syment.n_sclass != VAR_0)
     break;
 }
    }




  VAR_18 = FUNC_6 (VAR_4, VAR_5);
  if (VAR_18 != ((void*)0)
      && VAR_18->i > 0
      && VAR_7 >= VAR_18->offset)
    {
      VAR_12 = VAR_18->i;
      *VAR_9 = VAR_18->function;
      VAR_13 = VAR_18->line_base;
    }
  else
    {
      VAR_12 = 0;
      VAR_13 = 0;
    }

  if (VAR_5->lineno != ((void*)0))
    {
      bfd_vma VAR_23 = 0;

      VAR_17 = &VAR_5->lineno[VAR_12];

      for (; VAR_12 < VAR_5->lineno_count; VAR_12++)
 {
   if (VAR_17->line_number == 0)
     {

       coff_symbol_type *VAR_24 = (coff_symbol_type *) (VAR_17->u.sym);
       if (VAR_24->symbol.value > VAR_7)
  break;
       *VAR_9 = VAR_24->symbol.name;
       VAR_23 = VAR_24->symbol.value;
       if (VAR_24->native)
  {
    combined_entry_type *VAR_25 = VAR_24->native;
    VAR_25 = VAR_25 + 1 + VAR_25->u.syment.n_numaux;



    if (VAR_25->u.syment.n_scnum == VAR_2)
      VAR_25 = VAR_25 + 1 + VAR_25->u.syment.n_numaux;


    if (VAR_25->u.syment.n_numaux)
      {

        union internal_auxent *VAR_26 = &((VAR_25 + 1)->u.auxent);
        VAR_13 = VAR_26->x_sym.x_misc.x_lnsz.x_lnno;
        *VAR_10 = VAR_13;
      }
  }
     }
   else
     {
       if (VAR_17->u.offset > VAR_7)
  break;
       *VAR_10 = VAR_17->line_number + VAR_13 - 1;
     }
   VAR_17++;
 }







      if (VAR_12 >= VAR_5->lineno_count
   && VAR_23 != 0
   && VAR_7 - VAR_23 > 0x100)
 {
   *VAR_9 = ((void*)0);
   *VAR_10 = 0;
 }
    }


  if (VAR_18 == ((void*)0) && VAR_5->owner == VAR_4)
    {
      VAR_19 = sizeof (struct coff_section_tdata);
      VAR_5->used_by_bfd = FUNC_4 (VAR_4, VAR_19);
      VAR_18 = (struct coff_section_tdata *) VAR_5->used_by_bfd;
    }
  if (VAR_18 != ((void*)0))
    {
      VAR_18->offset = VAR_7;
      VAR_18->i = VAR_12;
      VAR_18->function = *VAR_9;
      VAR_18->line_base = VAR_13;
    }

  return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ _l_zeroes; int _l_offset; } ;
struct TYPE_22__ {int _l_name; TYPE_1__ _l_l; } ;
struct internal_ldsym {scalar_t__ l_smclas; int l_smtype; scalar_t__ l_value; int l_scnum; TYPE_2__ _l; } ;
struct internal_ldhdr {int l_stoff; int l_nsyms; } ;
struct TYPE_23__ {char const* name; int flags; TYPE_7__* section; scalar_t__ value; TYPE_5__* the_bfd; } ;
struct TYPE_24__ {TYPE_3__ symbol; } ;
typedef TYPE_4__ coff_symbol_type ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
struct TYPE_25__ {int flags; } ;
typedef TYPE_5__ bfd ;
typedef int asymbol ;
typedef int asection ;
struct TYPE_27__ {int keep_contents; int * contents; } ;
struct TYPE_26__ {scalar_t__ vma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_7__* VAR_7 ;
 char* FUNC_0 (TYPE_5__*,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_1 (TYPE_5__*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,struct internal_ldhdr*) ;
 int FUNC_5 (TYPE_5__*,int *,struct internal_ldhdr*) ;
 int FUNC_6 (TYPE_5__*,int *,struct internal_ldsym*) ;
 TYPE_4__* FUNC_7 (TYPE_5__*,int) ;
 TYPE_9__* FUNC_8 (TYPE_5__*,int *) ;
 TYPE_7__* FUNC_9 (TYPE_5__*,int ) ;
 int FUNC_10 (char*,int ,size_t) ;
 int FUNC_11 (TYPE_5__*,int *) ;

long
FUNC_12 (bfd *VAR_10, asymbol **VAR_11)
{
  asection *VAR_12;
  bfd_byte *VAR_13;
  struct internal_ldhdr VAR_14;
  const char *VAR_15;
  bfd_byte *VAR_16, *VAR_17;
  coff_symbol_type *VAR_18;

  if ((VAR_10->flags & VAR_2) == 0)
    {
      FUNC_2 (VAR_8);
      return -1;
    }

  VAR_12 = FUNC_1 (VAR_10, ".loader");
  if (VAR_12 == ((void*)0))
    {
      FUNC_2 (VAR_9);
      return -1;
    }

  if (! FUNC_11 (VAR_10, VAR_12))
    return -1;
  VAR_13 = FUNC_8 (VAR_10, VAR_12)->contents;

  FUNC_8 (VAR_10, VAR_12)->keep_contents = VAR_5;

  FUNC_5 (VAR_10, VAR_13, &VAR_14);

  VAR_15 = (char *) VAR_13 + VAR_14.l_stoff;

  VAR_18 = FUNC_7 (VAR_10, VAR_14.l_nsyms * sizeof (* VAR_18));
  if (VAR_18 == ((void*)0))
    return -1;

  VAR_16 = VAR_13 + FUNC_4(VAR_10, &VAR_14);

  VAR_17 = VAR_16 + VAR_14.l_nsyms * FUNC_3(VAR_10);
  for (; VAR_16 < VAR_17; VAR_16 += FUNC_3(VAR_10), VAR_18++, VAR_11++)
    {
      struct internal_ldsym VAR_19;

      FUNC_6 (VAR_10, VAR_16, &VAR_19);

      VAR_18->symbol.the_bfd = VAR_10;

      if (VAR_19._l._l_l._l_zeroes == 0)
 VAR_18->symbol.name = VAR_15 + VAR_19._l._l_l._l_offset;
      else
 {
   char *VAR_20;

   VAR_20 = FUNC_0 (VAR_10, (bfd_size_type) VAR_4 + 1);
   if (VAR_20 == ((void*)0))
     return -1;
   FUNC_10 (VAR_20, VAR_19._l._l_name, VAR_4);
   VAR_20[VAR_4] = '\0';
   VAR_18->symbol.name = VAR_20;
 }

      if (VAR_19.l_smclas == VAR_6)
 VAR_18->symbol.section = VAR_7;
      else
 VAR_18->symbol.section = FUNC_9 (VAR_10,
             VAR_19.l_scnum);
      VAR_18->symbol.value = VAR_19.l_value - VAR_18->symbol.section->vma;

      VAR_18->symbol.flags = VAR_1;
      if ((VAR_19.l_smtype & VAR_3) != 0)
 VAR_18->symbol.flags |= VAR_0;



      *VAR_11 = (asymbol *) VAR_18;
    }

  *VAR_11 = ((void*)0);

  return VAR_14.l_nsyms;
}

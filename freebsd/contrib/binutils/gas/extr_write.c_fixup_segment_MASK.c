
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int valueT ;
typedef scalar_t__ segT ;
struct TYPE_17__ {int fr_address; } ;
typedef TYPE_1__ fragS ;
struct TYPE_18__ {int fx_offset; int fx_pcrel; int fx_dot_value; int fx_size; int fx_where; int fx_line; int fx_file; scalar_t__ fx_signed; int fx_no_overflow; int fx_bit_fixP; int * fx_subsy; int * fx_addsy; int fx_done; TYPE_1__* fx_frag; struct TYPE_18__* fx_next; } ;
typedef TYPE_2__ fixS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,long) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (char*) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_15 (int ,int ,int ,...) ;
 int FUNC_16 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_19 (TYPE_2__*,int*,scalar_t__) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (int *) ;
 int * FUNC_22 (scalar_t__) ;
 int FUNC_23 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_24 (char*,int) ;
 int FUNC_25 (char*,char*,long) ;
 int VAR_6 ;
 int FUNC_26 (int *) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static long
FUNC_27 (fixS *VAR_8, segT VAR_9)
{
  long VAR_10 = 0;
  valueT VAR_11;
  fragS *VAR_12;
  segT VAR_13 = VAR_2;

  if (VAR_8 != ((void*)0) && VAR_1 == ((void*)0))
    VAR_1 = FUNC_22 (VAR_2);







  if (VAR_4 && FUNC_11 (VAR_9))
    {
      for (; VAR_8; VAR_8 = VAR_8->fx_next)
 if (!VAR_8->fx_done)
   {
     if (VAR_8->fx_addsy == ((void*)0))
       {




  VAR_8->fx_addsy = VAR_1;
       }
     FUNC_26 (VAR_8->fx_addsy);
     if (VAR_8->fx_subsy != ((void*)0))
       FUNC_26 (VAR_8->fx_subsy);
     VAR_10++;
   }
      FUNC_5 (VAR_8, VAR_10);
      return VAR_10;
    }

  for (; VAR_8; VAR_8 = VAR_8->fx_next)
    {





      VAR_12 = VAR_8->fx_frag;
      FUNC_18 (VAR_12);



      VAR_11 = VAR_8->fx_offset;

      if (VAR_8->fx_addsy != ((void*)0))
 VAR_13 = FUNC_3 (VAR_8->fx_addsy);

      if (VAR_8->fx_subsy != ((void*)0))
 {
   segT VAR_14;
   FUNC_21 (VAR_8->fx_subsy);
   VAR_14 = FUNC_3 (VAR_8->fx_subsy);
   if (VAR_8->fx_addsy != ((void*)0)
       && VAR_14 == VAR_13
       && !FUNC_10 (VAR_8, VAR_13))
     {
       VAR_11 += FUNC_4 (VAR_8->fx_addsy);
       VAR_11 -= FUNC_4 (VAR_8->fx_subsy);
       VAR_8->fx_offset = VAR_11;
       VAR_8->fx_addsy = ((void*)0);
       VAR_8->fx_subsy = ((void*)0);




     }
   else if (VAR_14 == VAR_2
     && !FUNC_8 (VAR_8))
     {
       VAR_11 -= FUNC_4 (VAR_8->fx_subsy);
       VAR_8->fx_offset = VAR_11;
       VAR_8->fx_subsy = ((void*)0);
     }
   else if (VAR_14 == VAR_9
     && !FUNC_9 (VAR_8))
     {
       VAR_11 -= FUNC_4 (VAR_8->fx_subsy);
       VAR_8->fx_offset = (VAR_11 + VAR_8->fx_dot_value
     + VAR_8->fx_frag->fr_address);




       if (0







    || !VAR_8->fx_pcrel)
  VAR_11 += FUNC_1 (VAR_8, VAR_9);
       VAR_8->fx_subsy = ((void*)0);
       VAR_8->fx_pcrel = 1;
     }
   else if (!FUNC_13 (VAR_8))
     {
       FUNC_15 (VAR_8->fx_file, VAR_8->fx_line,
       FUNC_14("can't resolve `%s' {%s section} - `%s' {%s section}"),
       VAR_8->fx_addsy ? FUNC_2 (VAR_8->fx_addsy) : "0",
       FUNC_23 (VAR_13),
       FUNC_2 (VAR_8->fx_subsy),
       FUNC_23 (VAR_14));
     }
 }

      if (VAR_8->fx_addsy)
 {
   if (VAR_13 == VAR_9
       && !FUNC_7 (VAR_8))
     {



       VAR_11 += FUNC_4 (VAR_8->fx_addsy);
       VAR_8->fx_offset = VAR_11;
       if (VAR_8->fx_pcrel)
  VAR_11 -= FUNC_1 (VAR_8, VAR_9);
       VAR_8->fx_addsy = ((void*)0);
       VAR_8->fx_pcrel = 0;
     }
   else if (VAR_13 == VAR_2
     && !FUNC_6 (VAR_8))
     {
       VAR_11 += FUNC_4 (VAR_8->fx_addsy);
       VAR_8->fx_offset = VAR_11;
       VAR_8->fx_addsy = ((void*)0);
     }
   else if (VAR_13 != VAR_7
     && ! FUNC_16 (VAR_13)
     && FUNC_0 (VAR_8))
     VAR_11 += FUNC_4 (VAR_8->fx_addsy);
 }

      if (VAR_8->fx_pcrel)
 {
   VAR_11 -= FUNC_1 (VAR_8, VAR_9);
   if (!VAR_8->fx_done && VAR_8->fx_addsy == ((void*)0))
     {




       VAR_8->fx_addsy = VAR_1;
     }
 }

      if (!VAR_8->fx_done)
 FUNC_19 (VAR_8, &VAR_11, VAR_9);

      if (!VAR_8->fx_done)
 {
   ++VAR_10;
   if (VAR_8->fx_addsy == ((void*)0))
     VAR_8->fx_addsy = VAR_1;
   FUNC_26 (VAR_8->fx_addsy);
   if (VAR_8->fx_subsy != ((void*)0))
     FUNC_26 (VAR_8->fx_subsy);
 }

      if (!VAR_8->fx_bit_fixP && !VAR_8->fx_no_overflow && VAR_8->fx_size != 0)
 {
   if (VAR_8->fx_size < sizeof (valueT))
     {
       valueT VAR_15;

       VAR_15 = 0;
       VAR_15--;
       VAR_15 <<= VAR_8->fx_size * 8 - (VAR_8->fx_signed ? 1 : 0);
       if ((VAR_11 & VAR_15) != 0 && (VAR_11 & VAR_15) != VAR_15)
  {
    char VAR_16[50], VAR_17[50];
    FUNC_24 (VAR_16, VAR_12->fr_address + VAR_8->fx_where);
    if (VAR_11 > 1000)
      FUNC_24 (VAR_17, VAR_11);
    else
      FUNC_25 (VAR_17, "%ld", (long) VAR_11);
    FUNC_15 (VAR_8->fx_file, VAR_8->fx_line,
    FUNC_14("value of %s too large for field of %d bytes at %s"),
    VAR_17, VAR_8->fx_size, VAR_16);
  }
     }
 }
    }

  FUNC_5 (VAR_8, VAR_10);
  return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct section_list {int flags; scalar_t__ set_flags; } ;
typedef TYPE_1__* sec_ptr ;
typedef int flagword ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_17__ {int * sym_ptr_ptr; } ;
typedef TYPE_2__ arelent ;
struct TYPE_16__ {int lma; struct TYPE_16__* output_section; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 long FUNC_3 (int *,TYPE_1__*,TYPE_2__**,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 long FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *,TYPE_1__*,void*,int ,int) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *,TYPE_1__*) ;
 int FUNC_13 (int *,TYPE_1__*,TYPE_2__**,long) ;
 int FUNC_14 (int *,TYPE_1__*,void*,int ,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_15 (int ,int ,int) ;
 struct section_list* FUNC_16 (int ,int ) ;
 int FUNC_17 (void*) ;
 int VAR_8 ;
 scalar_t__ FUNC_18 (int ,int ) ;
 scalar_t__ FUNC_19 (int *,TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_20 (void*,int ,int) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 void* FUNC_21 (int) ;

__attribute__((used)) static void
FUNC_22 (bfd *VAR_14, sec_ptr VAR_15, void *VAR_16)
{
  bfd *VAR_17 = VAR_16;
  struct section_list *VAR_18;
  arelent **VAR_19;
  long VAR_20;
  sec_ptr VAR_21;
  bfd_size_type VAR_22;
  long VAR_23;
  flagword VAR_24;



  if (VAR_12 != 0)
    return;

  if (FUNC_19 (VAR_14, VAR_15))
    return;

  VAR_24 = FUNC_9 (VAR_14, VAR_15);
  if ((VAR_24 & VAR_1) != 0)
    return;

  VAR_21 = VAR_15->output_section;
  VAR_22 = FUNC_11 (VAR_15);

  if (VAR_22 == 0 || VAR_21 == 0)
    return;

  VAR_18 = FUNC_16 (FUNC_10 (VAR_14, VAR_15), VAR_0);


  if (FUNC_6 (VAR_17) == VAR_4)
    VAR_23 = 0;
  else
    {
      VAR_23 = FUNC_7 (VAR_14, VAR_15);

      if (VAR_23 < 0)
 {

   if (VAR_23 == -1 && FUNC_4 () == VAR_5)
     VAR_23 = 0;
   else
     FUNC_0 (FUNC_5 (VAR_14));
 }
    }

  if (VAR_23 == 0)
    FUNC_13 (VAR_17, VAR_21, ((void*)0), 0);
  else
    {
      VAR_19 = FUNC_21 (VAR_23);
      VAR_20 = FUNC_3 (VAR_14, VAR_15, VAR_19, VAR_9);
      if (VAR_20 < 0)
 FUNC_0 (FUNC_5 (VAR_14));

      if (VAR_13 == VAR_3)
 {


   arelent **VAR_25;
   long VAR_26 = 0;
   long VAR_27;

   VAR_25 = FUNC_21 (VAR_23);
   for (VAR_27 = 0; VAR_27 < VAR_20; VAR_27++)
     if (FUNC_18 (FUNC_2 (*VAR_19[VAR_27]->sym_ptr_ptr),
         VAR_10))
       VAR_25 [VAR_26++] = VAR_19 [VAR_27];
   VAR_20 = VAR_26;
   FUNC_17 (VAR_19);
   VAR_19 = VAR_25;
 }

      FUNC_13 (VAR_17, VAR_21, VAR_20 == 0 ? ((void*)0) : VAR_19, VAR_20);
      if (VAR_20 == 0)
 FUNC_17 (VAR_19);
    }

  if (VAR_7)
    return;

  if (FUNC_9 (VAR_14, VAR_15) & VAR_2
      && FUNC_9 (VAR_17, VAR_21) & VAR_2)
    {
      void *VAR_28 = FUNC_21 (VAR_22);

      if (!FUNC_8 (VAR_14, VAR_15, VAR_28, 0, VAR_22))
 FUNC_0 (FUNC_5 (VAR_14));

      if (VAR_11)
 {



   if ((VAR_22 % VAR_11) == 0)
     {
       unsigned long VAR_29, VAR_30;
       bfd_byte VAR_31;

       for (VAR_29 = 0; VAR_29 < VAR_22; VAR_29 += VAR_11)
  for (VAR_30 = 0; VAR_30 < (unsigned long)(VAR_11 / 2); VAR_30++)
    {
      bfd_byte *VAR_32 = (bfd_byte *) VAR_28;

      VAR_31 = VAR_32[VAR_29 + VAR_30];
      VAR_32[VAR_29 + VAR_30] = VAR_32[(VAR_29 + VAR_11) - (VAR_30 + 1)];
      VAR_32[(VAR_29 + VAR_11) - (VAR_30 + 1)] = VAR_31;
    }
     }
   else

     FUNC_15 (FUNC_1("cannot reverse bytes: length of section %s must be evenly divisible by %d"),
     FUNC_12 (VAR_14, VAR_15), VAR_11);
 }

      if (VAR_6 >= 0)
 {

   char *VAR_33 = (char *) VAR_28 + VAR_6;
   char *VAR_34 = VAR_28;
   char *VAR_35 = (char *) VAR_28 + VAR_22;

   for (; VAR_33 < VAR_35; VAR_33 += VAR_8)
     *VAR_34++ = *VAR_33;

   VAR_22 = (VAR_22 + VAR_8 - 1 - VAR_6) / VAR_8;
   VAR_21->lma /= VAR_8;
 }

      if (!FUNC_14 (VAR_17, VAR_21, VAR_28, 0, VAR_22))
 FUNC_0 (FUNC_5 (VAR_17));

      FUNC_17 (VAR_28);
    }
  else if (VAR_18 != ((void*)0) && VAR_18->set_flags && (VAR_18->flags & VAR_2) != 0)
    {
      void *VAR_36 = FUNC_21 (VAR_22);







      FUNC_20 (VAR_36, 0, VAR_22);
      if (! FUNC_14 (VAR_17, VAR_21, VAR_36, 0, VAR_22))
 FUNC_0 (FUNC_5 (VAR_17));
      FUNC_17 (VAR_36);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stab_section_info {int* cumulative_skips; int* stridxs; struct stab_excl_list* excls; } ;
struct stab_link_includes_totals {scalar_t__ sum_chars; scalar_t__ num_chars; struct stab_link_includes_totals* next; void* symb; } ;
struct stab_link_includes_entry {struct stab_link_includes_totals* totals; } ;
struct stab_info {int * strings; TYPE_4__* stabstr; int includes; } ;
struct stab_excl_list {int type; struct stab_excl_list* next; scalar_t__ val; int offset; } ;
typedef int flagword ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef char bfd_byte ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_8__ {scalar_t__ size; int flags; int rawsize; int output_section; } ;
typedef TYPE_1__ asection ;
struct TYPE_9__ {int size; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 size_t VAR_14 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *,TYPE_1__*,long) ;
 int FUNC_4 (int *,char const*,scalar_t__,scalar_t__) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *,int) ;
 int VAR_15 ;
 int FUNC_8 (int *,char*) ;
 struct stab_link_includes_totals* FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,char const*,scalar_t__,scalar_t__) ;
 int FUNC_11 (int *,int ,int) ;
 scalar_t__ FUNC_12 (int ) ;
 TYPE_4__* FUNC_13 (int *,char*,int) ;
 int FUNC_14 (int *,TYPE_1__*,char**) ;
 void* FUNC_15 (char*,scalar_t__) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (void*,char*,scalar_t__) ;
 int FUNC_19 (int*,int ,size_t) ;
 int VAR_16 ;
 int FUNC_20 (int ,int *,TYPE_1__*,long) ;

bfd_boolean
FUNC_21 (bfd *VAR_17,
    struct stab_info *VAR_18,
    asection *VAR_19,
    asection *VAR_20,
    void * *VAR_21,
    bfd_size_type *VAR_22)
{
  bfd_boolean VAR_23;
  bfd_size_type VAR_24, VAR_25;
  struct stab_section_info *VAR_26;
  bfd_byte *VAR_27 = ((void*)0);
  bfd_byte *VAR_28 = ((void*)0);
  bfd_byte *VAR_29, *VAR_30;
  bfd_size_type VAR_31, VAR_32, VAR_33;
  bfd_size_type *VAR_34;

  if (VAR_19->size == 0
      || VAR_20->size == 0)

    return VAR_13;

  if (VAR_19->size % VAR_11 != 0)


    return VAR_13;

  if ((VAR_20->flags & VAR_10) != 0)


    return VAR_13;

  if (FUNC_12 (VAR_19->output_section)
      || FUNC_12 (VAR_20->output_section))


    return VAR_13;

  VAR_23 = VAR_0;

  if (VAR_18->stabstr == ((void*)0))
    {
      flagword VAR_35;


      VAR_23 = VAR_13;
      VAR_18->strings = FUNC_5 ();
      if (VAR_18->strings == ((void*)0))
 goto error_return;

      (void) FUNC_4 (VAR_18->strings, "", VAR_13, VAR_13);
      if (! FUNC_11 (&VAR_18->includes,
     VAR_16,
     sizeof (struct stab_link_includes_entry)))
 goto error_return;
      VAR_35 = (VAR_6 | VAR_9 | VAR_4
        | VAR_8);
      VAR_18->stabstr = FUNC_13 (VAR_17, ".stabstr",
          VAR_35);
      if (VAR_18->stabstr == ((void*)0))
 goto error_return;
    }



  VAR_24 = VAR_19->size / VAR_11;

  VAR_25 = sizeof (struct stab_section_info);
  VAR_25 += (VAR_24 - 1) * sizeof (bfd_size_type);
  *VAR_21 = FUNC_7 (VAR_17, VAR_25);
  if (*VAR_21 == ((void*)0))
    goto error_return;

  VAR_26 = (struct stab_section_info *) *VAR_21;
  VAR_26->excls = ((void*)0);
  VAR_19->rawsize = VAR_19->size;
  VAR_26->cumulative_skips = ((void*)0);
  FUNC_19 (VAR_26->stridxs, 0, (size_t) VAR_24 * sizeof (bfd_size_type));


  if (!FUNC_14 (VAR_17, VAR_19, &VAR_27)
      || !FUNC_14 (VAR_17, VAR_20, &VAR_28))
    goto error_return;



  VAR_31 = 0;




  VAR_32 = VAR_22 ? *VAR_22 : 0;
  VAR_33 = 0;

  VAR_30 = VAR_27 + VAR_19->size;
  for (VAR_29 = VAR_27, VAR_34 = VAR_26->stridxs;
       VAR_29 < VAR_30;
       VAR_29 += VAR_11, ++VAR_34)
    {
      bfd_size_type VAR_36;
      int VAR_37;
      const char *VAR_38;

      if (*VAR_34 != 0)

 continue;

      VAR_37 = VAR_29[VAR_14];

      if (VAR_37 == 0)
 {


   VAR_31 = VAR_32;
   VAR_32 += FUNC_8 (VAR_17, VAR_29 + 8);
   if (VAR_22)
     *VAR_22 = VAR_32;
   if (! VAR_23)
     {
       *VAR_34 = (bfd_size_type) -1;
       ++VAR_33;
       continue;
     }
   VAR_23 = VAR_0;
 }


      VAR_36 = VAR_31 + FUNC_8 (VAR_17, VAR_29 + VAR_12);
      if (VAR_36 >= VAR_20->size)
 {
   FUNC_3)
     (FUNC_2("%B(%A+0x%lx): Stabs entry has invalid string index."),
      VAR_17, VAR_19, (long) (VAR_29 - VAR_27));
   FUNC_16 (VAR_15);
   goto error_return;
 }
      VAR_38 = (char *) VAR_28 + VAR_36;
      *VAR_34 = FUNC_4 (VAR_18->strings, VAR_38, VAR_13, VAR_13);






      if (VAR_37 == (int) VAR_1)
 {
   bfd_vma VAR_39;
   bfd_vma VAR_40;
   bfd_vma VAR_41 = 0;
   char * VAR_42;
   char * VAR_43;
   int VAR_44;
   bfd_byte * VAR_45;
   struct stab_link_includes_entry * VAR_46;
   struct stab_link_includes_totals * VAR_47;
   struct stab_excl_list * VAR_48;

   VAR_42 = VAR_43 = ((void*)0);
   VAR_39 = VAR_40 = 0;
   VAR_44 = 0;

   for (VAR_45 = VAR_29 + VAR_11;
        VAR_45 < VAR_30;
        VAR_45 += VAR_11)
     {
       int VAR_49;

       VAR_49 = VAR_45[VAR_14];
       if (VAR_49 == 0)
  break;
       else if (VAR_49 == (int) VAR_3)
  continue;
       else if (VAR_49 == (int) VAR_2)
  {
    if (VAR_44 == 0)
      break;
    --VAR_44;
  }
       else if (VAR_49 == (int) VAR_1)
  ++VAR_44;
       else if (VAR_44 == 0)
  {
    const char *VAR_50;

    VAR_50 = ((char *) VAR_28
    + VAR_31
    + FUNC_8 (VAR_17, VAR_45 + VAR_12));
    for (; *VAR_50 != '\0'; VAR_50++)
      {
        if (VAR_40 >= VAR_41)
   {
     VAR_41 += 32 * 1024;
     VAR_42 = FUNC_15 (VAR_42, VAR_41);
     if (VAR_42 == ((void*)0))
       goto error_return;
     VAR_43 = VAR_42 + VAR_40;
   }
        * VAR_43 ++ = * VAR_50;
        VAR_39 += *VAR_50;
        VAR_40 ++;
        if (*VAR_50 == '(')
   {

     ++VAR_50;
     while (FUNC_1 (*VAR_50))
       ++VAR_50;
     --VAR_50;
   }
      }
  }
     }

   FUNC_0 (VAR_40 == (bfd_vma) (VAR_43 - VAR_42));



   VAR_46 = (struct stab_link_includes_entry * )
     FUNC_10 (&VAR_18->includes, VAR_38, VAR_13, VAR_13);
   if (VAR_46 == ((void*)0))
     goto error_return;

   for (VAR_47 = VAR_46->totals; VAR_47 != ((void*)0); VAR_47 = VAR_47->next)
     if (VAR_47->sum_chars == VAR_39
  && VAR_47->num_chars == VAR_40
  && FUNC_18 (VAR_47->symb, VAR_42, VAR_40) == 0)
       break;



   VAR_25 = sizeof *VAR_48;
   VAR_48 = FUNC_7 (VAR_17, VAR_25);
   if (VAR_48 == ((void*)0))
     goto error_return;
   VAR_48->offset = VAR_29 - VAR_27;
   VAR_48->val = VAR_39;
   VAR_48->type = (int) VAR_1;
   VAR_48->next = VAR_26->excls;
   VAR_26->excls = VAR_48;

   if (VAR_47 == ((void*)0))
     {


       VAR_47 = FUNC_9 (&VAR_18->includes, sizeof *VAR_47);
       if (VAR_47 == ((void*)0))
  goto error_return;
       VAR_47->sum_chars = VAR_39;
       VAR_47->num_chars = VAR_40;
       VAR_47->symb = FUNC_15 (VAR_42, VAR_40);
       VAR_47->next = VAR_46->totals;
       VAR_46->totals = VAR_47;
     }
   else
     {
       bfd_size_type *VAR_51;



       VAR_48->type = (int) VAR_3;


       FUNC_17 (VAR_42);



       VAR_44 = 0;
       for (VAR_45 = VAR_29 + VAR_11, VAR_51 = VAR_34 + 1;
     VAR_45 < VAR_30;
     VAR_45 += VAR_11, ++VAR_51)
  {
    int VAR_52;

    VAR_52 = VAR_45[VAR_14];

    if (VAR_52 == (int) VAR_2)
      {
        if (VAR_44 == 0)
   {
     *VAR_51 = (bfd_size_type) -1;
     ++VAR_33;
     break;
   }
        --VAR_44;
      }
    else if (VAR_52 == (int) VAR_1)
      ++VAR_44;
    else if (VAR_52 == (int) VAR_3)

      continue;
    else if (VAR_44 == 0)
      {
        *VAR_51 = (bfd_size_type) -1;
        ++VAR_33;
      }
  }
     }
 }
    }

  FUNC_17 (VAR_27);
  VAR_27 = ((void*)0);
  FUNC_17 (VAR_28);
  VAR_28 = ((void*)0);
  VAR_19->size = (VAR_24 - VAR_33) * VAR_11;
  if (VAR_19->size == 0)
    VAR_19->flags |= VAR_5 | VAR_7;
  VAR_20->flags |= VAR_5 | VAR_7;
  VAR_18->stabstr->size = FUNC_6 (VAR_18->strings);




  if (VAR_33 != 0)
    {
      bfd_size_type VAR_53, VAR_54;
      bfd_size_type *VAR_55;

      VAR_25 = VAR_24 * sizeof (bfd_size_type);
      VAR_26->cumulative_skips = FUNC_7 (VAR_17, VAR_25);
      if (VAR_26->cumulative_skips == ((void*)0))
 goto error_return;

      VAR_55 = VAR_26->cumulative_skips;
      VAR_34 = VAR_26->stridxs;
      VAR_54 = 0;

      for (VAR_53 = 0; VAR_53 < VAR_24; VAR_53++, VAR_55++, VAR_34++)
 {
   *VAR_55 = VAR_54;
   if (*VAR_34 == (bfd_size_type) -1)
     VAR_54 += VAR_11;
 }

      FUNC_0 (VAR_54 != 0);
    }

  return VAR_13;

 error_return:
  if (VAR_27 != ((void*)0))
    FUNC_17 (VAR_27);
  if (VAR_28 != ((void*)0))
    FUNC_17 (VAR_28);
  return VAR_0;
}

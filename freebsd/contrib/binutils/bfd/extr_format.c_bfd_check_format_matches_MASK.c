
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int file_ptr ;
struct TYPE_16__ {char* name; } ;
typedef TYPE_1__ const bfd_target ;
typedef int bfd_size_type ;
typedef scalar_t__ bfd_format ;
typedef scalar_t__ bfd_error_type ;
typedef int bfd_boolean ;
struct TYPE_17__ {scalar_t__ format; scalar_t__ direction; int output_has_begun; TYPE_1__ const* xvec; int target_defaulted; } ;
typedef TYPE_2__ bfd ;


 TYPE_1__ const* FUNC_0 (TYPE_2__*,int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ const** VAR_6 ;
 TYPE_1__ const** VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__ const** FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_1__ const** VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (TYPE_1__ const**) ;
 int FUNC_7 (TYPE_1__ const**,TYPE_1__ const**,int) ;

bfd_boolean
FUNC_8 (bfd *VAR_17, bfd_format VAR_18, char ***VAR_19)
{
  extern const bfd_target VAR_20;
  const bfd_target * const *VAR_21;
  const bfd_target **VAR_22 = ((void*)0);
  const bfd_target *VAR_23, *VAR_24, *VAR_25;
  int VAR_26;
  int VAR_27;

  if (!FUNC_3 (VAR_17)
      || (unsigned int) VAR_17->format >= (unsigned int) VAR_14)
    {
      FUNC_5 (VAR_10);
      return VAR_0;
    }

  if (VAR_17->format != VAR_15)
    return VAR_17->format == VAR_18;



  VAR_23 = VAR_17->xvec;
  VAR_26 = 0;
  VAR_27 = VAR_4;

  if (VAR_19)
    {
      bfd_size_type VAR_28;

      *VAR_19 = ((void*)0);
      VAR_28 = sizeof (*VAR_22) * 2 * VAR_4;
      VAR_22 = FUNC_2 (VAR_28);
      if (!VAR_22)
 return VAR_0;
    }

  VAR_24 = 0;
  VAR_25 = 0;


  VAR_17->format = VAR_18;


  if (!VAR_17->target_defaulted)
    {
      if (FUNC_4 (VAR_17, (file_ptr) 0, VAR_1) != 0)
 {
   if (VAR_19)
     FUNC_6 (VAR_22);
   return VAR_0;
 }

      VAR_24 = FUNC_0 (VAR_17, VAR_3, (VAR_17));

      if (VAR_24)
 {
   VAR_17->xvec = VAR_24;

   if (VAR_19)
     FUNC_6 (VAR_22);






   if (VAR_17->direction == VAR_16)
     VAR_17->output_has_begun = VAR_2;

   return VAR_2;
 }
      if (VAR_18 == VAR_5 && VAR_23 == &VAR_20)
 {
   VAR_17->xvec = VAR_23;
   VAR_17->format = VAR_15;

   if (VAR_19)
     FUNC_6 (VAR_22);

   FUNC_5 (VAR_9);

   return VAR_0;
 }
    }

  for (VAR_21 = VAR_13; *VAR_21 != ((void*)0); VAR_21++)
    {
      const bfd_target *VAR_29;
      bfd_error_type VAR_30;


      if (*VAR_21 == &VAR_20
   || (!VAR_17->target_defaulted && *VAR_21 == VAR_23))
 continue;

      VAR_17->xvec = *VAR_21;

      if (FUNC_4 (VAR_17, (file_ptr) 0, VAR_1) != 0)
 {
   if (VAR_19)
     FUNC_6 (VAR_22);
   return VAR_0;
 }





      FUNC_5 (VAR_11);

      VAR_29 = FUNC_0 (VAR_17, VAR_3, (VAR_17));

      if (VAR_29)
 {

   VAR_24 = VAR_29;




   if (VAR_29 == VAR_7[0])
     {
       VAR_26 = 1;
       break;
     }

   if (VAR_19)
     VAR_22[VAR_26] = VAR_29;

   VAR_26++;
 }
      else if ((VAR_30 = FUNC_1 ()) == VAR_12
        || VAR_30 == VAR_8)
 {



   if (VAR_25 != VAR_7[0])
     VAR_25 = *VAR_21;
   if (VAR_19)
     VAR_22[VAR_27] = *VAR_21;
   VAR_27++;
 }
      else if (VAR_30 != VAR_11)
 {
   VAR_17->xvec = VAR_23;
   VAR_17->format = VAR_15;

   if (VAR_19)
     FUNC_6 (VAR_22);

   return VAR_0;
 }
    }

  if (VAR_26 == 0)
    {

      VAR_24 = VAR_25;

      if (VAR_24 == VAR_7[0])
 {
   VAR_26 = 1;
 }
      else
 {
   VAR_26 = VAR_27 - VAR_4;

   if (VAR_19 && VAR_26 > 1)
     FUNC_7 (VAR_22,
      VAR_22 + VAR_4,
      sizeof (*VAR_22) * VAR_26);
 }
    }

  if (VAR_26 > 1
      && VAR_6 != ((void*)0)
      && VAR_19)
    {
      const bfd_target * const *VAR_31 = VAR_6;

      while ((VAR_24 = *VAR_31++) != ((void*)0))
 {
   int VAR_32 = VAR_26;

   while (--VAR_32 >= 0)
     if (VAR_22[VAR_32] == VAR_24)
       break;

   if (VAR_32 >= 0)
     {
       VAR_26 = 1;
       break;
     }
 }
    }

  if (VAR_26 == 1)
    {
      VAR_17->xvec = VAR_24;

      if (VAR_19)
 FUNC_6 (VAR_22);






      if (VAR_17->direction == VAR_16)
 VAR_17->output_has_begun = VAR_2;

      return VAR_2;
    }

  VAR_17->xvec = VAR_23;
  VAR_17->format = VAR_15;

  if (VAR_26 == 0)
    {
      FUNC_5 (VAR_9);

      if (VAR_19)
 FUNC_6 (VAR_22);
    }
  else
    {
      FUNC_5 (VAR_8);

      if (VAR_19)
 {
   *VAR_19 = (char **) VAR_22;
   VAR_22[VAR_26] = ((void*)0);


   while (--VAR_26 >= 0)
     {
       const char *VAR_33 = VAR_22[VAR_26]->name;
       *(const char **) &VAR_22[VAR_26] = VAR_33;
     }
 }
    }

  return VAR_0;
}

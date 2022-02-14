
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct z_candidate {scalar_t__ viable; scalar_t__ fn; size_t num_convs; TYPE_3__** convs; TYPE_3__* second_conv; scalar_t__ template_decl; } ;
typedef scalar_t__ conversion_rank ;
struct TYPE_9__ {TYPE_1__* next; } ;
struct TYPE_10__ {scalar_t__ kind; scalar_t__ type; TYPE_2__ u; } ;
typedef TYPE_3__ conversion ;
struct TYPE_8__ {scalar_t__ type; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct z_candidate*,struct z_candidate*) ;
 scalar_t__ VAR_5 ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (int) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int ,int ,scalar_t__) ;
 int VAR_9 ;
 int FUNC_20 (char*) ;
 int FUNC_21 (int ,struct z_candidate*) ;
 int FUNC_22 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_23 (TYPE_3__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_24 (int ,char*,scalar_t__,...) ;

__attribute__((used)) static int
FUNC_25 (struct z_candidate *VAR_12, struct z_candidate *VAR_13, bool VAR_14)
{
  int VAR_15 = 0;
  int VAR_16 = 0, VAR_17 = 0;
  size_t VAR_18;
  size_t VAR_19;



  if (VAR_12->viable > VAR_13->viable)
    return 1;
  if (VAR_12->viable < VAR_13->viable)
    return -1;



  if (VAR_12->fn == VAR_13->fn
      && (FUNC_5 (VAR_12->fn)))
    return 1;
  VAR_19 = VAR_12->num_convs;
  if (VAR_19 != VAR_13->num_convs)
    {
      int VAR_20 = FUNC_4 (VAR_12->fn);
      int VAR_21 = FUNC_4 (VAR_13->fn);

      FUNC_17 (VAR_20 != VAR_21);

      if (VAR_20)
 VAR_17 = 1;
      else
 {
   VAR_16 = 1;
   --VAR_19;
 }
    }

  for (VAR_18 = 0; VAR_18 < VAR_19; ++VAR_18)
    {
      conversion *VAR_22 = VAR_12->convs[VAR_18 + VAR_16];
      conversion *VAR_23 = VAR_13->convs[VAR_18 + VAR_17];
      int VAR_24 = FUNC_15 (VAR_22, VAR_23);

      if (VAR_24 != 0)
 {
   if (VAR_11
       && (FUNC_0 (VAR_22) + FUNC_0 (VAR_23)
    == VAR_8 + VAR_7)
       && VAR_22->kind == VAR_5
       && VAR_23->kind == VAR_5
       && FUNC_8 (VAR_22->type) == VAR_2
       && FUNC_8 (VAR_23->type) == VAR_2
       && (FUNC_10 (VAR_22->type)
    == FUNC_10 (VAR_23->type))
       && (FUNC_11 (VAR_22->u.next->type)
    || (FUNC_8 (VAR_22->u.next->type)
        == VAR_0)))
     {
       tree VAR_25 = VAR_22->u.next->type;
       tree VAR_26, VAR_27;
       struct z_candidate *VAR_28, *VAR_29;
       if (VAR_24 > 0)
  VAR_26 = VAR_22->type, VAR_27 = VAR_23->type,
    VAR_28 = VAR_12, VAR_29 = VAR_13;
       else
  VAR_26 = VAR_23->type, VAR_27 = VAR_22->type,
    VAR_28 = VAR_13, VAR_29 = VAR_12;

       if (VAR_14)
  {
    FUNC_24 (VAR_4, "passing %qT chooses %qT over %qT",
      VAR_25, VAR_26, VAR_27);
    FUNC_24 (VAR_4, "  in call to %qD", VAR_28->fn);
  }
       else
  FUNC_13 (VAR_28, VAR_29);
     }

   if (VAR_15 && VAR_24 != VAR_15)
     {
       VAR_15 = 0;
       goto tweak;
     }
   VAR_15 = VAR_24;
 }
    }




  if (VAR_15 && VAR_10 && VAR_12->second_conv
      && (!FUNC_1 (VAR_12->fn) || !FUNC_1 (VAR_13->fn))
      && VAR_15 != FUNC_15 (VAR_12->second_conv, VAR_13->second_conv))
    {
      struct z_candidate *VAR_30, *VAR_31;
      bool VAR_32 = 0;

      if (VAR_15 == 1)
 VAR_30 = VAR_12, VAR_31 = VAR_13;
      else
 VAR_30 = VAR_13, VAR_31 = VAR_12;




      if (FUNC_2 (VAR_30->fn) == FUNC_2 (VAR_31->fn)
   && !FUNC_1 (VAR_30->fn) && !FUNC_1 (VAR_31->fn))
 {
   tree VAR_33 = FUNC_9 (FUNC_9 (VAR_31->fn));
   tree VAR_34 = FUNC_9 (FUNC_9 (VAR_30->fn));

   if (FUNC_8 (VAR_33) == FUNC_8 (VAR_34) && FUNC_6 (VAR_33))
     {
       VAR_33 = FUNC_9 (VAR_33);
       VAR_34 = FUNC_9 (VAR_34);
     }
   if (!FUNC_14 (VAR_33, VAR_34))
     VAR_32 = 1;
 }
      else
 VAR_32 = 1;

      if (!VAR_32)
        ;
      else if (VAR_14)
 {
   tree VAR_35 = FUNC_23 (VAR_30->convs[0]);
   if (! FUNC_1 (VAR_30->fn))
     VAR_35 = FUNC_9 (VAR_35);
   FUNC_24 (VAR_3, "choosing %qD over %qD", VAR_30->fn, VAR_31->fn);
   FUNC_24 (VAR_3, "  for conversion from %qT to %qT",
     VAR_35, VAR_30->second_conv->type);
   FUNC_18 ("  because conversion sequence for the argument is better");
 }
      else
 FUNC_13 (VAR_30, VAR_31);
    }

  if (VAR_15)
    return VAR_15;





  if (!VAR_12->template_decl && VAR_13->template_decl)
    return 1;
  else if (VAR_12->template_decl && !VAR_13->template_decl)
    return -1;






  if (VAR_12->template_decl && VAR_13->template_decl)
    {
      VAR_15 = FUNC_19
 (FUNC_7 (VAR_12->template_decl),
  FUNC_7 (VAR_13->template_decl),




  VAR_12->num_convs + FUNC_1 (VAR_12->fn));
      if (VAR_15)
 return VAR_15;
    }
  if (VAR_12->second_conv)
    {
      VAR_15 = FUNC_15 (VAR_12->second_conv, VAR_13->second_conv);
      if (VAR_15)
 return VAR_15;
    }
  if (FUNC_8 (VAR_12->fn) == VAR_1
      || FUNC_8 (VAR_13->fn) == VAR_1)
    {
      for (VAR_18 = 0; VAR_18 < VAR_19; ++VAR_18)
 if (!FUNC_22 (VAR_12->convs[VAR_18]->type,
     VAR_13->convs[VAR_18]->type))
   break;
      if (VAR_18 == VAR_12->num_convs)
 {
   if (VAR_12->fn == VAR_13->fn)

     return 1;
   else if (FUNC_8 (VAR_12->fn) == VAR_1)

     return -1;
   else

     return 1;
 }
    }



  if (FUNC_3 (VAR_12->fn) && FUNC_3 (VAR_13->fn)
      && FUNC_16 (VAR_12->fn, VAR_13->fn))
    return 1;

tweak:



  if (!VAR_9)
    {
      conversion_rank VAR_36 = VAR_6, VAR_37 = VAR_6;
      struct z_candidate *VAR_38 = 0, *VAR_39 = 0;

      for (VAR_18 = 0; VAR_18 < VAR_19; ++VAR_18)
 {
   if (FUNC_0 (VAR_12->convs[VAR_18+VAR_16]) > VAR_36)
     VAR_36 = FUNC_0 (VAR_12->convs[VAR_18+VAR_16]);
   if (FUNC_0 (VAR_13->convs[VAR_18 + VAR_17]) > VAR_37)
     VAR_37 = FUNC_0 (VAR_13->convs[VAR_18 + VAR_17]);
 }
      if (VAR_36 < VAR_37)
 VAR_15 = 1, VAR_38 = VAR_12, VAR_39 = VAR_13;
      if (VAR_36 > VAR_37)
 VAR_15 = -1, VAR_38 = VAR_13, VAR_39 = VAR_12;
      if (VAR_15)
 {
   if (VAR_14)
     {
       FUNC_20 ("ISO C++ says that these are ambiguous, even though the worst conversion for the first is better than the worst conversion for the second:");



       FUNC_21 (FUNC_12("candidate 1:"), VAR_38);
       FUNC_21 (FUNC_12("candidate 2:"), VAR_39);
     }
   else
     FUNC_13 (VAR_38, VAR_39);
   return VAR_15;
 }
    }

  FUNC_17 (!VAR_15);
  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef scalar_t__ conversion_rank ;
struct TYPE_12__ {TYPE_3__* next; } ;
struct TYPE_13__ {scalar_t__ user_conv_p; scalar_t__ rank; scalar_t__ kind; scalar_t__ type; TYPE_2__ u; TYPE_1__* cand; scalar_t__ ellipsis_p; } ;
typedef TYPE_3__ conversion ;
struct TYPE_11__ {scalar_t__ fn; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_13 (TYPE_3__**) ;
 scalar_t__ FUNC_14 (TYPE_3__**) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_18 (conversion *VAR_7, conversion *VAR_8)
{
  tree VAR_9;
  tree VAR_10;
  tree VAR_11;
  tree VAR_12;
  tree VAR_13 = VAR_0;
  tree VAR_14 = VAR_0;
  tree VAR_15 = VAR_0;
  tree VAR_16 = VAR_0;
  conversion_rank VAR_17, VAR_18;




  tree VAR_19;
  tree VAR_20;


  FUNC_13 (&VAR_7);
  FUNC_13 (&VAR_8);


  VAR_19 = FUNC_14 (&VAR_7);
  VAR_20 = FUNC_14 (&VAR_8);
  VAR_17 = FUNC_1 (VAR_7);
  VAR_18 = FUNC_1 (VAR_8);

  if (VAR_17 > VAR_18)
    return -1;
  else if (VAR_17 < VAR_18)
    return 1;

  if (VAR_17 == VAR_6)
    {



      if (VAR_7->user_conv_p > VAR_8->user_conv_p
   || VAR_7->rank > VAR_8->rank)
 return -1;
      else if (VAR_7->user_conv_p < VAR_8->user_conv_p
        || VAR_7->rank < VAR_8->rank)
 return 1;


    }

  if (VAR_7->ellipsis_p)

    return 0;







  if (VAR_7->user_conv_p)
    {
      conversion *VAR_21;
      conversion *VAR_22;

      for (VAR_21 = VAR_7; VAR_21->kind != VAR_5; VAR_21 = VAR_21->u.next)
 if (VAR_21->kind == VAR_2)
   return 0;
      for (VAR_22 = VAR_8; VAR_22->kind != VAR_5; VAR_22 = VAR_22->u.next)
 if (VAR_22->kind == VAR_2)
   return 0;

      if (VAR_21->cand->fn != VAR_22->cand->fn)
 return 0;



      VAR_9 = VAR_21->type;
      VAR_10 = VAR_22->type;
    }
  else
    {
      conversion *VAR_23;
      conversion *VAR_24;
      VAR_23 = VAR_7;
      while (VAR_23->kind != VAR_3)
 VAR_23 = VAR_23->u.next;
      VAR_9 = VAR_23->type;

      VAR_24 = VAR_8;
      while (VAR_24->kind != VAR_3)
 VAR_24 = VAR_24->u.next;
      VAR_10 = VAR_24->type;
    }

  if (FUNC_17 (VAR_9, VAR_10))
    {
      if (FUNC_12 (VAR_7, VAR_8))
 return 1;
      if (FUNC_12 (VAR_8, VAR_7))
 return -1;
    }
  if (VAR_7->rank < VAR_8->rank)
    return 1;
  else if (VAR_8->rank < VAR_7->rank)
    return -1;

  VAR_11 = VAR_7->type;
  VAR_12 = VAR_8->type;

  if (FUNC_8 (VAR_9)
      && FUNC_8 (VAR_10)
      && FUNC_8 (VAR_11)
      && FUNC_8 (VAR_12))
    {
      VAR_13 = FUNC_4 (VAR_9);
      VAR_14 = FUNC_4 (VAR_10);
      VAR_15 = FUNC_4 (VAR_11);
      VAR_16 = FUNC_4 (VAR_12);
    }




  else if ((FUNC_7 (VAR_9) && FUNC_7 (VAR_10)
     && FUNC_7 (VAR_11) && FUNC_7 (VAR_12))
    || (FUNC_5 (VAR_9)
        && FUNC_5 (VAR_10)
        && FUNC_5 (VAR_11)
        && FUNC_5 (VAR_12)))
    {
      VAR_15 = FUNC_6 (VAR_9);
      VAR_16 = FUNC_6 (VAR_10);
      VAR_13 = FUNC_6 (VAR_11);
      VAR_14 = FUNC_6 (VAR_12);
    }

  if (VAR_13 != VAR_0
      && FUNC_2 (FUNC_3 (VAR_13))
      && FUNC_2 (FUNC_3 (VAR_14)))
    {
      if (FUNC_3 (VAR_15) == VAR_1
   && FUNC_3 (VAR_16) == VAR_1)
 {
   if (FUNC_11 (VAR_13,
     VAR_14))
     return -1;
   else if (FUNC_11 (VAR_14,
          VAR_13))
     return 1;
 }
      else if (FUNC_3 (VAR_15) == VAR_1
        || FUNC_3 (VAR_16) == VAR_1)
 {
   if (FUNC_17 (VAR_13, VAR_14))
     {
       if (FUNC_3 (VAR_16) == VAR_1)
  {
    if (FUNC_11 (VAR_13,
      VAR_15))
      return 1;
  }

       else if (FUNC_11 (VAR_13,
       VAR_16))
  return -1;
     }
 }
      else if (FUNC_2 (FUNC_3 (VAR_15))
        && FUNC_2 (FUNC_3 (VAR_16)))
 {
   if (FUNC_17 (VAR_13, VAR_14))
     {
       if (FUNC_11 (VAR_15,
         VAR_16))
  return 1;
       else if (FUNC_11 (VAR_16,
       VAR_15))
  return -1;
     }
   else if (FUNC_17 (VAR_15, VAR_16))
     {
       if (FUNC_11 (VAR_14,
         VAR_13))
  return 1;
       else if (FUNC_11 (VAR_13,
       VAR_14))
  return -1;
     }
 }
    }
  else if (FUNC_0 (FUNC_15 (VAR_9))
    && FUNC_17 (VAR_9, VAR_10))
    {
      tree VAR_25 = FUNC_15 (VAR_9);
      if (FUNC_11 (VAR_25, VAR_11)
   && FUNC_11 (VAR_25, VAR_12))
 {
   if (FUNC_11 (VAR_11, VAR_12))
     return 1;
   else if (FUNC_11 (VAR_12, VAR_11))
     return -1;
 }
    }
  else if (FUNC_0 (FUNC_15 (VAR_11))
    && FUNC_17 (VAR_11, VAR_12))
    {
      tree VAR_26 = FUNC_15 (VAR_11);
      if (FUNC_11 (VAR_9, VAR_26)
   && FUNC_11 (VAR_10, VAR_26))
 {
   if (FUNC_11 (VAR_10, VAR_9))
     return 1;
   else if (FUNC_11 (VAR_9, VAR_10))
     return -1;
 }
    }







  if (VAR_7->kind == VAR_4
      && VAR_8->kind == VAR_4
      && FUNC_17 (VAR_9, VAR_10))
    return FUNC_9 (VAR_11, VAR_12);
  if (VAR_19 && VAR_20
      && FUNC_16 (VAR_11, VAR_12))
    return FUNC_10 (VAR_20, VAR_19);


  return 0;
}

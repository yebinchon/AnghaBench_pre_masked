
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_7__ {TYPE_2__* next; } ;
struct TYPE_8__ {scalar_t__ kind; scalar_t__ rank; int bad_p; int base_p; int need_temporary_p; TYPE_1__ u; } ;
typedef TYPE_2__ conversion ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int VAR_12 ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 TYPE_2__* FUNC_18 (scalar_t__,scalar_t__,TYPE_2__*) ;
 TYPE_2__* FUNC_19 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_24 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_25 (scalar_t__,scalar_t__) ;
 int FUNC_26 (int ,int ) ;
 scalar_t__ FUNC_27 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_28 (scalar_t__) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_29 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_30 (scalar_t__) ;
 scalar_t__ FUNC_31 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_32 (scalar_t__) ;
 scalar_t__ FUNC_33 (scalar_t__) ;
 scalar_t__ FUNC_34 (scalar_t__) ;
 scalar_t__ FUNC_35 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_36 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_37 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_38 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_39 (scalar_t__) ;
 int VAR_23 ;
 scalar_t__ FUNC_40 (scalar_t__) ;
 scalar_t__ FUNC_41 (scalar_t__) ;
 scalar_t__ FUNC_42 (scalar_t__) ;
 scalar_t__ FUNC_43 (scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_24 ;

__attribute__((used)) static conversion *
FUNC_44 (tree VAR_25, tree VAR_26, tree VAR_27, bool VAR_28,
       int VAR_29)
{
  enum tree_code VAR_30, VAR_31;
  conversion *VAR_32;
  bool VAR_33 = 0;

  VAR_25 = FUNC_33 (VAR_25);
  if (FUNC_6 (VAR_26) == VAR_11)
    {
      VAR_33 = 1;
      VAR_26 = FUNC_7 (VAR_26);
    }
  VAR_25 = FUNC_39 (VAR_25);
  VAR_26 = FUNC_39 (VAR_26);

  if ((FUNC_10 (VAR_25) || FUNC_12 (VAR_25))
      && VAR_27 && FUNC_42 (VAR_27))
    {
      VAR_27 = FUNC_29 (VAR_25, VAR_27, VAR_23);
      if (VAR_27 == VAR_22)
 return ((void*)0);
      VAR_26 = FUNC_7 (VAR_27);
    }

  VAR_30 = FUNC_6 (VAR_26);
  VAR_31 = FUNC_6 (VAR_25);

  VAR_32 = FUNC_19 (VAR_26, VAR_27);
  if (VAR_30 == VAR_5 || VAR_30 == VAR_0)
    {
      VAR_26 = FUNC_40 (VAR_26);
      VAR_30 = FUNC_6 (VAR_26);
      VAR_32 = FUNC_18 (VAR_14, VAR_26, VAR_32);
    }
  else if (VAR_33 || (VAR_27 && FUNC_32 (VAR_27)))
    {
      if (VAR_27)
 {
   tree VAR_34;
   VAR_34 = FUNC_30 (VAR_27);
   if (VAR_34)
     {
       VAR_26 = FUNC_39 (VAR_34);
       VAR_30 = FUNC_6 (VAR_26);
     }
 }
      VAR_32 = FUNC_18 (VAR_18, VAR_26, VAR_32);
    }


  if (VAR_31 == VAR_3 && VAR_30 == VAR_3)
    {



      conversion *VAR_35 = FUNC_44
 (FUNC_7 (VAR_25), FUNC_7 (VAR_26), VAR_8, VAR_28, VAR_29);

      if (VAR_35)
 {
   VAR_32 = FUNC_18 (VAR_35->kind, VAR_25, VAR_32);
   VAR_32->rank = VAR_35->rank;
 }
      else
 VAR_32 = ((void*)0);

      return VAR_32;
    }

  if (FUNC_37 (VAR_26, VAR_25))
    return VAR_32;


  if ((VAR_31 == VAR_9 || VAR_31 == VAR_1 || FUNC_16 (VAR_25))
      && VAR_27 && FUNC_34 (VAR_27))
    VAR_32 = FUNC_18 (VAR_19, VAR_25, VAR_32);
  else if ((VAR_31 == VAR_6 && VAR_30 == VAR_9)
    || (VAR_31 == VAR_9 && VAR_30 == VAR_6))
    {


      VAR_32 = FUNC_18 (VAR_19, VAR_25, VAR_32);
      VAR_32->bad_p = 1;
    }
  else if (VAR_31 == VAR_4 && VAR_30 == VAR_6)
    {


      VAR_32 = FUNC_18 (VAR_19, VAR_25, VAR_32);
      VAR_32->bad_p = 1;
    }
  else if ((VAR_31 == VAR_9 && VAR_30 == VAR_9)
    || (FUNC_14 (VAR_25) && FUNC_14 (VAR_26)))
    {
      tree VAR_36;
      tree VAR_37;

      if (VAR_31 == VAR_9
   && FUNC_36 (FUNC_7 (VAR_26),
       FUNC_7 (VAR_25)))
 ;
      else if (FUNC_17 (FUNC_7 (VAR_25))
        && !FUNC_14 (VAR_26)
        && FUNC_6 (FUNC_7 (VAR_26)) != VAR_5)
 {
   VAR_26 = FUNC_21
     (FUNC_27 (VAR_24,
          FUNC_28 (FUNC_7 (VAR_26))));
   VAR_32 = FUNC_18 (VAR_16, VAR_26, VAR_32);
 }
      else if (FUNC_14 (VAR_26))
 {
   tree VAR_38 = FUNC_13 (VAR_26);
   tree VAR_39 = FUNC_13 (VAR_25);

   if (FUNC_2 (VAR_38, VAR_39)
       && (FUNC_36
    (FUNC_15 (VAR_26),
     FUNC_15 (VAR_25))))
     {
       VAR_26 = FUNC_22 (VAR_39,
     FUNC_15 (VAR_26));
       VAR_32 = FUNC_18 (VAR_15, VAR_26, VAR_32);
     }
   else if (!FUNC_37 (VAR_38, VAR_39))
     return ((void*)0);
 }
      else if (FUNC_4 (FUNC_7 (VAR_26))
        && FUNC_4 (FUNC_7 (VAR_25))
        && FUNC_2 (FUNC_7 (VAR_25), FUNC_7 (VAR_26))
        && FUNC_1 (FUNC_7 (VAR_26)))
 {
   VAR_26 =
     FUNC_27 (FUNC_7 (VAR_25),
         FUNC_28 (FUNC_7 (VAR_26)));
   VAR_26 = FUNC_21 (VAR_26);
   VAR_32 = FUNC_18 (VAR_16, VAR_26, VAR_32);
   VAR_32->base_p = 1;
 }

      if (VAR_31 == VAR_9)
 {
   VAR_36 = FUNC_7 (VAR_25);
   VAR_37 = FUNC_7 (VAR_26);
 }
      else
 {
   VAR_36 = FUNC_15 (VAR_25);
   VAR_37 = FUNC_15 (VAR_26);
 }

      if (FUNC_37 (VAR_26, VAR_25))
         ;
      else if (VAR_28 && FUNC_25 (VAR_25, VAR_26))



 VAR_32 = FUNC_18 (VAR_17, VAR_25, VAR_32);
      else if (!VAR_28 && FUNC_24 (VAR_36, VAR_37))
 VAR_32 = FUNC_18 (VAR_17, VAR_25, VAR_32);
      else if (VAR_27 && FUNC_38 (VAR_25, VAR_27, 0))

 VAR_32 = FUNC_18 (VAR_17, VAR_25, VAR_32);
      else if (FUNC_35 (VAR_36, VAR_37))
 {
   VAR_32 = FUNC_18 (VAR_16, VAR_25, VAR_32);
   VAR_32->bad_p = 1;
 }
      else
 return ((void*)0);

      VAR_26 = VAR_25;
    }
  else if (FUNC_12 (VAR_25) && FUNC_12 (VAR_26))
    {
      tree VAR_40 = FUNC_7 (FUNC_11 (VAR_26));
      tree VAR_41 = FUNC_7 (FUNC_11 (VAR_25));
      tree VAR_42 = FUNC_7 (FUNC_8 (FUNC_9 (VAR_40)));
      tree VAR_43 = FUNC_7 (FUNC_8 (FUNC_9 (VAR_41)));

      if (!FUNC_2 (VAR_42, VAR_43)
   || !FUNC_37 (FUNC_7 (VAR_40), FUNC_7 (VAR_41))
   || !FUNC_26 (FUNC_5 (FUNC_9 (VAR_40)),
    FUNC_5 (FUNC_9 (VAR_41)))
   || FUNC_28 (VAR_42) != FUNC_28 (VAR_43))
 return ((void*)0);

      VAR_26 = FUNC_27 (VAR_43, FUNC_28 (VAR_42));
      VAR_26 = FUNC_20 (VAR_26,
      FUNC_7 (VAR_40),
      FUNC_5 (FUNC_9 (VAR_40)));
      VAR_26 = FUNC_23 (FUNC_21 (VAR_26));
      VAR_32 = FUNC_18 (VAR_15, VAR_26, VAR_32);
      VAR_32->base_p = 1;
    }
  else if (VAR_31 == VAR_2)
    {




      if (FUNC_0 (VAR_26)
   || VAR_30 == VAR_4
   || VAR_30 == VAR_9

   || VAR_30 == VAR_1
   || FUNC_16 (VAR_26))
 {
   VAR_32 = FUNC_18 (VAR_19, VAR_25, VAR_32);
   if (VAR_30 == VAR_9
       || FUNC_14 (VAR_26)
       || (FUNC_12 (VAR_26)
    && VAR_32->rank < VAR_20))
     VAR_32->rank = VAR_20;
   return VAR_32;
 }

      return ((void*)0);
    }


  else if (VAR_31 == VAR_6 || VAR_31 == VAR_2
    || VAR_31 == VAR_10)
    {
      if (! (FUNC_3 (VAR_30) || VAR_30 == VAR_10))
 return ((void*)0);
      VAR_32 = FUNC_18 (VAR_19, VAR_25, VAR_32);


      if (FUNC_37 (VAR_25, FUNC_41 (VAR_26))
   && VAR_32->u.next->rank <= VAR_21)
 VAR_32->rank = VAR_21;
    }
  else if (VAR_30 == VAR_12 && VAR_31 == VAR_12
    && FUNC_43 (VAR_26, VAR_25, 0))
    return FUNC_18 (VAR_19, VAR_25, VAR_32);
  else if (!(VAR_29 & VAR_7)
    && FUNC_4 (VAR_25) && FUNC_4 (VAR_26)
    && FUNC_31 (VAR_26, VAR_25))
    {
      if (VAR_32->kind == VAR_18)
 VAR_32 = VAR_32->u.next;
      VAR_32 = FUNC_18 (VAR_13, VAR_25, VAR_32);




      VAR_32->need_temporary_p = 1;
    }
  else
    return ((void*)0);

  return VAR_32;
}

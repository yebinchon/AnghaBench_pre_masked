
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char* tree ;
struct z_candidate {TYPE_1__** convs; } ;
struct TYPE_4__ {scalar_t__ kind; int bad_p; } ;
typedef TYPE_1__ conversion ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (struct z_candidate**,int ,int ,int ,char**,int ) ;
 int FUNC_11 (int ) ;
 char* VAR_7 ;
 int FUNC_12 (int ,char*,char*,char*,char*) ;
 scalar_t__ VAR_8 ;
 char* FUNC_13 (char*,char*,char*,char*,char*) ;
 TYPE_1__* FUNC_14 (char*,char*) ;
 int VAR_9 ;
 void* FUNC_15 (int ) ;
 char* FUNC_16 (char*) ;
 char* FUNC_17 (TYPE_1__*,char*) ;
 char* FUNC_18 (char*,int) ;
 char* FUNC_19 (char*) ;
 int FUNC_20 (char*,char*,...) ;
 char* VAR_10 ;
 scalar_t__ FUNC_21 (char*) ;
 scalar_t__ VAR_11 ;
 char* FUNC_22 (int ) ;
 char* FUNC_23 (char*) ;
 char* FUNC_24 (char*) ;
 scalar_t__ FUNC_25 (char*) ;
 int FUNC_26 (int *,void*) ;
 int FUNC_27 (int ,int ,char*,char*,char*,char*) ;
 scalar_t__ VAR_12 ;
 int FUNC_28 (char*) ;
 char* FUNC_29 (char*,char*) ;
 int FUNC_30 (struct z_candidate*) ;
 scalar_t__ FUNC_31 (char*) ;
 char* FUNC_32 (char*) ;
 scalar_t__ FUNC_33 (char*,char*) ;
 char* FUNC_34 (char*) ;
 struct z_candidate* FUNC_35 (struct z_candidate*,scalar_t__,int*) ;
 char* FUNC_36 (char*) ;
 struct z_candidate* FUNC_37 (struct z_candidate*) ;
 char* FUNC_38 (char*,char*) ;
 char* FUNC_39 (char*) ;
 char* FUNC_40 (char*) ;
 char* VAR_13 ;
 int FUNC_41 (int ,char*,...) ;

tree
FUNC_42 (tree VAR_14, tree VAR_15, tree VAR_16)
{
  tree VAR_17;
  tree VAR_18;
  tree VAR_19 = VAR_5;
  tree VAR_20 = VAR_5;
  bool VAR_21 = 1;
  struct z_candidate *VAR_22 = 0;
  struct z_candidate *VAR_23;
  void *VAR_24;





  if (!VAR_15)
    {
      if (VAR_12)
 FUNC_28 ("ISO C++ forbids omitting the middle term of a ?: expression");


      if (FUNC_31 (VAR_14))
 VAR_15 = VAR_14 = FUNC_36 (VAR_14);
      else
 VAR_15 = VAR_14 = FUNC_34 (VAR_14);
    }





  VAR_14 = FUNC_29 (VAR_7, VAR_14);



  if (FUNC_21 (VAR_14)
      || FUNC_21 (VAR_15)
      || FUNC_21 (VAR_16))
    return VAR_10;
  VAR_17 = FUNC_40 (VAR_15);
  VAR_18 = FUNC_40 (VAR_16);
  if (FUNC_9 (VAR_17) || FUNC_9 (VAR_18))
    {



      if (!FUNC_9 (VAR_17))
 VAR_15 = FUNC_19 (VAR_15);
      if (!FUNC_9 (VAR_18))
 VAR_16 = FUNC_19 (VAR_16);
      VAR_17 = FUNC_3 (VAR_15);
      VAR_18 = FUNC_3 (VAR_16);
      if (FUNC_2 (VAR_15) == VAR_6
   && FUNC_2 (VAR_16) != VAR_6)
 {
   if (!FUNC_9 (VAR_18))
     VAR_16 = FUNC_23 (VAR_16);
   VAR_18 = FUNC_3 (VAR_16);
   VAR_20 = VAR_18;
 }
      else if (FUNC_2 (VAR_15) != VAR_6
        && FUNC_2 (VAR_16) == VAR_6)
 {
   if (!FUNC_9 (VAR_17))
     VAR_15 = FUNC_23 (VAR_15);
   VAR_17 = FUNC_3 (VAR_15);
   VAR_20 = VAR_17;
 }
      else if (FUNC_9 (VAR_17) && FUNC_9 (VAR_18))
 VAR_20 = VAR_13;
      else
 {
   FUNC_20 ("%qE has type %<void%> and is not a throw-expression",
      FUNC_9 (VAR_17) ? VAR_15 : VAR_16);
   return VAR_10;
 }

      VAR_21 = 0;
      goto valid_operands;
    }





  else if (!FUNC_33 (VAR_17, VAR_18)
    && (FUNC_1 (VAR_17) || FUNC_1 (VAR_18)))
    {
      conversion *VAR_25;
      conversion *VAR_26;


      VAR_24 = FUNC_15 (0);

      VAR_25 = FUNC_14 (VAR_15, VAR_16);
      VAR_26 = FUNC_14 (VAR_16, VAR_15);
      if ((VAR_25 && !VAR_25->bad_p
    && VAR_26 && !VAR_26->bad_p)
   || (VAR_25 && VAR_25->kind == VAR_8)
   || (VAR_26 && VAR_26->kind == VAR_8))
 {
   FUNC_20 ("operands to ?: have different types %qT and %qT",
   VAR_17, VAR_18);
   VAR_19 = VAR_10;
 }
      else if (VAR_25 && (!VAR_25->bad_p || !VAR_26))
 {
   VAR_15 = FUNC_17 (VAR_25, VAR_15);
   VAR_15 = FUNC_16 (VAR_15);
   VAR_17 = FUNC_3 (VAR_15);





   if (FUNC_21 (VAR_15))
     VAR_19 = VAR_10;
 }
      else if (VAR_26 && (!VAR_26->bad_p || !VAR_25))
 {
   VAR_16 = FUNC_17 (VAR_26, VAR_16);
   VAR_16 = FUNC_16 (VAR_16);
   VAR_18 = FUNC_3 (VAR_16);
   if (FUNC_21 (VAR_16))
     VAR_19 = VAR_10;
 }


      FUNC_26 (&VAR_9, VAR_24);

      if (VAR_19)
 return VAR_19;
      if ((VAR_25 || VAR_26)
   && FUNC_1 (VAR_17)
   && FUNC_8 (VAR_17) != FUNC_8 (VAR_18))
 VAR_17 = VAR_18 =
   FUNC_18 (VAR_17,
       FUNC_8 (VAR_17)
       | FUNC_8 (VAR_18));
    }





  if (FUNC_31 (VAR_15)
      && FUNC_31 (VAR_16)
      && FUNC_33 (VAR_17, VAR_18))
    {
      VAR_20 = VAR_17;
      goto valid_operands;
    }
  VAR_21 = 0;
  if (!FUNC_33 (VAR_17, VAR_18)
      && (FUNC_1 (VAR_17) || FUNC_1 (VAR_18)))
    {
      tree VAR_27[3];
      conversion *VAR_28;
      bool VAR_29;




      VAR_27[0] = VAR_15;
      VAR_27[1] = VAR_16;
      VAR_27[2] = VAR_14;
      FUNC_10 (&VAR_22,
         VAR_1,
         VAR_4,
         FUNC_11 (VAR_1),
         VAR_27,
         VAR_3);





      VAR_22 = FUNC_35 (VAR_22, VAR_12, &VAR_29);
      if (!VAR_29)
 {
   FUNC_27 (VAR_1, VAR_4, VAR_14, VAR_15, VAR_16, "no match");
   FUNC_30 (VAR_22);
   return VAR_10;
 }
      VAR_23 = FUNC_37 (VAR_22);
      if (!VAR_23)
 {
   FUNC_27 (VAR_1, VAR_4, VAR_14, VAR_15, VAR_16, "no match");
   FUNC_30 (VAR_22);
   return VAR_10;
 }






      VAR_28 = VAR_23->convs[0];
      VAR_14 = FUNC_17 (VAR_28, VAR_14);
      VAR_28 = VAR_23->convs[1];
      VAR_15 = FUNC_17 (VAR_28, VAR_15);
      VAR_28 = VAR_23->convs[2];
      VAR_16 = FUNC_17 (VAR_28, VAR_16);
    }
  VAR_15 = FUNC_23 (VAR_15);
  if (!FUNC_1 (VAR_17))
    VAR_17 = FUNC_3 (VAR_15);

  VAR_16 = FUNC_23 (VAR_16);
  if (!FUNC_1 (VAR_17))
    VAR_18 = FUNC_3 (VAR_16);

  if (VAR_15 == VAR_10 || VAR_16 == VAR_10)
    return VAR_10;







  if (FUNC_33 (VAR_17, VAR_18))
    VAR_20 = VAR_17;





  else if ((FUNC_0 (VAR_17)
     || FUNC_2 (VAR_17) == VAR_2)
    && (FUNC_0 (VAR_18)
        || FUNC_2 (VAR_18) == VAR_2))
    {

      VAR_20 = FUNC_38 (VAR_17,
            VAR_18);

      if (FUNC_2 (VAR_17) == VAR_2
   && FUNC_2 (VAR_18) == VAR_2)
  FUNC_41 (0, "enumeral mismatch in conditional expression: %qT vs %qT",
     VAR_17, VAR_18);
      else if (VAR_11
        && ((FUNC_2 (VAR_17) == VAR_2
      && !FUNC_33 (VAR_18, FUNC_39 (VAR_17)))
     || (FUNC_2 (VAR_18) == VAR_2
         && !FUNC_33 (VAR_17, FUNC_39 (VAR_18)))))
 FUNC_41 (0, "enumeral and non-enumeral type in conditional expression");

      VAR_15 = FUNC_29 (VAR_20, VAR_15);
      VAR_16 = FUNC_29 (VAR_20, VAR_16);
    }
  else if ((FUNC_25 (VAR_15)

     && (FUNC_6 (VAR_18) || FUNC_7 (VAR_18)
  || FUNC_2 (VAR_18) == VAR_0))

    || (FUNC_25 (VAR_16)

        && (FUNC_6 (VAR_17) || FUNC_7 (VAR_17)
     || FUNC_2 (VAR_17) == VAR_0))
    || ((FUNC_6 (VAR_17)
  || FUNC_2 (VAR_17) == VAR_0)
        && (FUNC_6 (VAR_18)
     || FUNC_2 (VAR_18) == VAR_0))

    || (FUNC_5 (VAR_17) && FUNC_5 (VAR_18))
    || (FUNC_4 (VAR_17) && FUNC_4 (VAR_18)))
    {
      VAR_20 = FUNC_13 (VAR_17, VAR_18, VAR_15,
         VAR_16, "conditional expression");
      if (VAR_20 == VAR_10)
 return VAR_10;
      VAR_15 = FUNC_29 (VAR_20, VAR_15);
      VAR_16 = FUNC_29 (VAR_20, VAR_16);
    }

  if (!VAR_20)
    {
      FUNC_20 ("operands to ?: have different types %qT and %qT",
      VAR_17, VAR_18);
      return VAR_10;
    }

 valid_operands:
  VAR_19 = FUNC_22 (FUNC_12 (VAR_1, VAR_20, VAR_14,
         VAR_15, VAR_16));



  if (!VAR_21)
    {




      if (FUNC_1 (FUNC_3 (VAR_19)))
 VAR_19 = FUNC_24 (VAR_19);


      VAR_19 = FUNC_32 (VAR_19);
    }

  return VAR_19;
}

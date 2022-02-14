
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_3__ {char* (* invalid_arg_for_unprototyped_fn ) (scalar_t__,scalar_t__,scalar_t__) ;scalar_t__ (* promote_prototypes ) (scalar_t__) ;} ;
struct TYPE_4__ {TYPE_1__ calls; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 unsigned int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_16 (char const*,...) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 () ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 char* FUNC_22 (scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_2__ VAR_17 ;
 scalar_t__ FUNC_23 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_24 (int ,char*,int,scalar_t__,...) ;

__attribute__((used)) static tree
FUNC_25 (tree VAR_21, tree VAR_22, tree VAR_23, tree VAR_24)
{
  tree VAR_25, VAR_26;
  tree VAR_27 = ((void*)0);
  int VAR_28;
  tree VAR_29;



  if (FUNC_5 (VAR_23) == VAR_0
      && FUNC_5 (FUNC_6 (VAR_23, 0)) == VAR_4)
    VAR_23 = FUNC_6 (VAR_23, 0);


  VAR_29 = FUNC_19 ();




  for (VAR_26 = VAR_22, VAR_25 = VAR_21, VAR_28 = 0;
       VAR_26;
       VAR_26 = FUNC_4 (VAR_26), VAR_28++)
    {
      tree VAR_30 = VAR_25 ? FUNC_8 (VAR_25) : 0;
      tree VAR_31 = FUNC_8 (VAR_26);
      tree VAR_32 = VAR_23;
      int VAR_33 = VAR_28 + 1;
      const char *VAR_34;

      if (VAR_30 == VAR_18)
 {

    if (FUNC_5 (FUNC_7 (VAR_23)) == VAR_1)
     {
       FUNC_16 ("too many arguments to block call");
       break;
     }


   FUNC_16 ("too many arguments to function %qE", VAR_29 ? VAR_29
        : VAR_23);

   break;
 }

      if (VAR_29 && VAR_33 > 2)
 {
   VAR_32 = VAR_29;
   VAR_33 -= 2;
 }

      FUNC_3 (VAR_31);

      VAR_31 = FUNC_20 (VAR_31);

      if (VAR_30 != 0)
 {

   tree VAR_35;

   if (VAR_30 == VAR_13 || !FUNC_0 (VAR_30))
     {
       FUNC_16 ("type of formal parameter %d is incomplete", VAR_28 + 1);
       VAR_35 = VAR_31;
     }
   else
     {


       if (VAR_19 || VAR_20)
  {
    unsigned int VAR_36 = FUNC_11 (VAR_30);

    if (FUNC_2 (VAR_30)
        && FUNC_5 (FUNC_7 (VAR_31)) == VAR_8)
      FUNC_24 (0, "passing argument %d of %qE as integer "
        "rather than floating due to prototype",
        VAR_33, VAR_32);
    if (FUNC_2 (VAR_30)
        && FUNC_5 (FUNC_7 (VAR_31)) == VAR_2)
      FUNC_24 (0, "passing argument %d of %qE as integer "
        "rather than complex due to prototype",
        VAR_33, VAR_32);
    else if (FUNC_5 (VAR_30) == VAR_2
      && FUNC_5 (FUNC_7 (VAR_31)) == VAR_8)
      FUNC_24 (0, "passing argument %d of %qE as complex "
        "rather than floating due to prototype",
        VAR_33, VAR_32);
    else if (FUNC_5 (VAR_30) == VAR_8
      && FUNC_2 (FUNC_7 (VAR_31)))
      FUNC_24 (0, "passing argument %d of %qE as floating "
        "rather than integer due to prototype",
        VAR_33, VAR_32);
    else if (FUNC_5 (VAR_30) == VAR_2
      && FUNC_2 (FUNC_7 (VAR_31)))
      FUNC_24 (0, "passing argument %d of %qE as complex "
        "rather than integer due to prototype",
        VAR_33, VAR_32);
    else if (FUNC_5 (VAR_30) == VAR_8
      && FUNC_5 (FUNC_7 (VAR_31)) == VAR_2)
      FUNC_24 (0, "passing argument %d of %qE as floating "
        "rather than complex due to prototype",
        VAR_33, VAR_32);



    else if (FUNC_5 (VAR_30) == VAR_8
      && FUNC_5 (FUNC_7 (VAR_31)) == VAR_8)
      {


        if (VAR_36 == FUNC_11 (VAR_14)
     && VAR_30 != VAR_10)
   FUNC_24 (0, "passing argument %d of %qE as %<float%> "
     "rather than %<double%> due to prototype",
     VAR_33, VAR_32);





         else if (VAR_30 != FUNC_7 (VAR_31)
          && (VAR_30 == VAR_10
       || VAR_30 == VAR_11
       || VAR_30 == VAR_9
       || FUNC_7 (VAR_31) == VAR_10
       || FUNC_7 (VAR_31) == VAR_11
       || FUNC_7 (VAR_31) == VAR_9)
          && (VAR_36
       <= FUNC_11 (FUNC_7 (VAR_31))
       || (VAR_30 == VAR_9
           && (FUNC_7 (VAR_31)
        != VAR_11
        && (FUNC_7 (VAR_31)
            != VAR_10)))
       || (VAR_30 == VAR_11
           && (FUNC_7 (VAR_31)
        != VAR_10))))
   FUNC_24 (0, "passing argument %d of %qE as %qT "
     "rather than %qT due to prototype",
     VAR_33, VAR_32, VAR_30, FUNC_7 (VAR_31));

      }



    else if (VAR_19 && FUNC_2 (VAR_30)
      && FUNC_2 (FUNC_7 (VAR_31)))
      {
        tree VAR_37 = FUNC_15 (VAR_31);
        tree VAR_38 = FUNC_7 (VAR_37);

        if (FUNC_5 (VAR_30) == VAR_3
     && (FUNC_9 (VAR_30)
         == FUNC_9 (FUNC_7 (VAR_31))))


   ;
        else if (VAR_36 != FUNC_11 (VAR_38))
   FUNC_24 (VAR_7, "passing argument %d of %qE "
     "with different width due to prototype",
     VAR_33, VAR_32);
        else if (FUNC_12 (VAR_30) == FUNC_12 (VAR_38))
   ;



        else if (FUNC_5 (VAR_30) == VAR_3)
   ;
        else if (FUNC_5 (VAR_31) == VAR_5
          && FUNC_17 (VAR_31, VAR_30))


   ;




        else if (FUNC_11 (FUNC_7 (VAR_31)) < FUNC_11 (VAR_30)
          && FUNC_12 (FUNC_7 (VAR_31)))
   ;
        else if (FUNC_12 (VAR_30))
   FUNC_24 (VAR_7, "passing argument %d of %qE "
     "as unsigned due to prototype",
     VAR_33, VAR_32);
        else
   FUNC_24 (VAR_7, "passing argument %d of %qE "
     "as signed due to prototype", VAR_33, VAR_32);
      }
  }

       VAR_35 = FUNC_14 (VAR_30, VAR_31, VAR_15,
      VAR_24, VAR_23,
      VAR_28 + 1);

       if (VAR_17.calls.promote_prototypes (VAR_24 ? FUNC_7 (VAR_24) : 0)
    && FUNC_2 (VAR_30)
    && (FUNC_11 (VAR_30) < FUNC_11 (VAR_16)))
  VAR_35 = FUNC_15 (VAR_35);
     }
   VAR_27 = FUNC_23 (VAR_6, VAR_35, VAR_27);
 }
      else if (FUNC_5 (FUNC_7 (VAR_31)) == VAR_8
        && (FUNC_11 (FUNC_7 (VAR_31))
     < FUNC_11 (VAR_12))
        && !FUNC_1 (FUNC_10 (FUNC_7 (VAR_31))))

 VAR_27 = FUNC_23 (VAR_6, FUNC_13 (VAR_12, VAR_31), VAR_27);
      else if ((VAR_34 =
  VAR_17.calls.invalid_arg_for_unprototyped_fn (VAR_21, VAR_24, VAR_31)))
 {
   FUNC_16 (VAR_34, "");
   return VAR_13;
 }
      else

 VAR_27 = FUNC_23 (VAR_6, FUNC_15 (VAR_31), VAR_27);

      if (VAR_25)
 VAR_25 = FUNC_4 (VAR_25);
    }

  if (VAR_25 != 0 && FUNC_8 (VAR_25) != VAR_18)
    {

      if (FUNC_5 (FUNC_7 (VAR_23)) == VAR_1)
  FUNC_16 ("too few arguments to block %qE", VAR_23);
      else
  FUNC_16 ("too few arguments to function %qE", VAR_23);

      return VAR_13;
    }

  return FUNC_18 (VAR_27);
}

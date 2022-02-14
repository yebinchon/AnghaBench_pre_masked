
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 char* FUNC_6 (char*,int ) ;
 char* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (char*,int ) ;
 int FUNC_17 (char*,char*) ;
 char* FUNC_18 (char*,char*) ;
 char* FUNC_19 (char*) ;
 int FUNC_20 (char*,char*,char*,...) ;
 char* VAR_11 ;
 scalar_t__ FUNC_21 (char*) ;
 char* FUNC_22 (char*) ;
 char* FUNC_23 (char*) ;
 char* FUNC_24 (char*) ;
 int FUNC_25 (int) ;
 int FUNC_26 () ;
 int FUNC_27 (char*,...) ;
 char* FUNC_28 (char*,char*,int ) ;
 char* FUNC_29 (char*,char*,int ,int ) ;
 char* FUNC_30 (char*,char*) ;
 int FUNC_31 (char*) ;
 int FUNC_32 (char*,char*) ;
 int FUNC_33 (char*,char*) ;
 int VAR_12 ;
 int FUNC_34 (char*) ;

__attribute__((used)) static tree
FUNC_35 (tree VAR_13, tree VAR_14)
{
  tree VAR_15;






  if (FUNC_5 (VAR_14) == VAR_9)
    {
      FUNC_20 ("%qE is not a valid template argument for type %qT "
      "because string literals can never be used in this context",
      VAR_14, VAR_13);
      return VAR_6;
    }
  VAR_14 = FUNC_24 (VAR_14);
  if (FUNC_21 (VAR_14))
    return VAR_11;
  VAR_15 = FUNC_7 (VAR_14);
  if (FUNC_5 (VAR_14) == VAR_5)
    {
      if (FUNC_13 (VAR_13) || FUNC_12 (VAR_13))
 {




   tree VAR_16 = FUNC_6 (VAR_14, 0);
   FUNC_25 (FUNC_5 (VAR_15) == VAR_8);
   FUNC_25 (FUNC_5 (VAR_16) == VAR_0);
   FUNC_25 (FUNC_5 (FUNC_7 (VAR_16)) == VAR_7);
   FUNC_25 (FUNC_32
        (FUNC_7 (VAR_15),
         FUNC_7 (FUNC_7 (VAR_16))));

   VAR_14 = FUNC_6 (VAR_16, 0);
   VAR_15 = FUNC_7 (VAR_14);
 }




      else if (FUNC_11 (VAR_13))
 {
   FUNC_4 (VAR_14);
   FUNC_25 (FUNC_5 (VAR_14) == VAR_0);
   FUNC_25 (FUNC_5 (FUNC_7 (VAR_14)) == VAR_7);



   if (FUNC_5 (FUNC_7 (FUNC_6 (VAR_14, 0))) == VAR_1)
     VAR_14 = FUNC_6 (VAR_14, 0);
   VAR_15 = FUNC_7 (VAR_14);
 }
    }






  if (FUNC_3 (VAR_13))
    {
      if (!FUNC_3 (VAR_15))
 return VAR_11;

      VAR_14 = FUNC_23 (VAR_14);


      if (FUNC_5 (VAR_14) != VAR_3)
 {
   FUNC_20 ("%qE is not a valid template argument for type %qT "
   "because it is a non-constant expression", VAR_14, VAR_13);
   return VAR_6;
 }




      VAR_14 = FUNC_29 (VAR_13, VAR_14, VAR_2, VAR_4);
      if (VAR_14 == VAR_11)
 return VAR_11;


      VAR_14 = FUNC_22 (VAR_14);
    }





  else if (FUNC_11 (VAR_13))
    {
      if (FUNC_1 (VAR_14) && FUNC_2 (VAR_14))

 ;
      else if (FUNC_5 (VAR_14) != VAR_0
        && FUNC_5 (VAR_15) != VAR_1)
 {
   if (FUNC_5 (VAR_14) == VAR_10)
     {
       FUNC_20 ("%qD is not a valid template argument "
       "because %qD is a variable, not the address of "
       "a variable",
       VAR_14, VAR_14);
       return VAR_6;
     }


   return VAR_11;
 }
      else
 {
   tree VAR_17;

   VAR_17 = ((FUNC_5 (VAR_14) == VAR_0)
    ? FUNC_6 (VAR_14, 0) : VAR_14);
   if (FUNC_5 (VAR_17) != VAR_10)
     {
       FUNC_20 ("%qE is not a valid template argument of type %qT "
       "because %qE is not a variable",
       VAR_14, VAR_13, VAR_17);
       return VAR_6;
     }
   else if (!FUNC_0 (VAR_17))
     {
       FUNC_20 ("%qE is not a valid template argument of type %qT "
       "because %qD does not have external linkage",
       VAR_14, VAR_13, VAR_17);
       return VAR_6;
     }
 }

      VAR_14 = FUNC_19 (VAR_14);
      if (VAR_14 == VAR_11)
 return VAR_11;

      VAR_14 = FUNC_30 (VAR_13, VAR_14);
      if (VAR_14 == VAR_11)
 return VAR_11;
    }







  else if (FUNC_13 (VAR_13))
    {
      if (!FUNC_32 (FUNC_7 (VAR_13),
            VAR_15))
 return VAR_11;

      if (!FUNC_14 (FUNC_7 (VAR_13), VAR_15))
 {
   FUNC_20 ("%qE is not a valid template argument for type %qT "
   "because of conflicts in cv-qualification", VAR_14, VAR_13);
   return VAR_6;
 }

      if (!FUNC_31 (VAR_14))
 {
   FUNC_20 ("%qE is not a valid template argument for type %qT "
   "because it is not an lvalue", VAR_14, VAR_13);
   return VAR_6;
 }







      if (!FUNC_0 (VAR_14))
 {
   FUNC_20 ("%qE is not a valid template argument for type %qT "
   "because object %qD has not external linkage",
   VAR_14, VAR_13, VAR_14);
   return VAR_6;
 }

      VAR_14 = FUNC_16 (VAR_13, FUNC_15 (VAR_14));
    }







  else if (FUNC_8 (VAR_13))
    {


      if (!FUNC_34 (VAR_15))
 {
   VAR_14 = FUNC_19 (VAR_14);
   if (VAR_14 == VAR_11)
     return VAR_11;
 }

      VAR_14 = FUNC_18 (VAR_13, VAR_14);
      if (!VAR_14 || VAR_14 == VAR_11)
 return VAR_14;
    }






  else if (FUNC_12 (VAR_13))
    {
      if (FUNC_5 (VAR_14) == VAR_0)
 {
   FUNC_20 ("%qE is not a valid template argument for type %qT "
   "because it is a pointer", VAR_14, VAR_13);
   FUNC_27 ("try using %qE instead", FUNC_6 (VAR_14, 0));
   return VAR_6;
 }

      VAR_14 = FUNC_18 (FUNC_7 (VAR_13), VAR_14);
      if (!VAR_14 || VAR_14 == VAR_11)
 return VAR_14;

      VAR_14 = FUNC_16 (VAR_13, FUNC_15 (VAR_14));
    }






  else if (FUNC_9 (VAR_13))
    {
      VAR_14 = FUNC_28 (VAR_13, VAR_14, VAR_12);
      if (VAR_14 == VAR_11)
 return VAR_11;
      if (!FUNC_33 (FUNC_7 (VAR_14), VAR_13))
 {

   FUNC_25 (FUNC_17 (VAR_13, FUNC_7 (VAR_14)));
   FUNC_20 ("%qE is not a valid template argument for type %qT "
   "because it is of type %qT", VAR_14, VAR_13,
   FUNC_7 (VAR_14));
   FUNC_27 ("standard conversions are not allowed in this context");
   return VAR_6;
 }
    }




  else if (FUNC_10 (VAR_13))
    {
      VAR_14 = FUNC_30 (VAR_13, VAR_14);
      if (VAR_14 == VAR_11)
 return VAR_14;
    }

  else
    FUNC_26 ();



  FUNC_25 (FUNC_33 (VAR_13, FUNC_7 (VAR_14)));
  return VAR_14;
}

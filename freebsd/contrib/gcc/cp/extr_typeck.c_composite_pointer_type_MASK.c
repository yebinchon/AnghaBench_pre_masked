
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* tree ;
struct TYPE_2__ {char* (* merge_type_attributes ) (char*,char*) ;} ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 char* FUNC_10 (char*) ;
 char* FUNC_11 (char*,int ) ;
 char* FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 () ;
 char* FUNC_14 (char*,char*,char const*) ;
 char* FUNC_15 (char*,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,char const*,char*,char*) ;
 char* VAR_2 ;
 scalar_t__ FUNC_18 (char*) ;
 char* FUNC_19 (char*,char*) ;
 scalar_t__ FUNC_20 (char*,char*,int,int ,char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_21 (char*,char const*) ;
 int FUNC_22 (char*,char*) ;
 int FUNC_23 (char*,char*) ;
 char* FUNC_24 (char*,char*) ;
 TYPE_1__ VAR_4 ;
 char* VAR_5 ;

tree
FUNC_25 (tree VAR_6, tree VAR_7, tree VAR_8, tree VAR_9,
   const char* VAR_10)
{
  tree VAR_11;
  tree VAR_12;





  if (FUNC_18 (VAR_8))
    return VAR_7;
  if (FUNC_18 (VAR_9))
    return VAR_6;
  if (FUNC_2 (VAR_7) == VAR_1 && FUNC_9 (FUNC_3 (VAR_7)))
    {
      tree VAR_13;
      VAR_13 = VAR_6;
      VAR_6 = VAR_7;
      VAR_7 = VAR_13;
    }


  if (FUNC_2 (VAR_6) == VAR_1 && FUNC_9 (FUNC_3 (VAR_6)))
    {
      tree VAR_14;
      tree VAR_15;

      if (VAR_3 && FUNC_4 (VAR_7))
 FUNC_21 ("ISO C++ forbids %s between pointer of type %<void *%> "
   "and pointer-to-function", VAR_10);
      VAR_15
 = FUNC_15 (VAR_5,
       (FUNC_16 (FUNC_3 (VAR_6))
        | FUNC_16 (FUNC_3 (VAR_7))));
      VAR_15 = FUNC_10 (VAR_15);

      VAR_14 = (*VAR_4.merge_type_attributes) (VAR_6, VAR_7);
      return FUNC_12 (VAR_15, VAR_14);
    }

  if (FUNC_13 () && FUNC_2 (VAR_6) == VAR_1
      && FUNC_2 (VAR_7) == VAR_1)
    {

      if (FUNC_20 (VAR_6, VAR_7, -3, VAR_0, VAR_10))

 return FUNC_19 (VAR_6, VAR_7);
    }



  if (FUNC_2 (VAR_6) == VAR_1 && FUNC_2 (VAR_7) == VAR_1
      && FUNC_0 (FUNC_3 (VAR_6))
      && FUNC_0 (FUNC_3 (VAR_7))
      && !FUNC_22 (FUNC_3 (VAR_6),
           FUNC_3 (VAR_7)))
    {
      VAR_11 = FUNC_3 (VAR_6);
      VAR_12 = FUNC_3 (VAR_7);

      if (FUNC_1 (VAR_11, VAR_12))
 VAR_7 = (FUNC_10
       (FUNC_15 (VAR_11, FUNC_8 (VAR_12))));
      else if (FUNC_1 (VAR_12, VAR_11))
 VAR_6 = (FUNC_10
       (FUNC_15 (VAR_12, FUNC_8 (VAR_11))));
      else
 {
   FUNC_17 ("%s between distinct pointer types %qT and %qT "
   "lacks a cast", VAR_10, VAR_6, VAR_7);
   return VAR_2;
 }
    }


  else if (FUNC_7 (VAR_6)
    && !FUNC_23 (FUNC_5 (VAR_6),
       FUNC_5 (VAR_7)))
    {
      VAR_11 = FUNC_5 (VAR_6);
      VAR_12 = FUNC_5 (VAR_7);

      if (FUNC_1 (VAR_11, VAR_12))
 VAR_6 = FUNC_11 (VAR_12, FUNC_6 (VAR_6));
      else if (FUNC_1 (VAR_12, VAR_11))
 VAR_7 = FUNC_11 (VAR_11, FUNC_6 (VAR_7));
      else
 {
   FUNC_17 ("%s between distinct pointer-to-member types %qT and %qT "
   "lacks a cast", VAR_10, VAR_6, VAR_7);
   return VAR_2;
 }
    }

  else if (FUNC_2 (VAR_6) != FUNC_2 (VAR_7))
    {
      FUNC_17 ("%s between distinct pointer types %qT and %qT "
      "lacks a cast", VAR_10, VAR_6, VAR_7);
      return VAR_2;
    }


  return FUNC_14 (VAR_6, VAR_7, VAR_10);
}

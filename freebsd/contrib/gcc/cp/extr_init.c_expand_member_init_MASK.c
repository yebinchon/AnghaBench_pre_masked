
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,char*) ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_14 (char*,char*,...) ;
 scalar_t__ FUNC_15 (char*,scalar_t__,int,int) ;
 scalar_t__ FUNC_16 (scalar_t__,char*,scalar_t__) ;

tree
FUNC_17 (tree VAR_6)
{
  tree VAR_7;
  tree VAR_8;

  if (!VAR_3)
    return VAR_1;

  if (!VAR_6)
    {


      switch (FUNC_2 (FUNC_9 (VAR_4)))
 {
 case 0:
   FUNC_14 ("unnamed initializer for %qT, which has no base classes",
   VAR_4);
   return VAR_1;
 case 1:
   VAR_7 = FUNC_3
     (FUNC_0 (FUNC_9 (VAR_4), 0));
   break;
 default:
   FUNC_14 ("unnamed initializer for %qT, which uses multiple inheritance",
   VAR_4);
   return VAR_1;
      }
    }
  else if (FUNC_12 (VAR_6))
    {
      VAR_7 = FUNC_10 (VAR_6);
      VAR_6 = FUNC_11 (VAR_6);
    }
  else if (FUNC_7 (VAR_6) == VAR_2)
    VAR_7 = FUNC_10 (FUNC_8 (VAR_6));
  else
    VAR_7 = VAR_1;

  if (VAR_7)
    {
      tree VAR_9;
      tree VAR_10;
      tree VAR_11;
      int VAR_12;

      if (VAR_5)
 return VAR_7;

      VAR_9 = FUNC_9 (VAR_4);
      VAR_10 = VAR_1;
      VAR_11 = VAR_1;


      for (VAR_12 = 0; FUNC_1 (VAR_9, VAR_12, VAR_10); ++VAR_12)
 if (FUNC_6 (FUNC_3 (VAR_10), VAR_7))
   break;



      if (!VAR_10 || !FUNC_4 (VAR_10))
 VAR_11 = FUNC_13 (VAR_7, VAR_4);






      if (VAR_10 && VAR_11)
 {
   FUNC_14 ("%qD is both a direct base and an indirect virtual base",
   VAR_7);
   return VAR_1;
 }

      if (!VAR_10 && !VAR_11)
 {
   if (FUNC_5 (VAR_4))
     FUNC_14 ("type %qT is not a direct or virtual base of %qT",
     VAR_7, VAR_4);
   else
     FUNC_14 ("type %qT is not a direct base of %qT",
     VAR_7, VAR_4);
   return VAR_1;
 }

      return VAR_10 ? VAR_10 : VAR_11;
    }
  else
    {
      if (FUNC_7 (VAR_6) == VAR_0)
 VAR_8 = FUNC_15 (VAR_4, VAR_6, 1, 0);
      else
 VAR_8 = VAR_6;

      if (FUNC_16 (VAR_8, VAR_4, VAR_6))
 return VAR_8;
    }

  return VAR_1;
}

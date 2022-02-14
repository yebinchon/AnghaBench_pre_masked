
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsubst_flags_t ;
typedef char* tree ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,...) ;
 char* FUNC_8 (char*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (char*,int ) ;

__attribute__((used)) static bool
FUNC_10 (tree VAR_2, tree VAR_3, tsubst_flags_t VAR_4)
{
  int VAR_5, VAR_6 = FUNC_0 (VAR_2);
  bool VAR_7 = 0;

  for (VAR_5 = 0; VAR_5 != VAR_6; VAR_5++)
    {
      tree VAR_8 = FUNC_4 (VAR_3, VAR_5);

      if (FUNC_6 (VAR_8))
 {





   tree VAR_9 = FUNC_8 (VAR_8, 0);

   if (VAR_9)
     {


       if (VAR_4 & VAR_1)
  {
    if (FUNC_5 (VAR_9))
      FUNC_7 ("%qT is/uses anonymous type", VAR_8);
    else
      FUNC_7 ("template argument for %qD uses local type %qT",
      VAR_2, VAR_8);
  }
       VAR_7 = 1;
     }


   else if (FUNC_9 (VAR_8, VAR_0))
     {
       if (VAR_4 & VAR_1)
  FUNC_7 ("%qT is a variably modified type", VAR_8);
       VAR_7 = 1;
     }
 }


      else if (FUNC_3 (VAR_8)
        && FUNC_1 (FUNC_3 (VAR_8))
        && !FUNC_2 (VAR_8))
 {
   if (VAR_4 & VAR_1)
     FUNC_7 ("integral expression %qE is not constant", VAR_8);
   VAR_7 = 1;
 }
    }
  if (VAR_7 && (VAR_4 & VAR_1))
    FUNC_7 ("  trying to instantiate %qD", VAR_2);
  return VAR_7;
}

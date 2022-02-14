
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (char*,char const*,char*) ;
 char* FUNC_8 (int ,char*) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (char*,...) ;
 char* FUNC_11 (int ,int ,char*) ;
 char* FUNC_12 (int) ;
 char* VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 scalar_t__ VAR_11 ;

tree
FUNC_13 (tree VAR_12, bool VAR_13, int VAR_14)
{
  const char *VAR_15;
  tree VAR_16 = ((void*)0);
  enum tree_code VAR_17 = FUNC_1 (VAR_12);

  VAR_15 = VAR_13 ? "sizeof" : "__alignof__";

  if (VAR_17 == VAR_4)
    {
      if (VAR_13)
 {
   if (VAR_14 && (VAR_7 || VAR_11))
     FUNC_10 ("invalid application of %<sizeof%> to a function type");
   VAR_16 = VAR_8;
 }
      else
 VAR_16 = FUNC_12 (VAR_3 / VAR_0);
    }
  else if (VAR_17 == VAR_5 || VAR_17 == VAR_2)
    {
      if (VAR_17 == VAR_5
   && VAR_14 && (VAR_7 || VAR_11))
 FUNC_10 ("invalid application of %qs to a void type", VAR_15);
      VAR_16 = VAR_8;
    }
  else if (!FUNC_0 (VAR_12))
    {
      if (VAR_14)
 FUNC_7 ("invalid application of %qs to incomplete type %qT ",
        VAR_15, VAR_12);
      VAR_16 = VAR_10;
    }
  else
    {
      if (VAR_13)

 VAR_16 = FUNC_11 (VAR_1, FUNC_6 (VAR_12),
       FUNC_12 (FUNC_5 (VAR_6)
          / VAR_0));
      else
 VAR_16 = FUNC_12 (FUNC_3 (VAR_12));
    }





  VAR_16 = FUNC_8 (VAR_9, VAR_16);
  FUNC_9 (!FUNC_4 (FUNC_2 (VAR_16)));

  return VAR_16;
}

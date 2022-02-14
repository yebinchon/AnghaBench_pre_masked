
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct arg_lookup {scalar_t__ name; int classes; } ;


 scalar_t__ FUNC_0 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__,int) ;
 int FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (struct arg_lookup*,scalar_t__) ;
 scalar_t__ FUNC_21 (struct arg_lookup*,scalar_t__) ;
 int FUNC_22 (struct arg_lookup*,int ) ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 scalar_t__ FUNC_24 (scalar_t__,int ) ;
 int FUNC_25 (scalar_t__,int ,int ) ;

__attribute__((used)) static bool
FUNC_26 (struct arg_lookup *VAR_2, tree VAR_3)
{
  tree VAR_4, VAR_5, VAR_6;
  int VAR_7;



  if (!FUNC_5 (VAR_3))
    return 0;

  if (FUNC_24 (VAR_3, VAR_2->classes))
    return 0;
  VAR_2->classes = FUNC_25 (VAR_3, VAR_1, VAR_2->classes);

  VAR_6 = FUNC_23 (VAR_3);
  if (FUNC_21 (VAR_2, VAR_6))
    return 1;

  if (FUNC_18 (VAR_3))
    {

      tree VAR_8, VAR_9;

      for (VAR_8 = FUNC_18 (VAR_3), VAR_7 = 0;
    FUNC_0 (VAR_8, VAR_7, VAR_9); VAR_7++)
 if (FUNC_26 (VAR_2, FUNC_1 (VAR_9)))
   return 1;
    }


  for (VAR_4 = FUNC_7 (FUNC_19 (VAR_3)); VAR_4;
       VAR_4 = FUNC_13 (VAR_4))
    if (VAR_2->name == FUNC_10 (VAR_4))
      for (VAR_5 = FUNC_9 (VAR_4); VAR_5;
    VAR_5 = FUNC_13 (VAR_5))
 {
   tree VAR_10 = FUNC_15 (VAR_5);



   if (FUNC_6 (VAR_10) != VAR_6)
     continue;



   if (FUNC_14 (VAR_10) == VAR_0 && FUNC_8 (VAR_10))
     continue;
   if (FUNC_20 (VAR_2, VAR_10))
     return 1;
 }


  if (FUNC_2 (VAR_3)
      && FUNC_12 (FUNC_4 (VAR_3)))
    {
      VAR_4 = FUNC_11 (FUNC_3 (VAR_3));
      for (VAR_7 = 0; VAR_7 < FUNC_17 (VAR_4); ++VAR_7)
 FUNC_22 (VAR_2, FUNC_16 (VAR_4, VAR_7));
    }

  return 0;
}

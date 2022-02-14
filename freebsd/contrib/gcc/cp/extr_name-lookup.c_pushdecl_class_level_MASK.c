
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int location_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (int ) ;

bool
FUNC_12 (tree VAR_4)
{
  tree VAR_5;
  bool VAR_6 = 1;

  FUNC_11 (VAR_1);

  if (FUNC_5 (VAR_4) == VAR_0)
    VAR_5 = FUNC_1 (FUNC_8 (VAR_4));
  else
    VAR_5 = FUNC_1 (VAR_4);

  if (VAR_5)
    {
      VAR_6 = FUNC_9 (VAR_5, VAR_4);
      if (FUNC_5 (VAR_4) == VAR_2)
 FUNC_10 (VAR_5, VAR_4);
    }
  else if (FUNC_0 (FUNC_6 (VAR_4)))
    {



      tree VAR_7;

      for (VAR_7 = FUNC_7 (FUNC_6 (VAR_4)); VAR_7; VAR_7 = FUNC_4 (VAR_7))
 {
   location_t VAR_8 = VAR_3;
   VAR_3 = FUNC_2 (VAR_7);
   if (!FUNC_12 (VAR_7))
     VAR_6 = 0;
   VAR_3 = VAR_8;
 }
    }
  FUNC_3 (VAR_1, VAR_6);
}

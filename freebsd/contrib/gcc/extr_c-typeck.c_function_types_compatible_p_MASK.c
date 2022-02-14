
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_11 (tree VAR_1, tree VAR_2)
{
  tree VAR_3, VAR_4;

  int VAR_5 = 1;
  int VAR_6;
  tree VAR_7, VAR_8;

  VAR_7 = FUNC_0 (VAR_1);
  VAR_8 = FUNC_0 (VAR_2);



  if (FUNC_5 (VAR_7) != FUNC_5 (VAR_8))
    FUNC_8 ("function return types not compatible due to %<volatile%>");
  if (FUNC_5 (VAR_7))
    VAR_7 = FUNC_6 (FUNC_3 (VAR_7),
     FUNC_4 (VAR_7) & ~VAR_0);
  if (FUNC_5 (VAR_8))
    VAR_8 = FUNC_6 (FUNC_3 (VAR_8),
     FUNC_4 (VAR_8) & ~VAR_0);
  VAR_5 = FUNC_7 (VAR_7, VAR_8);
  if (VAR_5 == 0)
    return 0;

  VAR_3 = FUNC_2 (VAR_1);
  VAR_4 = FUNC_2 (VAR_2);




  if (VAR_3 == 0)
    {
      if (!FUNC_9 (VAR_4))
 return 0;



      if (FUNC_1 (VAR_1)
   && 1 != FUNC_10 (VAR_4, FUNC_1 (VAR_1)))
 VAR_5 = 2;
      return VAR_5;
    }
  if (VAR_4 == 0)
    {
      if (!FUNC_9 (VAR_3))
 return 0;
      if (FUNC_1 (VAR_2)
   && 1 != FUNC_10 (VAR_3, FUNC_1 (VAR_2)))
 VAR_5 = 2;
      return VAR_5;
    }


  VAR_6 = FUNC_10 (VAR_3, VAR_4);
  return VAR_6 != 1 ? VAR_6 : VAR_5;
}

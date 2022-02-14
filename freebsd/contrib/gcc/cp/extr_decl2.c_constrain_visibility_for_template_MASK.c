
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13 (tree VAR_4, tree VAR_5)
{



  tree VAR_6 = FUNC_1 (VAR_5);
  int VAR_7;
  for (VAR_7 = FUNC_9 (VAR_6); VAR_7 > 0; --VAR_7)
    {
      int VAR_8 = 0;

      tree VAR_9 = FUNC_8 (VAR_6, VAR_7-1);
      if (FUNC_10 (VAR_9))
 VAR_8 = FUNC_12 (VAR_9);
      else if (FUNC_7 (VAR_9) && FUNC_2 (FUNC_7 (VAR_9)))
 {
   FUNC_3 (VAR_9);
   if (FUNC_4 (VAR_9) == VAR_0)
     VAR_9 = FUNC_5 (VAR_9, 0);
   if (FUNC_4 (VAR_9) == VAR_2
       || FUNC_4 (VAR_9) == VAR_1)
     {
       if (! FUNC_6 (VAR_9))
  VAR_8 = VAR_3;
       else
  VAR_8 = FUNC_0 (VAR_9);
     }
 }
      if (VAR_8)
 FUNC_11 (VAR_4, VAR_8);
    }
}

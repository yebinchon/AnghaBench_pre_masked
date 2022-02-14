
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int,int) ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_7 (tree VAR_2, bool VAR_3)
{
  tree VAR_4;

  if (FUNC_4 (FUNC_2 (VAR_2)))
    {
      for (VAR_4 = FUNC_4 (FUNC_2 (VAR_2));
    VAR_4 && FUNC_3 (VAR_4) != VAR_1;
    VAR_4 = FUNC_1 (VAR_4))
 {
   tree VAR_5 = FUNC_5 (FUNC_3 (VAR_4), 0, 0);
   if (VAR_3)
     FUNC_6 (VAR_5, VAR_0);
 }
    }
  else
    {





      for (VAR_4 = FUNC_0 (VAR_2); VAR_4; VAR_4 = FUNC_1 (VAR_4))
 {
   tree VAR_6 = FUNC_5 (FUNC_2 (VAR_4), 0, 0);
   if (VAR_3)
     FUNC_6 (VAR_6, VAR_0);
 }
    }
  if (VAR_3)
    {
      tree VAR_7 = FUNC_5 (FUNC_2 (FUNC_2 (VAR_2)), 0, 0);
      FUNC_6 (VAR_7, VAR_0);
    }
}

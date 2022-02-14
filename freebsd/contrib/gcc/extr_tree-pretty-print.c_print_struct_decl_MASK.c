
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int pretty_printer ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *,scalar_t__,int,int ,int) ;
 int FUNC_7 (int *,char) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_11 (pretty_printer *VAR_4, tree VAR_5, int VAR_6, int VAR_7)
{

  if (FUNC_5 (VAR_5))
    {
      FUNC_0 (VAR_6);
      if (FUNC_2 (VAR_5) == VAR_2)
 FUNC_9 (VAR_4, "struct ");
      else if ((FUNC_2 (VAR_5) == VAR_3
  || FUNC_2 (VAR_5) == VAR_1))
 FUNC_9 (VAR_4, "union ");

      FUNC_6 (VAR_4, FUNC_5 (VAR_5), VAR_6, 0, 0);
    }


  FUNC_8 (VAR_4);
  FUNC_0 (VAR_6);
  FUNC_7 (VAR_4, '{');
  FUNC_8 (VAR_4);


  {
    tree VAR_8;
    VAR_8 = FUNC_4 (VAR_5);
    while (VAR_8)
      {





 if (FUNC_3 (VAR_8) != VAR_5
     || (FUNC_2 (FUNC_3 (VAR_8)) == VAR_0
  && FUNC_3 (FUNC_3 (VAR_8)) != VAR_5))
   {
     FUNC_10 (VAR_4, VAR_8, VAR_6+2, VAR_7);
     FUNC_8 (VAR_4);
   }
 VAR_8 = FUNC_1 (VAR_8);
      }
  }
  FUNC_0 (VAR_6);
  FUNC_7 (VAR_4, '}');
}

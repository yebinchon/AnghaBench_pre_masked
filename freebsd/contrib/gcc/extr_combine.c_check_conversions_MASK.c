
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12 (rtx VAR_1, rtx VAR_2)
{
  if (FUNC_0 (VAR_2) == VAR_0 || FUNC_3 (VAR_2))
    {
      if (FUNC_0 (VAR_2) == VAR_0
   && FUNC_4 (VAR_2)
   && FUNC_3 (FUNC_5 (VAR_2)))
 FUNC_10 (VAR_1, VAR_2);

      FUNC_11 (VAR_2);
    }
  else
    {
      const char *VAR_3 = FUNC_1 (FUNC_0 (VAR_2));
      int VAR_4, VAR_5;

      for (VAR_4 = 0; VAR_4 < FUNC_2 (FUNC_0 (VAR_2)); VAR_4++)
 switch (VAR_3[VAR_4])
   {
   case 'e':
     FUNC_12 (VAR_1, FUNC_6 (VAR_2, VAR_4));
     break;
   case 'V':
   case 'E':
     if (FUNC_7 (VAR_2, VAR_4) != 0)
       for (VAR_5 = 0; VAR_5 < FUNC_9 (VAR_2, VAR_4); VAR_5++)
  FUNC_12 (VAR_1, FUNC_8 (VAR_2, VAR_4, VAR_5));
     break;
   }
    }
}

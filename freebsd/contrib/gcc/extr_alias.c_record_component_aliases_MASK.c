
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef scalar_t__ HOST_WIDE_INT ;



 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;

 int FUNC_2 (int ) ;
 int VAR_0 ;


 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;

void
FUNC_11 (tree VAR_1)
{
  HOST_WIDE_INT VAR_2 = FUNC_9 (VAR_1);
  tree VAR_3;

  if (VAR_2 == 0)
    return;

  switch (FUNC_4 (VAR_1))
    {
    case 132:
      if (! FUNC_8 (VAR_1))
 FUNC_10 (VAR_2, FUNC_9 (FUNC_5 (VAR_1)));
      break;

    case 129:
    case 128:
    case 130:

      if (FUNC_6 (VAR_1))
 {
   int VAR_4;
   tree VAR_5, VAR_6;

   for (VAR_5 = FUNC_6 (VAR_1), VAR_4 = 0;
        FUNC_0 (VAR_5, VAR_4, VAR_6); VAR_4++)
     FUNC_10 (VAR_2,
     FUNC_9 (FUNC_1 (VAR_6)));
 }
      for (VAR_3 = FUNC_7 (VAR_1); VAR_3 != 0; VAR_3 = FUNC_3 (VAR_3))
 if (FUNC_4 (VAR_3) == VAR_0 && ! FUNC_2 (VAR_3))
   FUNC_10 (VAR_2, FUNC_9 (FUNC_5 (VAR_3)));
      break;

    case 131:
      FUNC_10 (VAR_2, FUNC_9 (FUNC_5 (VAR_1)));
      break;

    default:
      break;
    }
}

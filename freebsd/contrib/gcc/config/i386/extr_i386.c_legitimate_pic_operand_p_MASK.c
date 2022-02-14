
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;



 int VAR_0 ;
 int FUNC_0 (int ) ;

 int VAR_1 ;

 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;

bool
FUNC_6 (rtx VAR_5)
{
  rtx VAR_6;

  switch (FUNC_0 (VAR_5))
    {
    case 132:
      VAR_6 = FUNC_2 (VAR_5, 0);
      if (FUNC_0 (VAR_6) == VAR_1
   && FUNC_0 (FUNC_2 (VAR_6, 1)) == VAR_0)
 VAR_6 = FUNC_2 (VAR_6, 0);


      if (FUNC_0 (VAR_6) == VAR_4)
 switch (FUNC_3 (VAR_6, 1))
   {
   case 129:
     return VAR_2;
   case 128:
     VAR_5 = FUNC_4 (VAR_6, 0, 0);
     return (FUNC_0 (VAR_5) == 130
      && FUNC_1 (VAR_5) == VAR_3);
   default:
     return 0;
   }


    case 130:
    case 131:
      return FUNC_5 (VAR_5);

    default:
      return 1;
    }
}

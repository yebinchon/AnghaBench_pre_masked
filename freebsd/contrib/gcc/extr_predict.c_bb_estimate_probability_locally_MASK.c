
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int basic_block ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;


 int FUNC_2 (int ) ;

 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;





 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_6 ;


 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ,int *,int,int) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_11 (basic_block VAR_10)
{
  rtx VAR_11 = FUNC_0 (VAR_10);
  rtx VAR_12;

  if (! FUNC_8 (VAR_11))
    return;
  VAR_12 = FUNC_9 (VAR_11, ((void*)0), 0, 0);
  if (! VAR_12)
    return;




  if (FUNC_1 (VAR_12)
      && ((FUNC_5 (FUNC_7 (VAR_12, 0)) && FUNC_6 (FUNC_7 (VAR_12, 0)))
   || (FUNC_5 (FUNC_7 (VAR_12, 1)) && FUNC_6 (FUNC_7 (VAR_12, 1)))))
    {
      if (FUNC_3 (VAR_12) == 137)
 FUNC_10 (VAR_11, VAR_4, VAR_0);
      else if (FUNC_3 (VAR_12) == 131)
 FUNC_10 (VAR_11, VAR_4, VAR_6);
    }
  else





    switch (FUNC_3 (VAR_12))
      {
      case 138:

 FUNC_10 (VAR_11, VAR_5,
     VAR_12 == VAR_7 ? VAR_0 : VAR_6);
 break;

      case 137:
      case 129:



 if (FUNC_2 (FUNC_4 (FUNC_7 (VAR_12, 0))))
   ;


 else if (FUNC_7 (VAR_12, 1) == VAR_7
   || FUNC_7 (VAR_12, 0) == VAR_7)
   ;
 else
   FUNC_10 (VAR_11, VAR_2, VAR_0);
 break;

      case 131:
      case 132:



 if (FUNC_2 (FUNC_4 (FUNC_7 (VAR_12, 0))))
   ;


 else if (FUNC_7 (VAR_12, 1) == VAR_7
   || FUNC_7 (VAR_12, 0) == VAR_7)
   ;
 else
   FUNC_10 (VAR_11, VAR_2, VAR_6);
 break;

      case 130:
 FUNC_10 (VAR_11, VAR_1, VAR_6);
 break;

      case 128:
 FUNC_10 (VAR_11, VAR_1, VAR_0);
 break;

      case 134:
      case 133:
 if (FUNC_7 (VAR_12, 1) == VAR_7 || FUNC_7 (VAR_12, 1) == VAR_8
     || FUNC_7 (VAR_12, 1) == VAR_9)
   FUNC_10 (VAR_11, VAR_3, VAR_0);
 break;

      case 136:
      case 135:
 if (FUNC_7 (VAR_12, 1) == VAR_7 || FUNC_7 (VAR_12, 1) == VAR_8
     || FUNC_7 (VAR_12, 1) == VAR_9)
   FUNC_10 (VAR_11, VAR_3, VAR_6);
 break;

      default:
 break;
      }
}

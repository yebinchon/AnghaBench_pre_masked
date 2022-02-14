
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef TYPE_1__* basic_block ;
struct TYPE_4__ {scalar_t__ next_bb; } ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;




 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static rtx
FUNC_10 (basic_block VAR_4)
{
  rtx VAR_5, VAR_6, VAR_7, VAR_8;

  VAR_7 = VAR_3;
  if (VAR_4->next_bb != VAR_2)
    VAR_7 = FUNC_1 (VAR_4->next_bb);

  for (VAR_6 = VAR_5 = FUNC_0 (VAR_4); (VAR_5 = FUNC_4 (VAR_5)) != 0; )
    {
      if (VAR_5 == VAR_7)
 break;

      switch (FUNC_2 (VAR_5))
 {
 case 133:
   VAR_6 = VAR_5;
   continue;

 case 131:
   switch (FUNC_5 (VAR_5))
     {
     case 130:
       VAR_6 = VAR_5;
       continue;
     case 129:
     case 128:
       continue;

     default:
       continue;
       break;
     }
   break;

 case 132:
   if (FUNC_4 (VAR_5)
       && FUNC_3 (FUNC_4 (VAR_5))
       && (FUNC_2 (FUNC_7 (FUNC_4 (VAR_5))) == VAR_1
    || FUNC_2 (FUNC_7 (FUNC_4 (VAR_5))) == VAR_0))
     {
       VAR_5 = FUNC_4 (VAR_5);
       VAR_6 = VAR_5;
       continue;
     }
   break;

 default:
   break;
 }

      break;
    }
  for (VAR_5 = VAR_6; VAR_5 != FUNC_0 (VAR_4); VAR_5 = VAR_8)
    {
      VAR_8 = FUNC_8 (VAR_5);
      if (FUNC_6 (VAR_5))
 switch (FUNC_5 (VAR_5))
   {
   case 130:
   case 129:
   case 128:
     continue;
   default:
     FUNC_9 (VAR_5, VAR_5, VAR_6);
   }
    }

  return VAR_6;
}

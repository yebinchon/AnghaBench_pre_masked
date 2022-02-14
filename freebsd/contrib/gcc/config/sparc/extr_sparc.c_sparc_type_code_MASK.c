
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;




 int VAR_0 ;



 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;



 int FUNC_4 () ;

unsigned long
FUNC_5 (register tree VAR_4)
{
  register unsigned long VAR_5 = 0;
  register unsigned VAR_6;






  for (VAR_6 = 6; VAR_6 < 30; VAR_6 += 2, VAR_4 = FUNC_1 (VAR_4))
    {
      switch (FUNC_0 (VAR_4))
 {
 case 141:
   return VAR_5;

 case 145:
   VAR_5 |= (3 << VAR_6);
   break;

 case 140:
 case 137:
   VAR_5 |= (2 << VAR_6);
   break;

 case 135:
 case 131:
 case 136:
   VAR_5 |= (1 << VAR_6);
   break;

 case 132:
   return (VAR_5 | 8);

 case 130:
 case 134:
   return (VAR_5 | 9);

 case 142:
   return (VAR_5 | 10);

 case 128:
   return (VAR_5 | 16);

 case 139:


   if (FUNC_1 (VAR_4) != 0)
     break;
   if (FUNC_2 (VAR_4) <= VAR_0)
     return (VAR_5 | (FUNC_3 (VAR_4) ? 12 : 2));

   else if (FUNC_2 (VAR_4) <= VAR_3)
     return (VAR_5 | (FUNC_3 (VAR_4) ? 13 : 3));

   else if (FUNC_2 (VAR_4) <= VAR_2)
     return (VAR_5 | (FUNC_3 (VAR_4) ? 14 : 4));

   else
     return (VAR_5 | (FUNC_3 (VAR_4) ? 15 : 5));

 case 133:


   if (FUNC_1 (VAR_4) != 0)
     break;




   if (FUNC_2 (VAR_4) == VAR_1)
     return (VAR_5 | 6);

   else
     return (VAR_5 | 7);

 case 143:



   return (VAR_5 | 7);

 case 129:
 case 144:
 case 138:
   return VAR_5;

 default:
   FUNC_4 ();
        }
    }

  return VAR_5;
}

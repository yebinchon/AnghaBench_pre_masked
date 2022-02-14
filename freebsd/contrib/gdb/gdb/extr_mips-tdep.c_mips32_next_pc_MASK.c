
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fp_control_status; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (int) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;

__attribute__((used)) static CORE_ADDR
FUNC_10 (CORE_ADDR VAR_1)
{
  unsigned long VAR_2;
  int VAR_3;
  VAR_2 = FUNC_5 (VAR_1);
  if ((VAR_2 & 0xe0000000) != 0)
    {
      if (FUNC_0 (VAR_2) >> 2 == 5)

 {
   VAR_3 = (FUNC_0 (VAR_2) & 0x03);
   switch (VAR_3)
     {
     case 0:
       goto equal_branch;
     case 1:
       goto neq_branch;
     case 2:
       goto less_branch;
     case 3:
       goto greater_branch;
     default:
       VAR_1 += 4;
     }
 }
      else if (FUNC_0 (VAR_2) == 17 && FUNC_1 (VAR_2) == 8)

 {
   int VAR_4 = FUNC_2 (VAR_2) & 0x01;
   int VAR_5 = FUNC_2 (VAR_2) >> 2;
   int VAR_6 =
     FUNC_7 (FUNC_6 (VAR_0)->
      fp_control_status);
   int VAR_7 = ((VAR_6 >> 24) & 0x0e) | ((VAR_6 >> 23) & 0x01);

   if (((VAR_7 >> VAR_5) & 0x01) == VAR_4)
     VAR_1 += FUNC_4 (VAR_2) + 4;
   else
     VAR_1 += 8;
 }
      else
 VAR_1 += 4;
    }
  else
    {


      switch (VAR_3 = FUNC_0 (VAR_2) & 0x07)
 {
 case 0:
   VAR_3 = FUNC_8 (VAR_2);
   switch (VAR_3)
     {
     case 8:
     case 9:

       VAR_1 = FUNC_7 (FUNC_9 (VAR_2));
       break;
     default:
       VAR_1 += 4;
     }

   break;
 case 1:
   {
     VAR_3 = FUNC_2 (VAR_2);
     switch (VAR_3)
       {
       case 0:
       case 2:
       case 16:
       case 18:
       less_branch:
  if (FUNC_7 (FUNC_1 (VAR_2)) < 0)
    VAR_1 += FUNC_4 (VAR_2) + 4;
  else
    VAR_1 += 8;
  break;
       case 1:
       case 3:
       case 17:
       case 19:
  if (FUNC_7 (FUNC_1 (VAR_2)) >= 0)
    VAR_1 += FUNC_4 (VAR_2) + 4;
  else
    VAR_1 += 8;
  break;

       default:
  VAR_1 += 4;
       }
   }
   break;
 case 2:
 case 3:
   {
     unsigned long VAR_8;
     VAR_8 = FUNC_3 (VAR_2) << 2;

     VAR_1 = VAR_8 + ((VAR_1 + 4) & 0xf0000000);
   }
   break;

   {
     unsigned long VAR_9;
     VAR_9 = FUNC_3 (VAR_2) << 2;
     VAR_1 = VAR_9 + ((VAR_1 + 4) & 0xf0000000) + 1;

   }
   break;
 case 4:
 equal_branch:
   if (FUNC_7 (FUNC_1 (VAR_2)) ==
       FUNC_7 (FUNC_2 (VAR_2)))
     VAR_1 += FUNC_4 (VAR_2) + 4;
   else
     VAR_1 += 8;
   break;
 case 5:
 neq_branch:
   if (FUNC_7 (FUNC_1 (VAR_2)) !=
       FUNC_7 (FUNC_2 (VAR_2)))
     VAR_1 += FUNC_4 (VAR_2) + 4;
   else
     VAR_1 += 8;
   break;
 case 6:
   if (FUNC_7 (FUNC_1 (VAR_2) <= 0))
     VAR_1 += FUNC_4 (VAR_2) + 4;
   else
     VAR_1 += 8;
   break;
 case 7:
 default:
 greater_branch:
   if (FUNC_7 (FUNC_1 (VAR_2) > 0))
     VAR_1 += FUNC_4 (VAR_2) + 4;
   else
     VAR_1 += 8;
   break;
 }
    }
  return VAR_1;
}

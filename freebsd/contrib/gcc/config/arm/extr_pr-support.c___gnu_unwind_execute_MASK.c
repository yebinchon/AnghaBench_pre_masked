
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _uw ;
typedef int __gnu_unwind_state ;
typedef int _Unwind_Reason_Code ;
typedef int _Unwind_Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int *,int ,int,int ,int*) ;
 scalar_t__ FUNC_1 (int *,int ,int,int ) ;
 int FUNC_2 (int *,int ,int,int ,int*) ;
 int FUNC_3 (int *) ;

_Unwind_Reason_Code
FUNC_4 (_Unwind_Context * VAR_17, __gnu_unwind_state * VAR_18)
{
  _uw VAR_19;
  int VAR_20;
  _uw VAR_21;

  VAR_20 = 0;
  for (;;)
    {
      VAR_19 = FUNC_3 (VAR_18);
      if (VAR_19 == VAR_0)
 {

   if (!VAR_20)
     {
       FUNC_0 (VAR_17, VAR_6, VAR_1, VAR_13,
          &VAR_21);
       FUNC_2 (VAR_17, VAR_6, VAR_2, VAR_13,
          &VAR_21);
       VAR_20 = 1;
     }

   break;
 }
      if ((VAR_19 & 0x80) == 0)
 {

   _uw VAR_22;

   VAR_22 = ((VAR_19 & 0x3f) << 2) + 4;
   FUNC_0 (VAR_17, VAR_6, VAR_3, VAR_13, &VAR_21);
   if (VAR_19 & 0x40)
     VAR_21 -= VAR_22;
   else
     VAR_21 += VAR_22;
   FUNC_2 (VAR_17, VAR_6, VAR_3, VAR_13, &VAR_21);
   continue;
 }

      if ((VAR_19 & 0xf0) == 0x80)
 {
   VAR_19 = (VAR_19 << 8) | FUNC_3 (VAR_18);
   if (VAR_19 == 0x8000)
     {

       return VAR_4;
     }

   VAR_19 = (VAR_19 << 4) & 0xfff0;
   if (FUNC_1 (VAR_17, VAR_6, VAR_19, VAR_13)
       != VAR_16)
     return VAR_4;
   if (VAR_19 & (1 << VAR_2))
     VAR_20 = 1;
   continue;
 }
      if ((VAR_19 & 0xf0) == 0x90)
 {
   VAR_19 &= 0xf;
   if (VAR_19 == 13 || VAR_19 == 15)

     return VAR_4;

   FUNC_0 (VAR_17, VAR_6, VAR_19, VAR_13, &VAR_21);
   FUNC_2 (VAR_17, VAR_6, VAR_3, VAR_13, &VAR_21);
   continue;
 }
      if ((VAR_19 & 0xf0) == 0xa0)
 {

   _uw VAR_23;

   VAR_23 = (0xff0 >> (7 - (VAR_19 & 7))) & 0xff0;
   if (VAR_19 & 8)
     VAR_23 |= (1 << VAR_1);
   if (FUNC_1 (VAR_17, VAR_6, VAR_23, VAR_13)
       != VAR_16)
     return VAR_4;
   continue;
 }
      if ((VAR_19 & 0xf0) == 0xb0)
 {

   if (VAR_19 == 0xb1)
     {
       VAR_19 = FUNC_3 (VAR_18);
       if (VAR_19 == 0 || ((VAR_19 & 0xf0) != 0))

  return VAR_4;

       if (FUNC_1 (VAR_17, VAR_6, VAR_19, VAR_13)
    != VAR_16)
  return VAR_4;
       continue;
     }
   if (VAR_19 == 0xb2)
     {

       int VAR_24;

       FUNC_0 (VAR_17, VAR_6, VAR_3, VAR_13,
          &VAR_21);
       VAR_19 = FUNC_3 (VAR_18);
       VAR_24 = 2;
       while (VAR_19 & 0x80)
  {
    VAR_21 += ((VAR_19 & 0x7f) << VAR_24);
    VAR_24 += 7;
    VAR_19 = FUNC_3 (VAR_18);
  }
       VAR_21 += ((VAR_19 & 0x7f) << VAR_24) + 0x204;
       FUNC_2 (VAR_17, VAR_6, VAR_3, VAR_13,
          &VAR_21);
       continue;
     }
   if (VAR_19 == 0xb3)
     {

       VAR_19 = FUNC_3 (VAR_18);
       VAR_19 = ((VAR_19 & 0xf0) << 12) | ((VAR_19 & 0xf) + 1);
       if (FUNC_1 (VAR_17, VAR_8, VAR_19, VAR_15)
    != VAR_16)
  return VAR_4;
       continue;
     }
   if ((VAR_19 & 0xfc) == 0xb4)
     {

       VAR_19 = 0x40000 | ((VAR_19 & 3) + 1);
       if (FUNC_1 (VAR_17, VAR_7, VAR_19, VAR_12)
    != VAR_16)
  return VAR_4;
       continue;
     }


   VAR_19 = 0x80000 | ((VAR_19 & 7) + 1);
   if (FUNC_1 (VAR_17, VAR_8, VAR_19, VAR_15)
       != VAR_16)
     return VAR_4;
   continue;
 }
      if ((VAR_19 & 0xf0) == 0xc0)
 {
   if (VAR_19 == 0xc6)
     {

       VAR_19 = FUNC_3 (VAR_18);
       VAR_19 = ((VAR_19 & 0xf0) << 12) | ((VAR_19 & 0xf) + 1);
       if (FUNC_1 (VAR_17, VAR_10, VAR_19, VAR_14)
    != VAR_16)
  return VAR_4;
       continue;
     }
   if (VAR_19 == 0xc7)
     {
       VAR_19 = FUNC_3 (VAR_18);
       if (VAR_19 == 0 || (VAR_19 & 0xf0) != 0)

  return VAR_4;

       if (FUNC_1 (VAR_17, VAR_9, VAR_19, VAR_13)
    != VAR_16)
  return VAR_4;
       continue;
     }
   if ((VAR_19 & 0xf8) == 0xc0)
     {

       VAR_19 = 0xa0000 | ((VAR_19 & 0xf) + 1);
       if (FUNC_1 (VAR_17, VAR_10, VAR_19, VAR_14)
    != VAR_16)
  return VAR_4;
       continue;
     }
   if (VAR_19 == 0xc8)
     {

       VAR_19 = FUNC_3 (VAR_18);
       VAR_19 = ((VAR_19 & 0xf0) << 12) | ((VAR_19 & 0xf) + 1);
       if (FUNC_1 (VAR_17, VAR_7, VAR_19, VAR_12)
    != VAR_16)
  return VAR_4;
       continue;
     }
   if (VAR_19 == 0xc9)
     {

       VAR_19 = FUNC_3 (VAR_18);
       VAR_19 = ((VAR_19 & 0xf0) << 12) | ((VAR_19 & 0xf) + 1);
       if (FUNC_1 (VAR_17, VAR_8, VAR_19, VAR_11)
    != VAR_16)
  return VAR_4;
       continue;
     }

   return VAR_4;
 }
      if ((VAR_19 & 0xf8) == 0xd0)
 {

   VAR_19 = 0x80000 | ((VAR_19 & 7) + 1);
   if (FUNC_1 (VAR_17, VAR_8, VAR_19, VAR_11)
       != VAR_16)
     return VAR_4;
   continue;
 }

      return VAR_4;
    }
  return VAR_5;
}

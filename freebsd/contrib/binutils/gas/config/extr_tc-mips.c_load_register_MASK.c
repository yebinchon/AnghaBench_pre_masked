
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int valueT ;
typedef int offsetT ;
struct TYPE_5__ {scalar_t__ X_op; int X_add_number; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,...) ;
 int FUNC_5 (int) ;
 int* VAR_5 ;
 int FUNC_6 (TYPE_1__*,char*,char*,int,int,...) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static void
FUNC_9 (int VAR_6, expressionS *VAR_7, int VAR_8)
{
  int VAR_9;
  expressionS VAR_10, VAR_11;

  if (VAR_7->X_op != VAR_3)
    {
      FUNC_5 (VAR_7->X_op == VAR_4);


      if (!VAR_8)
 FUNC_7 (VAR_7);

      if (FUNC_1 (VAR_7->X_add_number))
 {



   FUNC_6 (VAR_7, "addiu", "t,r,j", VAR_6, 0, VAR_1);
   return;
 }
      else if (VAR_7->X_add_number >= 0 && VAR_7->X_add_number < 0x10000)
 {


   FUNC_6 (VAR_7, "ori", "t,r,i", VAR_6, 0, VAR_1);
   return;
 }
      else if ((FUNC_2 (VAR_7->X_add_number)))
 {

   FUNC_6 (VAR_7, "lui", "t,u", VAR_6, VAR_0);
   if ((VAR_7->X_add_number & 0xffff) != 0)
     FUNC_6 (VAR_7, "ori", "t,r,i", VAR_6, VAR_6, VAR_1);
   return;
 }
    }



  if (!VAR_8 || VAR_2)
    {
      char VAR_12[32];

      FUNC_8 (VAR_12, VAR_7->X_add_number);
      FUNC_4 (FUNC_3("Number (0x%s) larger than 32 bits"), VAR_12);
      FUNC_6 (VAR_7, "addiu", "t,r,j", VAR_6, 0, VAR_1);
      return;
    }

  if (VAR_7->X_op != VAR_3)
    {
      VAR_10 = *VAR_7;
      VAR_10 = (valueT) VAR_10 >> 16;
      VAR_10 = (valueT) VAR_10 >> 16;
      VAR_10 &= 0xffffffff;
      VAR_11 = *VAR_7;
      VAR_11 &= 0xffffffff;
    }
  else
    {
      FUNC_5 (VAR_7->X_add_number > 2);
      if (VAR_7->X_add_number == 3)
 VAR_5[3] = 0;
      else if (VAR_7->X_add_number > 4)
 FUNC_4 (FUNC_3("Number larger than 64 bits"));
      VAR_11 = VAR_4;
      VAR_11 = VAR_5[0] + (VAR_5[1] << 16);
      VAR_10 = VAR_4;
      VAR_10 = VAR_5[2] + (VAR_5[3] << 16);
    }

  if (VAR_10 == 0)
    VAR_9 = 0;
  else
    {
      int VAR_13, VAR_14;
      unsigned long VAR_15, VAR_16;

      if (VAR_10 == (offsetT) 0xffffffff)
 {
   if ((VAR_11 & 0xffff8000) == 0xffff8000)
     {
       FUNC_6 (&VAR_11, "addiu", "t,r,j", VAR_6, 0, VAR_1);
       return;
     }
   if (VAR_11 & 0x80000000)
     {
       FUNC_6 (&VAR_11, "lui", "t,u", VAR_6, VAR_0);
       if (VAR_11 & 0xffff)
  FUNC_6 (&VAR_11, "ori", "t,r,i", VAR_6, VAR_6, VAR_1);
       return;
     }
 }




      VAR_13 = 17;
      do
 {
   unsigned long VAR_17, VAR_18;

   if (VAR_13 < 32)
     {
       VAR_17 = 0xffff >> (32 - VAR_13);
       VAR_18 = (0xffff << VAR_13) & 0xffffffff;
     }
   else
     {
       VAR_17 = 0xffff << (VAR_13 - 32);
       VAR_18 = 0;
     }
   if ((VAR_10 & ~(offsetT) VAR_17) == 0
       && (VAR_11 & ~(offsetT) VAR_18) == 0)
     {
       expressionS VAR_19;

       VAR_19.X_op = VAR_4;
       if (VAR_13 < 32)
  VAR_19.X_add_number = ((VAR_10 << (32 - VAR_13))
        | (VAR_11 >> VAR_13));
       else
  VAR_19.X_add_number = VAR_10 >> (VAR_13 - 32);
       FUNC_6 (&VAR_19, "ori", "t,r,i", VAR_6, 0, VAR_1);
       FUNC_6 (((void*)0), (VAR_13 >= 32) ? "dsll32" : "dsll", "d,w,<",
      VAR_6, VAR_6, (VAR_13 >= 32) ? VAR_13 - 32 : VAR_13);
       return;
     }
   ++VAR_13;
 }
      while (VAR_13 <= (64 - 16));



      VAR_15 = (unsigned long) (VAR_10 & 0xffffffff);
      VAR_16 = (unsigned long) (VAR_11 & 0xffffffff);
      if (VAR_16 != 0)
 {
   VAR_14 = 0;
   while ((VAR_16 & 1) == 0)
     {
       VAR_16 >>= 1;
       ++VAR_14;
     }
   VAR_16 |= (VAR_15 & (((unsigned long) 1 << VAR_14) - 1)) << (32 - VAR_14);
   VAR_15 >>= VAR_14;
 }
      else
 {
   VAR_14 = 32;
   while ((VAR_15 & 1) == 0)
     {
       VAR_15 >>= 1;
       ++VAR_14;
     }
   VAR_16 = VAR_15;
   VAR_15 = 0;
 }


      if ((VAR_15 == 0 && ((VAR_16 + 1) & VAR_16) == 0)
   || (VAR_16 == 0xffffffff && ((VAR_15 + 1) & VAR_15) == 0))
 {
   VAR_13 = FUNC_0 ((unsigned int) VAR_10);
   if (VAR_13 != 0)
     {
       expressionS VAR_20;



       VAR_20.X_op = VAR_4;
       VAR_20.X_add_number = (offsetT) -1;
       FUNC_6 (&VAR_20, "addiu", "t,r,j", VAR_6, 0, VAR_1);
       if (VAR_14 != 0)
  {
    VAR_14 += VAR_13;
    FUNC_6 (((void*)0), (VAR_14 >= 32) ? "dsll32" : "dsll", "d,w,<",
          VAR_6, VAR_6, (VAR_14 >= 32) ? VAR_14 - 32 : VAR_14);
  }
       FUNC_6 (((void*)0), (VAR_13 >= 32) ? "dsrl32" : "dsrl", "d,w,<",
      VAR_6, VAR_6, (VAR_13 >= 32) ? VAR_13 - 32 : VAR_13);
       return;
     }
 }



      if ((VAR_10 & 0x80000000) != 0)
 VAR_10 |= ~(offsetT) 0xffffffff;
      FUNC_9 (VAR_6, &VAR_10, 0);
      VAR_9 = VAR_6;
    }
  if ((VAR_11 & 0xffff0000) == 0)
    {
      if (VAR_9 != 0)
 {
   FUNC_6 (((void*)0), "dsll32", "d,w,<", VAR_6, VAR_9, 0);
   VAR_9 = VAR_6;
 }
    }
  else
    {
      expressionS VAR_21;

      if ((VAR_9 == 0) && (VAR_11 == (offsetT) 0xffffffff))
 {
   FUNC_6 (&VAR_11, "lui", "t,u", VAR_6, VAR_0);
   FUNC_6 (((void*)0), "dsrl32", "d,w,<", VAR_6, VAR_6, 0);
   return;
 }

      if (VAR_9 != 0)
 {
   FUNC_6 (((void*)0), "dsll", "d,w,<", VAR_6, VAR_9, 16);
   VAR_9 = VAR_6;
 }
      VAR_21 = VAR_11;
      VAR_21 >>= 16;
      FUNC_6 (&VAR_21, "ori", "t,r,i", VAR_6, VAR_9, VAR_1);
      FUNC_6 (((void*)0), "dsll", "d,w,<", VAR_6, VAR_6, 16);
      VAR_9 = VAR_6;
    }
  if ((VAR_11 & 0xffff) != 0)
    FUNC_6 (&VAR_11, "ori", "t,r,i", VAR_6, VAR_9, VAR_1);
}

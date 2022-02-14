
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int U16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int* FUNC_0 (void*) ;
 int FUNC_1 (int*,int) ;

U16 FUNC_2(
   void * VAR_6,
   U8 VAR_7
)
{
   U8 * VAR_8 = FUNC_0(VAR_6);
   U16 VAR_9 = 0;


   if (VAR_7 == 6)
      VAR_9 += VAR_1;
   else
      VAR_9 += VAR_0;


   if ((FUNC_1(VAR_8, 1) & VAR_2) == 0)
   {

      if ( (VAR_7 == 10)
         && (FUNC_1(VAR_8, 1) & VAR_3) )
         VAR_9 += VAR_4;
      else
         VAR_9 += VAR_5;
   }

   return VAR_9;
}

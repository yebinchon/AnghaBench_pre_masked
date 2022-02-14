
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int BOOL ;







 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 scalar_t__ FUNC_1 (int*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int*,int ) ;

__attribute__((used)) static
BOOL FUNC_3(
   U8 * VAR_3
)
{
   U8 VAR_4;

   if(FUNC_1(VAR_3) > 0)
   {
      if(FUNC_2(VAR_3, 0 ) == VAR_1)
      {
         VAR_4 = FUNC_0(VAR_3, 9);
      }
      else
      {
         VAR_4 = FUNC_0(VAR_3, 14);
      }

      switch(VAR_4)
      {
         case 132:
         case 131:
         case 130:
         case 129:
         case 128:
            return VAR_0;
         break;

         default:
            return VAR_2;
      }
   }

   return VAR_0;
}

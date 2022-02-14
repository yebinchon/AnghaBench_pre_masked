
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(unsigned VAR_1)
{
 int VAR_2;

 for (VAR_2 = 2; VAR_2 <= 6; VAR_2 ++) {
  if ((VAR_1 >> VAR_2) & 1) {
   int VAR_3;

   switch (VAR_2) {
   case 3: VAR_3 = 224; break;
   case 4: VAR_3 = 256; break;
   case 5: VAR_3 = 384; break;
   case 6: VAR_3 = 512; break;
   default:
    VAR_3 = 1;
    break;
   }
   FUNC_0(VAR_0, " sha%d", VAR_3);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;

__attribute__((used)) static int
FUNC_6(const u_char *VAR_0, u_int VAR_1, u_int VAR_2)
{
   int VAR_3;


   if (VAR_1 < 128) {
       switch (VAR_2) {
       case 1:
           VAR_3 = *VAR_0;
           break;
       case 2:
           VAR_3 = FUNC_3(VAR_0);
           break;
       case 3:
           VAR_3 = FUNC_4(VAR_0);
           break;
       case 4:
           VAR_3 = FUNC_5(VAR_0);
           break;
       default:
           VAR_3 = -1;
           break;
       }
   } else {

       switch (VAR_2) {
       case 1:
           VAR_3 = *VAR_0;
           break;
       case 2:
           VAR_3 = FUNC_0(VAR_0);
           break;
       case 3:
           VAR_3 = FUNC_1(VAR_0);
           break;
       case 4:
           VAR_3 = FUNC_2(VAR_0);
           break;
       default:
           VAR_3 = -1;
           break;
       }
   }
   return VAR_3;
}

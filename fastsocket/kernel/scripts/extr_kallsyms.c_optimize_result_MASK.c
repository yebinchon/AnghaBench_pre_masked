
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int** VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_2, VAR_3;



 for (VAR_2 = 255; VAR_2 >= 0; VAR_2--) {



  if (!VAR_1[VAR_2]) {


   VAR_3 = FUNC_1();


   VAR_1[VAR_2] = 2;
   VAR_0[VAR_2][0] = VAR_3 & 0xFF;
   VAR_0[VAR_2][1] = (VAR_3 >> 8) & 0xFF;


   FUNC_0(VAR_0[VAR_2], VAR_2);
  }
 }
}

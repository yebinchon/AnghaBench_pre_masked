
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KEYCMD ;





 int VAR_0 ;
 int VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

void
FUNC_2(void)
{
    if (VAR_0)
 return;







    {
 KEYCMD VAR_3[VAR_1];
 static KEYCMD *const VAR_4[3] = { 130, 128, 129 };
 int VAR_5, VAR_6;

 for (VAR_6=0; VAR_6<3; ++VAR_6)
 {

     for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_3[VAR_5] = VAR_4[VAR_6][VAR_5];
     }

     for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4[VAR_6][VAR_2[VAR_5]] = VAR_3[VAR_5];
     }
 }
    }





    FUNC_0();


    VAR_0 = 1;
}

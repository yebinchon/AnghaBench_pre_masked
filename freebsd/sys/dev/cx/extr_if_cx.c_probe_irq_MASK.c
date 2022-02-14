
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cx_board_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2 (cx_board_t *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4;


 FUNC_1 (VAR_0, -VAR_1);
 FUNC_0 (100);
 for (VAR_4=0; VAR_4<5; ++VAR_4) {


  VAR_3 = FUNC_1 (VAR_0, VAR_1);
  FUNC_0 (100);



  VAR_2 = FUNC_1 (VAR_0, -VAR_1);
  FUNC_0 (100);
  if ((VAR_2 & ~VAR_3) == 1 << VAR_1) {
   FUNC_1 (VAR_0, 0);


   return 1;
  }
 }


 FUNC_1 (VAR_0, 0);
 return 0;
}

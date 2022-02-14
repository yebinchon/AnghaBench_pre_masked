
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * cpl_handler_t ;




 int VAR_0 ;



 int FUNC_0 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (uintptr_t*,uintptr_t) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (int **) ;
 int * VAR_6 ;
 int ** VAR_7 ;

void
FUNC_3(int VAR_8, cpl_handler_t VAR_9, int VAR_10)
{
 uintptr_t *VAR_11;

 FUNC_0(VAR_8 < FUNC_2(VAR_7));
 FUNC_0(VAR_10 > VAR_0);
 FUNC_0(VAR_10 < VAR_1);
 FUNC_0(VAR_7[VAR_8] != ((void*)0));

 switch (VAR_8) {
 case 128:
  VAR_11 = (uintptr_t *)&VAR_6[VAR_10];
  break;
 case 129:
  VAR_11 = (uintptr_t *)&VAR_5[VAR_10];
  break;
 case 131:
  VAR_11 = (uintptr_t *)&VAR_3[VAR_10];
  break;
 case 132:
  VAR_11 = (uintptr_t *)&VAR_2[VAR_10];
  break;
 case 130:
  VAR_11 = (uintptr_t *)&VAR_4[VAR_10];
  break;
 default:
  FUNC_0(0);
  return;
 }
 FUNC_0(VAR_9 == ((void*)0) || *VAR_11 == (uintptr_t)((void*)0));
 FUNC_1(VAR_11, (uintptr_t)VAR_9);
}

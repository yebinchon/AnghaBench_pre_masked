
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct algo_needs {int* needs; size_t num; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int ,int) ;

void FUNC_3(struct algo_needs* VAR_1, uint8_t* VAR_2)
{
 uint8_t VAR_3;
 size_t VAR_4 = 0;

 FUNC_2(VAR_1->needs, 0, sizeof(uint8_t)*VAR_0);
 while( (VAR_3=*VAR_2++) != 0) {
  FUNC_1(FUNC_0((int)VAR_3));
  FUNC_1(VAR_1->needs[VAR_3] == 0);
  VAR_1->needs[VAR_3] = 1;
  VAR_4++;
 }
 VAR_1->num = VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int u_int ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 unsigned int* VAR_3 ;
 unsigned int* VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_2(vm_offset_t VAR_6, int VAR_7)
{
 unsigned int *VAR_8 = (int *) VAR_6;
 unsigned int *VAR_9 = VAR_8 + (VAR_4 - VAR_3);
 int VAR_10;





 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  if ((VAR_7 & (1 << VAR_10)) == 0) {

   continue;
  }
  VAR_8[VAR_10] = VAR_3[VAR_10];
  VAR_9[VAR_10] = VAR_4[VAR_10];
 }


 FUNC_1(VAR_6, (VAR_0 * 2) * sizeof(u_int));

 VAR_5 = VAR_6;

 if (VAR_6 == VAR_1) {
  FUNC_0(VAR_2, VAR_2);
 }

}

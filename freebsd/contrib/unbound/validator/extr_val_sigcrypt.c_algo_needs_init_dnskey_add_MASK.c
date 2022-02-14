
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct ub_packed_rrset_key {int dummy; } ;
struct algo_needs {size_t num; int* needs; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ub_packed_rrset_key*,size_t) ;
 size_t FUNC_2 (struct ub_packed_rrset_key*) ;

void FUNC_3(struct algo_needs* VAR_0,
        struct ub_packed_rrset_key* VAR_1, uint8_t* VAR_2)
{
 uint8_t VAR_3;
 size_t VAR_4, VAR_5 = VAR_0->num;
 size_t VAR_6 = FUNC_2(VAR_1);

 for(VAR_4=0; VAR_4<VAR_6; VAR_4++) {
  VAR_3 = (uint8_t)FUNC_1(VAR_1, VAR_4);
  if(!FUNC_0((int)VAR_3))
   continue;
  if(VAR_0->needs[VAR_3] == 0) {
   VAR_0->needs[VAR_3] = 1;
   VAR_2[VAR_5] = VAR_3;
   VAR_5++;
  }
 }
 VAR_2[VAR_5] = 0;
 VAR_0->num = VAR_5;
}

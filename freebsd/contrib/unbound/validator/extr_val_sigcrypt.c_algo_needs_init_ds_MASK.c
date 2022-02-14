
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct ub_packed_rrset_key {int dummy; } ;
struct algo_needs {int* needs; size_t num; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_2 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int ,int) ;
 size_t FUNC_5 (struct ub_packed_rrset_key*) ;

void FUNC_6(struct algo_needs* VAR_1, struct ub_packed_rrset_key* VAR_2,
 int VAR_3, uint8_t* VAR_4)
{
 uint8_t VAR_5;
 size_t VAR_6, VAR_7 = 0;
 size_t VAR_8 = FUNC_5(VAR_2);

 FUNC_4(VAR_1->needs, 0, sizeof(uint8_t)*VAR_0);
 for(VAR_6=0; VAR_6<VAR_8; VAR_6++) {
  if(FUNC_1(VAR_2, VAR_6) != VAR_3)
   continue;
  VAR_5 = (uint8_t)FUNC_2(VAR_2, VAR_6);
  if(!FUNC_0((int)VAR_5))
   continue;
  FUNC_3(VAR_5 != 0);
  if(VAR_1->needs[VAR_5] == 0) {
   VAR_1->needs[VAR_5] = 1;
   VAR_4[VAR_7] = VAR_5;
   VAR_7++;
  }
 }
 VAR_4[VAR_7] = 0;
 VAR_1->num = VAR_7;
}

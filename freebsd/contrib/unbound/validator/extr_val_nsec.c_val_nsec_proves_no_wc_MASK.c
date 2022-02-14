
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ub_packed_rrset_key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int**,size_t*,int) ;
 int FUNC_2 (int*,int*,size_t) ;
 int* FUNC_3 (int*,struct ub_packed_rrset_key*) ;
 scalar_t__ FUNC_4 (struct ub_packed_rrset_key*,int*) ;

int
FUNC_5(struct ub_packed_rrset_key* VAR_1, uint8_t* VAR_2,
 size_t VAR_3)
{


 int VAR_4;
 uint8_t* VAR_5 = FUNC_3(VAR_2, VAR_1);
 uint8_t* VAR_6;
 size_t VAR_7;
 uint8_t VAR_8[VAR_0+3];
 if(!VAR_5)
  return 0;




 VAR_4 = FUNC_0(VAR_2) - FUNC_0(VAR_5);

 if(VAR_4 > 0) {

  VAR_6 = VAR_2;
  VAR_7 = VAR_3;
  FUNC_1(&VAR_6, &VAR_7, VAR_4);
  if(VAR_7 > VAR_0-2)
   return 0;
  VAR_8[0] = 1;
  VAR_8[1] = (uint8_t)'*';
  FUNC_2(VAR_8+2, VAR_6, VAR_7);
  if(FUNC_4(VAR_1, VAR_8)) {
   return 1;
  }
 }
 return 0;
}

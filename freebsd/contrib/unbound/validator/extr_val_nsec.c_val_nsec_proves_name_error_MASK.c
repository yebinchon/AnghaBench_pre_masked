
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int * dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ub_packed_rrset_key*,int **,size_t*) ;
 scalar_t__ FUNC_4 (struct ub_packed_rrset_key*,int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;

int
FUNC_6(struct ub_packed_rrset_key* VAR_3, uint8_t* VAR_4)
{
 uint8_t* VAR_5 = VAR_3->rk.dname;
 uint8_t* VAR_6;
 size_t VAR_7;
 if(!FUNC_3(VAR_3, &VAR_6, &VAR_7))
  return 0;


 if(FUNC_5(VAR_4, VAR_5) == 0) {
  return 0;
 }




 if(FUNC_2(VAR_4, VAR_5) &&
  (FUNC_4(VAR_3, VAR_0) ||
  (FUNC_4(VAR_3, VAR_1)
   && !FUNC_4(VAR_3, VAR_2))
  )) {
  return 0;
 }

 if(FUNC_5(VAR_5, VAR_6) == 0) {



  if(FUNC_1(VAR_4, VAR_6))
   return 1;
 }
 else if(FUNC_0(VAR_5, VAR_6) > 0) {




  if(FUNC_0(VAR_5, VAR_4) < 0 &&
   FUNC_1(VAR_4, VAR_6))
   return 1;
 } else {

  if(FUNC_0(VAR_5, VAR_4) < 0 &&
     FUNC_0(VAR_4, VAR_6) < 0) {
   return 1;
  }
 }
 return 0;
}

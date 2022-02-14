
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ub_packed_rrset_key {int dummy; } ;
struct module_env {int scratch; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct module_env*,struct ub_packed_rrset_key*,size_t,struct ub_packed_rrset_key*,size_t,int *) ;
 size_t FUNC_1 (struct ub_packed_rrset_key*,size_t) ;
 scalar_t__ FUNC_2 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_3 (struct ub_packed_rrset_key*,size_t,int **,size_t*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int *,int *,size_t) ;
 int * FUNC_5 (int ,size_t) ;
 int FUNC_6 (int ,char*) ;

int FUNC_7(struct module_env* VAR_3,
 struct ub_packed_rrset_key* VAR_4, size_t VAR_5,
 struct ub_packed_rrset_key* VAR_6, size_t VAR_7)
{
 uint8_t* VAR_8;
 size_t VAR_9;
 uint8_t* VAR_10;
 size_t VAR_11 = FUNC_1(VAR_6, VAR_7);

 if(VAR_11 == 0) {
  FUNC_6(VAR_1, "DS fail: not supported, or DS RR "
   "format error");
  return 0;
 }

 if(VAR_2 && FUNC_2(VAR_6, VAR_7)==VAR_0)
  return 1;



 FUNC_3(VAR_6, VAR_7, &VAR_8, &VAR_9);
 if(!VAR_8 || VAR_9 != VAR_11) {
  FUNC_6(VAR_1, "DS fail: DS RR algo and digest do not "
   "match each other");
  return 0;
 }

 VAR_10 = FUNC_5(VAR_3->scratch, VAR_11);
 if(!VAR_10) {
  FUNC_6(VAR_1, "DS fail: out of memory");
  return 0;
 }
 if(!FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6,
  VAR_7, VAR_10)) {
  FUNC_6(VAR_1, "DS fail: could not calc key digest");
  return 0;
 }
 if(FUNC_4(VAR_10, VAR_8, VAR_9) != 0) {
  FUNC_6(VAR_1, "DS fail: digest is different");
  return 0;
 }
 return 1;
}

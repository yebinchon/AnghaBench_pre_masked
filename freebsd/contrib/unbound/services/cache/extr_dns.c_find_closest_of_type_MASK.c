
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef int time_t ;
struct ub_packed_rrset_key {int dummy; } ;
struct module_env {int rrset_cache; } ;


 struct ub_packed_rrset_key* FUNC_0 (int ,scalar_t__*,size_t,int ,int ,int ,int ,int ) ;

__attribute__((used)) static struct ub_packed_rrset_key*
FUNC_1(struct module_env* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 uint16_t VAR_3, time_t VAR_4, uint16_t VAR_5, int VAR_6)
{
 struct ub_packed_rrset_key *VAR_7;
 uint8_t VAR_8;

 if(VAR_6) {

  VAR_8 = *VAR_1;
  VAR_1 += VAR_8 + 1;
  VAR_2 -= VAR_8 + 1;
 }


 while(VAR_2 > 0) {
  if((VAR_7 = FUNC_0(VAR_0->rrset_cache, VAR_1,
   VAR_2, VAR_5, VAR_3, 0, VAR_4, 0)))
   return VAR_7;


  VAR_8 = *VAR_1;
  VAR_1 += VAR_8 + 1;
  VAR_2 -= VAR_8 + 1;
 }
 return ((void*)0);
}

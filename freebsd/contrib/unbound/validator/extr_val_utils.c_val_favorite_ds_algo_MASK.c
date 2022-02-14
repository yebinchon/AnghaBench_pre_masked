
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_packed_rrset_key {int dummy; } ;


 int FUNC_0 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_1 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_2 (struct ub_packed_rrset_key*,size_t) ;
 size_t FUNC_3 (struct ub_packed_rrset_key*) ;

int FUNC_4(struct ub_packed_rrset_key* VAR_0)
{
 size_t VAR_1, VAR_2 = FUNC_3(VAR_0);
 int VAR_3, VAR_4 = 0;

 for(VAR_1=0; VAR_1<VAR_2; VAR_1++) {
  if(!FUNC_0(VAR_0, VAR_1) ||
   !FUNC_2(VAR_0, VAR_1)) {
   continue;
  }
  VAR_3 = FUNC_1(VAR_0, VAR_1);
  if(VAR_3 > VAR_4)
   VAR_4 = VAR_3;
 }
 return VAR_4;
}

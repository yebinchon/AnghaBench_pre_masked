
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ rrset_class; int dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(const void* VAR_0, const void* VAR_1)
{
 struct ub_packed_rrset_key* VAR_2 = *(struct ub_packed_rrset_key**)VAR_0;
 struct ub_packed_rrset_key* VAR_3 = *(struct ub_packed_rrset_key**)VAR_1;
 int VAR_4 = FUNC_0(VAR_2->rk.dname, VAR_3->rk.dname);
 if(VAR_4 != 0)
  return VAR_4;
 if(VAR_2->rk.type != VAR_3->rk.type) {
  if(FUNC_1(VAR_2->rk.type) > FUNC_1(VAR_3->rk.type))
   return 1;
  else return -1;
 }
 if(VAR_2->rk.rrset_class != VAR_3->rk.rrset_class) {
  if(FUNC_1(VAR_2->rk.rrset_class) > FUNC_1(VAR_3->rk.rrset_class))
   return 1;
  else return -1;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ dname_len; scalar_t__ rrset_class; scalar_t__ flags; int dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;


 int FUNC_0 (int ,int ) ;

int
FUNC_1(void* VAR_0, void* VAR_1)
{
 struct ub_packed_rrset_key* VAR_2 = (struct ub_packed_rrset_key*)VAR_0;
 struct ub_packed_rrset_key* VAR_3 = (struct ub_packed_rrset_key*)VAR_1;
 int VAR_4;
 if(VAR_2 == VAR_3)
  return 0;
 if(VAR_2->rk.type != VAR_3->rk.type) {
  if(VAR_2->rk.type < VAR_3->rk.type)
   return -1;
  return 1;
 }
 if(VAR_2->rk.dname_len != VAR_3->rk.dname_len) {
  if(VAR_2->rk.dname_len < VAR_3->rk.dname_len)
   return -1;
  return 1;
 }
 if((VAR_4=FUNC_0(VAR_2->rk.dname, VAR_3->rk.dname)) != 0)
  return VAR_4;
 if(VAR_2->rk.rrset_class != VAR_3->rk.rrset_class) {
  if(VAR_2->rk.rrset_class < VAR_3->rk.rrset_class)
   return -1;
  return 1;
 }
 if(VAR_2->rk.flags != VAR_3->rk.flags) {
  if(VAR_2->rk.flags < VAR_3->rk.flags)
   return -1;
  return 1;
 }
 return 0;
}

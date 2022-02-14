
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ rrset_class; scalar_t__ dname_len; int dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct ub_packed_rrset_key** VAR_0, size_t VAR_1,
 struct ub_packed_rrset_key* VAR_2)
{
 size_t VAR_3;
 for(VAR_3=0; VAR_3<VAR_1; VAR_3++) {
  if(VAR_0[VAR_3]->rk.type == VAR_2->rk.type &&
   VAR_0[VAR_3]->rk.rrset_class == VAR_2->rk.rrset_class &&
   VAR_0[VAR_3]->rk.dname_len == VAR_2->rk.dname_len &&
   FUNC_0(VAR_0[VAR_3]->rk.dname, VAR_2->rk.dname)
   == 0)
   return 1;
 }
 return 0;
}

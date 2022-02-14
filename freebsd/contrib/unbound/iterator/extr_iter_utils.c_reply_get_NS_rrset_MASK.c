
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct reply_info {size_t rrset_count; struct ub_packed_rrset_key** rrsets; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static struct ub_packed_rrset_key*
FUNC_1(struct reply_info* VAR_1)
{
 size_t VAR_2;
 for(VAR_2=0; VAR_2<VAR_1->rrset_count; VAR_2++) {
  if(VAR_1->rrsets[VAR_2]->rk.type == FUNC_0(VAR_0)) {
   return VAR_1->rrsets[VAR_2];
  }
 }
 return ((void*)0);
}

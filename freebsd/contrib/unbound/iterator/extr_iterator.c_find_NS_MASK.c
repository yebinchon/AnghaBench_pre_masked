
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct reply_info {struct ub_packed_rrset_key** rrsets; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static struct ub_packed_rrset_key*
FUNC_1(struct reply_info* VAR_1, size_t VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 for(VAR_4=VAR_2; VAR_4<VAR_3; VAR_4++) {
  if(FUNC_0(VAR_1->rrsets[VAR_4]->rk.type) == VAR_0)
   return VAR_1->rrsets[VAR_4];
 }
 return ((void*)0);
}

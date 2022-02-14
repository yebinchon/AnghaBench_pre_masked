
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_3__ {size_t dname_len; int dname; int rrset_class; int type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct dns_msg {TYPE_2__* rep; } ;
struct TYPE_4__ {size_t rrset_count; struct ub_packed_rrset_key** rrsets; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct dns_msg* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 uint16_t VAR_3, uint16_t VAR_4)
{
 size_t VAR_5;
 for(VAR_5=0; VAR_5<VAR_0->rep->rrset_count; VAR_5++) {
  struct ub_packed_rrset_key* VAR_6 = VAR_0->rep->rrsets[VAR_5];
  if(FUNC_0(VAR_6->rk.type) == VAR_3 && VAR_6->rk.dname_len == VAR_2 &&
   FUNC_0(VAR_6->rk.rrset_class) == VAR_4 &&
   FUNC_1(VAR_6->rk.dname, VAR_1) == 0)
   return 1;
 }
 return 0;
}

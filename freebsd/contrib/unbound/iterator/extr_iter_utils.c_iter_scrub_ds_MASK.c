
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int rrset_class; int type; int dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct dns_msg {TYPE_2__* rep; } ;
struct TYPE_4__ {size_t an_numrrsets; size_t ns_numrrsets; size_t rrset_count; struct ub_packed_rrset_key** rrsets; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct ub_packed_rrset_key**,struct ub_packed_rrset_key**,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;

void
FUNC_5(struct dns_msg* VAR_2, struct ub_packed_rrset_key* VAR_3, uint8_t* VAR_4)
{





 size_t VAR_5 = VAR_2->rep->an_numrrsets;
 while(VAR_5 < (VAR_2->rep->an_numrrsets + VAR_2->rep->ns_numrrsets)) {
  struct ub_packed_rrset_key* VAR_6 = VAR_2->rep->rrsets[VAR_5];
  if(FUNC_3(VAR_6->rk.type) == VAR_0 &&
   (!VAR_3 || !FUNC_0(VAR_3->rk.dname, VAR_6->rk.dname)
   || FUNC_4(VAR_4, VAR_6->rk.dname) == 0)) {
   FUNC_1(VAR_1, "removing irrelevant DS",
    VAR_6->rk.dname, FUNC_3(VAR_6->rk.type),
    FUNC_3(VAR_6->rk.rrset_class));
   FUNC_2(VAR_2->rep->rrsets+VAR_5, VAR_2->rep->rrsets+VAR_5+1,
    sizeof(struct ub_packed_rrset_key*) *
    (VAR_2->rep->rrset_count-VAR_5-1));
   VAR_2->rep->ns_numrrsets--;
   VAR_2->rep->rrset_count--;

   continue;
  }
  VAR_5++;
 }
}

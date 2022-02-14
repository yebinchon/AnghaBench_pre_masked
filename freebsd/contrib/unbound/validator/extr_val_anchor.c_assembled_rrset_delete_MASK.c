
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct ub_packed_rrset_key* dname; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; struct ub_packed_rrset_key* rr_len; struct ub_packed_rrset_key* rr_ttl; struct ub_packed_rrset_key* rr_data; TYPE_1__ entry; } ;
struct packed_rrset_data {TYPE_2__ rk; struct packed_rrset_data* rr_len; struct packed_rrset_data* rr_ttl; struct packed_rrset_data* rr_data; TYPE_1__ entry; } ;


 int FUNC_0 (struct ub_packed_rrset_key*) ;

__attribute__((used)) static void
FUNC_1(struct ub_packed_rrset_key* VAR_0)
{
 if(!VAR_0) return;
 if(VAR_0->entry.data) {
  struct packed_rrset_data* VAR_1 = (struct packed_rrset_data*)
   VAR_0->entry.data;
  FUNC_0(VAR_1->rr_data);
  FUNC_0(VAR_1->rr_ttl);
  FUNC_0(VAR_1->rr_len);
  FUNC_0(VAR_1);
 }
 FUNC_0(VAR_0->rk.dname);
 FUNC_0(VAR_0);
}

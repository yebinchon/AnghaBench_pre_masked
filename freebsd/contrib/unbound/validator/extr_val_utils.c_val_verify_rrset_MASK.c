
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct val_env {int bogus_lock; int num_rrset_bogus; int bogus_ttl; } ;
struct TYPE_4__ {int rrset_class; int type; int dname; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct packed_rrset_data {scalar_t__ security; size_t count; size_t rrsig_count; int * rr_ttl; int ttl; int trust; } ;
struct module_qstate {int dummy; } ;
struct module_env {int * now; int rrset_cache; int scratch; } ;
typedef int sldns_pkt_section ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 int VAR_0 ;
 int FUNC_0 (struct module_env*,struct val_env*,struct ub_packed_rrset_key*,struct ub_packed_rrset_key*,int *,char**,int ,struct module_qstate*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct ub_packed_rrset_key*,int ) ;
 int VAR_1 ;
 int FUNC_7 (int ,struct ub_packed_rrset_key*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,int ) ;

enum sec_status
FUNC_10(struct module_env* VAR_4, struct val_env* VAR_5,
        struct ub_packed_rrset_key* VAR_6, struct ub_packed_rrset_key* VAR_7,
 uint8_t* VAR_8, char** VAR_9, sldns_pkt_section VAR_10,
 struct module_qstate* VAR_11)
{
 enum sec_status VAR_12;
 struct packed_rrset_data* VAR_13 = (struct packed_rrset_data*)VAR_6->
  entry.data;
 if(VAR_13->security == VAR_3) {

  FUNC_3(VAR_0, "verify rrset cached",
   VAR_6->rk.dname, FUNC_4(VAR_6->rk.type),
   FUNC_4(VAR_6->rk.rrset_class));
  return VAR_13->security;
 }

 FUNC_6(VAR_4->rrset_cache, VAR_6, *VAR_4->now);
 if(VAR_13->security == VAR_3) {
  FUNC_3(VAR_0, "verify rrset from cache",
   VAR_6->rk.dname, FUNC_4(VAR_6->rk.type),
   FUNC_4(VAR_6->rk.rrset_class));
  return VAR_13->security;
 }
 FUNC_3(VAR_0, "verify rrset", VAR_6->rk.dname,
  FUNC_4(VAR_6->rk.type), FUNC_4(VAR_6->rk.rrset_class));
 VAR_12 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
  VAR_10, VAR_11);
 FUNC_9(VAR_0, "verify result: %s", FUNC_8(VAR_12));
 FUNC_5(VAR_4->scratch);




 if(VAR_12 > VAR_13->security) {
  VAR_13->security = VAR_12;
  if(VAR_12 == VAR_3)
   VAR_13->trust = VAR_1;
  else if(VAR_12 == VAR_2) {
   size_t VAR_14;

   VAR_13->ttl = VAR_5->bogus_ttl;
   for(VAR_14=0; VAR_14<VAR_13->count+VAR_13->rrsig_count; VAR_14++)
    VAR_13->rr_ttl[VAR_14] = VAR_5->bogus_ttl;


   FUNC_1(&VAR_5->bogus_lock);
   VAR_5->num_rrset_bogus++;
   FUNC_2(&VAR_5->bogus_lock);
  }

  FUNC_7(VAR_4->rrset_cache, VAR_6, *VAR_4->now);
 }

 return VAR_12;
}

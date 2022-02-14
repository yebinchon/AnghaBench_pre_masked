
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int rrset_class; int type; int dname_len; int dname; } ;
struct ub_packed_rrset_key {TYPE_4__ rk; } ;
struct reply_info {size_t an_numrrsets; size_t ns_numrrsets; size_t rrset_count; struct ub_packed_rrset_key** rrsets; } ;
struct TYPE_7__ {scalar_t__ qtype; scalar_t__ qclass; int qname; } ;
struct module_qstate {int query_flags; TYPE_3__ qinfo; TYPE_1__* env; } ;
struct iter_qstate {scalar_t__ depth; int dp; TYPE_2__* response; } ;
struct iter_env {scalar_t__ max_dependency_depth; } ;
struct TYPE_6__ {struct reply_info* rep; } ;
struct TYPE_5__ {scalar_t__* modinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,scalar_t__,scalar_t__,struct module_qstate*,int,struct iter_qstate*,int ,int ,struct module_qstate**,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(struct module_qstate* VAR_7, struct iter_qstate* VAR_8,
 int VAR_9)
{
 struct iter_env* VAR_10 = (struct iter_env*)VAR_7->env->modinfo[VAR_9];
 struct module_qstate* VAR_11;
 size_t VAR_12;
 struct reply_info* VAR_13 = VAR_8->response->rep;
 struct ub_packed_rrset_key* VAR_14;
 FUNC_1(VAR_8->dp);

 if(VAR_8->depth == VAR_10->max_dependency_depth)
  return;


 for(VAR_12=VAR_13->an_numrrsets+VAR_13->ns_numrrsets; VAR_12<VAR_13->rrset_count; VAR_12++) {
  VAR_14 = VAR_13->rrsets[VAR_12];


  if( !(FUNC_3(VAR_14->rk.type)==VAR_4 ||
   FUNC_3(VAR_14->rk.type)==VAR_5)) {
   continue;
  }

  if(VAR_7->qinfo.qtype == FUNC_3(VAR_14->rk.type) &&
   VAR_7->qinfo.qclass == FUNC_3(VAR_14->rk.rrset_class) &&
   FUNC_4(VAR_7->qinfo.qname,
    VAR_14->rk.dname)==0 &&
   (VAR_7->query_flags&VAR_1) &&
   !(VAR_7->query_flags&VAR_0))
   continue;


  FUNC_2(VAR_6, "schedule addr fetch",
   VAR_14->rk.dname, FUNC_3(VAR_14->rk.type),
   FUNC_3(VAR_14->rk.rrset_class));
  if(!FUNC_0(VAR_14->rk.dname, VAR_14->rk.dname_len,
   FUNC_3(VAR_14->rk.type), FUNC_3(VAR_14->rk.rrset_class),
   VAR_7, VAR_9, VAR_8,
   VAR_3, VAR_2, &VAR_11, 1)) {
   FUNC_5(VAR_6, "could not generate addr check");
   return;
  }

 }
}

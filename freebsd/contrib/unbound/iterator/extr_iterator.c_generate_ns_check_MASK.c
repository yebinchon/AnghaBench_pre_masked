
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ qtype; int qname; } ;
struct module_qstate {int query_flags; TYPE_6__* env; int region; scalar_t__* minfo; TYPE_1__ qinfo; } ;
struct TYPE_8__ {int qclass; } ;
struct iter_qstate {scalar_t__ depth; int refetch_glue; TYPE_3__* dp; TYPE_2__ qchase; } ;
struct iter_env {scalar_t__ max_dependency_depth; } ;
struct TYPE_10__ {int (* kill_sub ) (struct module_qstate*) ;scalar_t__* modinfo; } ;
struct TYPE_9__ {int namelen; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_6__*,int ,int ,int ,int *) ;
 TYPE_3__* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int (*) (struct module_qstate*)) ;
 int FUNC_4 (struct module_qstate*,struct iter_qstate*,int) ;
 int FUNC_5 (int ,int ,scalar_t__,int ,struct module_qstate*,int,struct iter_qstate*,int ,int ,struct module_qstate**,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (struct module_qstate*) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static void
FUNC_12(struct module_qstate* VAR_7, struct iter_qstate* VAR_8, int VAR_9)
{
 struct iter_env* VAR_10 = (struct iter_env*)VAR_7->env->modinfo[VAR_9];
 struct module_qstate* VAR_11;
 FUNC_6(VAR_8->dp);

 if(VAR_8->depth == VAR_10->max_dependency_depth)
  return;
 if(!FUNC_0(VAR_7->env, VAR_8->dp->name, VAR_8->dp->namelen,
  VAR_8->qchase.qclass, ((void*)0)))
  return;

 if(VAR_7->qinfo.qtype == VAR_5 &&
  FUNC_9(VAR_8->dp->name, VAR_7->qinfo.qname)==0 &&
  (VAR_7->query_flags&VAR_1) && !(VAR_7->query_flags&VAR_0)){

  FUNC_4(VAR_7, VAR_8, VAR_9);
  return;
 }

 if(VAR_7->qinfo.qtype == VAR_4)
  return;

 FUNC_8(VAR_6, "schedule ns fetch",
  VAR_8->dp->name, VAR_5, VAR_8->qchase.qclass);
 if(!FUNC_5(VAR_8->dp->name, VAR_8->dp->namelen,
  VAR_5, VAR_8->qchase.qclass, VAR_7, VAR_9, VAR_8,
  VAR_3, VAR_2, &VAR_11, 1)) {
  FUNC_11(VAR_6, "could not generate ns check");
  return;
 }
 if(VAR_11) {
  struct iter_qstate* VAR_12 =
   (struct iter_qstate*)VAR_11->minfo[VAR_9];



  VAR_12->refetch_glue = 1;
  VAR_12->dp = FUNC_1(VAR_8->dp, VAR_11->region);
  if(!VAR_12->dp) {
   FUNC_7("out of memory generating ns check, copydp");
   FUNC_2(FUNC_3(
    VAR_7->env->kill_sub));
   (*VAR_7->env->kill_sub)(VAR_11);
   return;
  }
 }
}

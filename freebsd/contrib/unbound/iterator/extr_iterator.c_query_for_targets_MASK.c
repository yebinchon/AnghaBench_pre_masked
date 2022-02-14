
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int qname; } ;
struct module_qstate {void** ext_state; TYPE_2__* env; TYPE_1__ qinfo; } ;
struct TYPE_8__ {int qclass; } ;
struct iter_qstate {scalar_t__ depth; scalar_t__* target_count; TYPE_3__ qchase; TYPE_4__* dp; } ;
struct iter_env {scalar_t__ max_dependency_depth; scalar_t__ supports_ipv4; scalar_t__ supports_ipv6; } ;
struct delegpt_ns {int resolved; int namelen; int name; int got4; int got6; struct delegpt_ns* next; } ;
struct TYPE_9__ {struct delegpt_ns* nslist; } ;
struct TYPE_7__ {int rnd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct module_qstate*,struct iter_qstate*,int,int ,int ,int ,int ) ;
 int FUNC_3 (struct module_qstate*,TYPE_4__*) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int) ;
 void* VAR_5 ;
 int FUNC_6 (int ,char*,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_7(struct module_qstate* VAR_6, struct iter_qstate* VAR_7,
        struct iter_env* VAR_8, int VAR_9, int VAR_10, int* VAR_11)
{
 int VAR_12 = 0;
 struct delegpt_ns* VAR_13;
 int VAR_14;
 int VAR_15 = 0;

 if(VAR_7->depth == VAR_8->max_dependency_depth)
  return 0;
 if(VAR_7->depth > 0 && VAR_7->target_count &&
  VAR_7->target_count[1] > VAR_3) {
  char VAR_16[VAR_0+1];
  FUNC_1(VAR_6->qinfo.qname, VAR_16);
  FUNC_6(VAR_4, "request %s has exceeded the maximum "
   "number of glue fetches %d", VAR_16, VAR_7->target_count[1]);
  return 0;
 }

 FUNC_3(VAR_6, VAR_7->dp);
 VAR_14 = (int)FUNC_0(VAR_7->dp);
 FUNC_5(VAR_10 != 0);




 if(VAR_10 < 0 || VAR_10 > VAR_14)
  VAR_15 = VAR_14;
 else VAR_15 = VAR_10;
 if(VAR_15 == 0) {
  *VAR_11 = 0;
  return 1;
 }

 FUNC_5(VAR_15 <= VAR_14);


 for(VAR_13 = VAR_7->dp->nslist; VAR_13; VAR_13 = VAR_13->next) {
  if(VAR_13->resolved)
   continue;


  if(!FUNC_4(VAR_6->env->rnd, VAR_15, VAR_14)) {


   VAR_14 --;
   continue;
  }

  if(VAR_8->supports_ipv6 && !VAR_13->got6) {

   if(!FUNC_2(VAR_6, VAR_7, VAR_9,
    VAR_13->name, VAR_13->namelen,
    VAR_2, VAR_7->qchase.qclass)) {
    *VAR_11 = VAR_12;
    if(VAR_12 > 0)
     VAR_6->ext_state[VAR_9] = VAR_5;
    return 0;
   }
   VAR_12++;
  }

  if(VAR_8->supports_ipv4 && !VAR_13->got4) {
   if(!FUNC_2(VAR_6, VAR_7, VAR_9,
    VAR_13->name, VAR_13->namelen,
    VAR_1, VAR_7->qchase.qclass)) {
    *VAR_11 = VAR_12;
    if(VAR_12 > 0)
     VAR_6->ext_state[VAR_9] = VAR_5;
    return 0;
   }
   VAR_12++;
  }


  VAR_13->resolved = 1;
  VAR_14--;
  VAR_15--;
  if(VAR_15 == 0)
   break;
 }
 *VAR_11 = VAR_12;
 if(VAR_12 > 0)
  VAR_6->ext_state[VAR_9] = VAR_5;

 return 1;
}

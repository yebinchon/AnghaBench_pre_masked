
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int qclass; } ;
struct module_qstate {int * ext_state; TYPE_1__ qinfo; TYPE_2__* env; int region; scalar_t__* minfo; } ;
struct iter_qstate {int wait_priming_stub; TYPE_3__* dp; int dnssec_expected; scalar_t__ num_target_queries; int auth_zone_avoid; } ;
struct iter_hints_stub {scalar_t__ noprime; struct delegpt* dp; } ;
struct delegpt {int namelen; int name; } ;
struct TYPE_7__ {int name; scalar_t__ auth_dp; } ;
struct TYPE_6__ {int (* kill_sub ) (struct module_qstate*) ;int hints; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (struct delegpt*,int ) ;
 int FUNC_1 (struct module_qstate*,char*) ;
 int FUNC_2 (struct module_qstate*,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int (*) (struct module_qstate*)) ;
 int FUNC_5 (int ,int ,int ,int ,struct module_qstate*,int,struct iter_qstate*,int ,int ,struct module_qstate**,int ) ;
 struct iter_hints_stub* FUNC_6 (int ,int *,int ,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*,int *,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*,int ,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (struct module_qstate*) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static int
FUNC_13(struct module_qstate* VAR_7, struct iter_qstate* VAR_8, int VAR_9,
 uint8_t* VAR_10, uint16_t VAR_11)
{


 struct iter_hints_stub* VAR_12;
 struct delegpt* VAR_13;
 struct module_qstate* VAR_14;

 if(!VAR_10) return 0;
 VAR_12 = FUNC_6(VAR_7->env->hints, VAR_10, VAR_11, VAR_8->dp);

 if(!VAR_12)
  return 0;
 VAR_13 = VAR_12->dp;


 if(!VAR_8->auth_zone_avoid && VAR_8->dp && VAR_8->dp->auth_dp &&
  FUNC_10(VAR_8->dp->name, VAR_13->name) == 0)
  return 0;


 if(VAR_12->noprime) {
  int VAR_15 = 0;
  if(VAR_8->dp == ((void*)0)) VAR_15 = 2;


  VAR_8->dp = FUNC_0(VAR_13, VAR_7->region);
  if(!VAR_8->dp) {
   FUNC_8("out of memory priming stub");
   FUNC_1(VAR_7, "malloc failure, priming stub");
   (void)FUNC_2(VAR_7, VAR_9, VAR_0);
   return 1;
  }
  FUNC_9(VAR_5, "use stub", VAR_13->name,
   VAR_1, VAR_11);
  return VAR_15;
 }


 FUNC_9(VAR_5, "priming stub", VAR_13->name,
  VAR_1, VAR_11);



 if(!FUNC_5(VAR_13->name, VAR_13->namelen,
  VAR_1, VAR_11, VAR_7, VAR_9, VAR_8,
  VAR_3, VAR_2, &VAR_14, 0)) {
  FUNC_12(VAR_4, "could not prime stub");
  FUNC_1(VAR_7, "could not generate lookup for stub prime");
  (void)FUNC_2(VAR_7, VAR_9, VAR_0);
  return 1;
 }
 if(VAR_14) {
  struct iter_qstate* VAR_16 =
   (struct iter_qstate*)VAR_14->minfo[VAR_9];



  VAR_16->dp = FUNC_0(VAR_13, VAR_14->region);
  if(!VAR_16->dp) {
   FUNC_8("out of memory priming stub, copydp");
   FUNC_3(FUNC_4(
    VAR_7->env->kill_sub));
   (*VAR_7->env->kill_sub)(VAR_14);
   FUNC_1(VAR_7, "malloc failure, in stub prime");
   (void)FUNC_2(VAR_7, VAR_9, VAR_0);
   return 1;
  }



  VAR_16->num_target_queries = 0;
  VAR_16->wait_priming_stub = 1;
  VAR_16->dnssec_expected = FUNC_7(
   VAR_7->env, VAR_16->dp, ((void*)0), VAR_14->qinfo.qclass);
 }


 VAR_7->ext_state[VAR_9] = VAR_6;
 return 1;
}

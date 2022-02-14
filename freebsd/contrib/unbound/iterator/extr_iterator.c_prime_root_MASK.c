
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int qclass; } ;
struct module_qstate {int * ext_state; TYPE_1__ qinfo; TYPE_3__* env; int region; scalar_t__* minfo; } ;
struct iter_qstate {int dp; int dnssec_expected; scalar_t__ num_target_queries; } ;
struct delegpt {int dummy; } ;
struct TYPE_6__ {int (* kill_sub ) (struct module_qstate*) ;int hints; } ;
struct TYPE_5__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct delegpt*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int (*) (struct module_qstate*)) ;
 int FUNC_3 (int *,int,int ,scalar_t__,struct module_qstate*,int,struct iter_qstate*,int ,int ,struct module_qstate**,int ) ;
 struct delegpt* FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (TYPE_3__*,int ,int *,int ) ;
 int FUNC_6 (char*) ;
 int VAR_5 ;
 TYPE_2__* FUNC_7 (int ,int) ;
 int VAR_6 ;
 int FUNC_8 (struct module_qstate*) ;
 int FUNC_9 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_10(struct module_qstate* VAR_7, struct iter_qstate* VAR_8, int VAR_9,
 uint16_t VAR_10)
{
 struct delegpt* VAR_11;
 struct module_qstate* VAR_12;
 FUNC_9(VAR_4, "priming . %s NS",
  FUNC_7(VAR_6, (int)VAR_10)?
  FUNC_7(VAR_6, (int)VAR_10)->name:"??");
 VAR_11 = FUNC_4(VAR_7->env->hints, VAR_10);
 if(!VAR_11) {
  FUNC_9(VAR_3, "Cannot prime due to lack of hints");
  return 0;
 }


 if(!FUNC_3((uint8_t*)"\000", 1, VAR_0,
  VAR_10, VAR_7, VAR_9, VAR_8, VAR_2, VAR_1,
  &VAR_12, 0)) {
  FUNC_9(VAR_3, "could not prime root");
  return 0;
 }
 if(VAR_12) {
  struct iter_qstate* VAR_13 =
   (struct iter_qstate*)VAR_12->minfo[VAR_9];



  VAR_13->dp = FUNC_0(VAR_11, VAR_12->region);
  if(!VAR_13->dp) {
   FUNC_6("out of memory priming root, copydp");
   FUNC_1(FUNC_2(
    VAR_7->env->kill_sub));
   (*VAR_7->env->kill_sub)(VAR_12);
   return 0;
  }

  VAR_13->num_target_queries = 0;
  VAR_13->dnssec_expected = FUNC_5(
   VAR_7->env, VAR_13->dp, ((void*)0), VAR_12->qinfo.qclass);
 }


 VAR_7->ext_state[VAR_9] = VAR_5;
 return 1;
}

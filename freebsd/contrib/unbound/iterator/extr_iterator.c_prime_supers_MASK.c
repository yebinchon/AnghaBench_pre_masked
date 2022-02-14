
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_qstate {scalar_t__ return_rcode; int region; int return_msg; int qinfo; scalar_t__ is_priming; scalar_t__* minfo; } ;
struct iter_qstate {void* state; scalar_t__ wait_priming_stub; struct delegpt* dp; int deleg_msg; } ;
struct delegpt {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct delegpt* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct delegpt*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int *) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void
FUNC_7(struct module_qstate* VAR_6, int VAR_7, struct module_qstate* VAR_8)
{
 struct iter_qstate* VAR_9 = (struct iter_qstate*)VAR_8->minfo[VAR_7];
 struct delegpt* VAR_10 = ((void*)0);

 FUNC_3(VAR_6->is_priming || VAR_9->wait_priming_stub);
 FUNC_3(VAR_6->return_rcode == VAR_2);

 VAR_10 = FUNC_0(VAR_6->return_msg, VAR_8->region);
 if(!VAR_10) {


  FUNC_6(VAR_4, "prime response was not a positive "
   "ANSWER; failing");
  VAR_9->dp = ((void*)0);
  VAR_9->state = VAR_3;
  return;
 }

 FUNC_5(VAR_5, "priming successful for", &VAR_6->qinfo);
 FUNC_1(VAR_4, VAR_10);
 VAR_9->dp = VAR_10;
 VAR_9->deleg_msg = FUNC_2(VAR_6->return_msg, VAR_8->region);
 if(!VAR_9->deleg_msg) {
  FUNC_4("copy prime response: out of memory");
  VAR_9->dp = ((void*)0);
  VAR_9->state = VAR_3;
  return;
 }



 if(VAR_9->wait_priming_stub) {
  VAR_9->state = VAR_1;
  VAR_9->wait_priming_stub = 0;
 } else VAR_9->state = VAR_0;

}

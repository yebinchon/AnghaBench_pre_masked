
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tls_out; } ;
struct eap_ttls_data {int phase2_success; scalar_t__ decision_succ; int ready_for_tnc; TYPE_1__ ssl; int tnc_started; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {scalar_t__ methodState; scalar_t__ decision; int allowNotifications; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct eap_sm *VAR_7,
           struct eap_ttls_data *VAR_8,
           struct eap_method_ret *VAR_9)
{
 if (VAR_9->methodState == VAR_4) {
  VAR_9->allowNotifications = VAR_3;
  if (VAR_9->decision == VAR_2 ||
      VAR_9->decision == VAR_0) {
   FUNC_0(VAR_6, "EAP-TTLS: Authentication "
       "completed successfully");
   VAR_8->phase2_success = 1;
   VAR_8->decision_succ = VAR_9->decision;
  }
 } else if (VAR_9->methodState == VAR_5 &&
     (VAR_9->decision == VAR_2 ||
      VAR_9->decision == VAR_0)) {
   FUNC_0(VAR_6, "EAP-TTLS: Authentication "
       "completed successfully (MAY_CONT)");
   VAR_8->phase2_success = 1;
   VAR_8->decision_succ = VAR_9->decision;
 } else if (VAR_8->decision_succ != VAR_1 &&
     VAR_8->phase2_success &&
     !VAR_8->ssl.tls_out) {





  FUNC_0(VAR_6,
      "EAP-TTLS: Restore success decision after fragmented frame sent completely");
  VAR_9->decision = VAR_8->decision_succ;
 }
}

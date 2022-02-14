
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct eap_ttls_data {int phase2_priv; TYPE_1__* phase2_method; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {scalar_t__ methodState; scalar_t__ decision; } ;
struct eap_hdr {int dummy; } ;
typedef int iret ;
struct TYPE_2__ {struct wpabuf* (* process ) (struct eap_sm*,int ,struct eap_method_ret*,struct wpabuf*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct eap_method_ret*,int ,int) ;
 struct wpabuf* FUNC_1 (struct eap_sm*,int ,struct eap_method_ret*,struct wpabuf*) ;
 int FUNC_2 (struct wpabuf*,struct eap_hdr*,size_t) ;

__attribute__((used)) static int FUNC_3(struct eap_sm *VAR_5,
           struct eap_ttls_data *VAR_6,
           struct eap_method_ret *VAR_7,
           struct eap_hdr *VAR_8, size_t VAR_9,
           struct wpabuf **VAR_10)
{
 struct wpabuf VAR_11;
 struct eap_method_ret VAR_12;

 FUNC_0(&VAR_12, 0, sizeof(VAR_12));
 FUNC_2(&VAR_11, VAR_8, VAR_9);
 *VAR_10 = VAR_6->phase2_method->process(VAR_5, VAR_6->phase2_priv, &VAR_12,
          &VAR_11);
 if ((VAR_12.methodState == VAR_3 ||
      VAR_12.methodState == VAR_4) &&
     (VAR_12.decision == VAR_2 ||
      VAR_12.decision == VAR_0 ||
      VAR_12.decision == VAR_1)) {
  VAR_7->methodState = VAR_12.methodState;
  VAR_7->decision = VAR_12.decision;
 }

 return 0;
}

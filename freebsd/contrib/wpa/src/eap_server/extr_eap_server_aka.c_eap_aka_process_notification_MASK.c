
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sim_attrs {int dummy; } ;
struct eap_aka_data {scalar_t__ notification; scalar_t__ use_result_ind; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct eap_aka_data*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct eap_sm *VAR_4,
      struct eap_aka_data *VAR_5,
      struct wpabuf *VAR_6,
      struct eap_sim_attrs *VAR_7)
{
 FUNC_1(VAR_2, "EAP-AKA: Client replied to notification");
 if (VAR_5->notification == VAR_0 && VAR_5->use_result_ind)
  FUNC_0(VAR_5, VAR_3);
 else
  FUNC_0(VAR_5, VAR_1);
}

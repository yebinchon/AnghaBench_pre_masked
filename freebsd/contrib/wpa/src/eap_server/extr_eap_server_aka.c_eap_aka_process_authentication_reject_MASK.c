
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sim_attrs {int dummy; } ;
struct eap_aka_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eap_aka_data*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(
 struct eap_sm *VAR_2, struct eap_aka_data *VAR_3,
 struct wpabuf *VAR_4, struct eap_sim_attrs *VAR_5)
{
 FUNC_1(VAR_1, "EAP-AKA: Client rejected authentication");
 FUNC_0(VAR_3, VAR_0);
}

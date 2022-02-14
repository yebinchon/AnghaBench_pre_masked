
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_mschapv2_data {int prev_challenge; int auth_challenge; int peer_challenge; } ;


 int FUNC_0 (struct eap_mschapv2_data*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_mschapv2_data *VAR_2 = VAR_1;
 FUNC_1(VAR_2->peer_challenge);
 FUNC_1(VAR_2->auth_challenge);
 FUNC_2(VAR_2->prev_challenge);
 FUNC_0(VAR_2, sizeof(*VAR_2));
}

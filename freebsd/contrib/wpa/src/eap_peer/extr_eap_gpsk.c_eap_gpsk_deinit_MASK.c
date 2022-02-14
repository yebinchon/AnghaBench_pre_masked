
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_gpsk_data {scalar_t__ psk; int psk_len; scalar_t__ id_peer; scalar_t__ id_server; } ;


 int FUNC_0 (struct eap_gpsk_data*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_gpsk_data *VAR_2 = VAR_1;
 FUNC_1(VAR_2->id_server);
 FUNC_1(VAR_2->id_peer);
 if (VAR_2->psk) {
  FUNC_2(VAR_2->psk, 0, VAR_2->psk_len);
  FUNC_1(VAR_2->psk);
 }
 FUNC_0(VAR_2, sizeof(*VAR_2));
}

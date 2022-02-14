
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_psk_data {int id_p; int id_s; } ;


 int FUNC_0 (struct eap_psk_data*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_psk_data *VAR_2 = VAR_1;
 FUNC_1(VAR_2->id_s);
 FUNC_1(VAR_2->id_p);
 FUNC_0(VAR_2, sizeof(*VAR_2));
}

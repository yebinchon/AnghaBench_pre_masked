
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_aka_data {struct eap_aka_data* network_name; int id_msgs; struct eap_aka_data* last_eap_identity; struct eap_aka_data* reauth_id; struct eap_aka_data* pseudonym; } ;


 int FUNC_0 (struct eap_aka_data*,int ) ;
 int FUNC_1 (struct eap_aka_data*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_aka_data *VAR_2 = VAR_1;
 if (VAR_2) {
  FUNC_1(VAR_2->pseudonym);
  FUNC_1(VAR_2->reauth_id);
  FUNC_1(VAR_2->last_eap_identity);
  FUNC_2(VAR_2->id_msgs);
  FUNC_1(VAR_2->network_name);
  FUNC_0(VAR_2, 0);
  FUNC_1(VAR_2);
 }
}

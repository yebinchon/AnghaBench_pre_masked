
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sim_db_pending {struct eap_sim_db_pending* next; } ;
struct eap_sim_db_data {struct eap_sim_db_pending* pending; } ;



__attribute__((used)) static void FUNC_0(struct eap_sim_db_data *VAR_0,
       struct eap_sim_db_pending *VAR_1)
{
 VAR_1->next = VAR_0->pending;
 VAR_0->pending = VAR_1;
}

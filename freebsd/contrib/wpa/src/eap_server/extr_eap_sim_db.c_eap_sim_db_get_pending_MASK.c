
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sim_db_pending {int aka; struct eap_sim_db_pending* next; int imsi; } ;
struct eap_sim_db_data {struct eap_sim_db_pending* pending; } ;


 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) static struct eap_sim_db_pending *
FUNC_1(struct eap_sim_db_data *VAR_0, const char *VAR_1, int VAR_2)
{
 struct eap_sim_db_pending *VAR_3, *VAR_4 = ((void*)0);

 VAR_3 = VAR_0->pending;
 while (VAR_3) {
  if (VAR_3->aka == VAR_2 && FUNC_0(VAR_3->imsi, VAR_1) == 0) {
   if (VAR_4)
    VAR_4->next = VAR_3->next;
   else
    VAR_0->pending = VAR_3->next;
   break;
  }
  VAR_4 = VAR_3;
  VAR_3 = VAR_3->next;
 }
 return VAR_3;
}

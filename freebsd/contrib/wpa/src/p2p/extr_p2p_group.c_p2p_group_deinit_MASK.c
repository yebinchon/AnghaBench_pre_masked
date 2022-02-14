
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_group {int wfd_ie; int noa; struct p2p_group* cfg; struct p2p_data* p2p; } ;
struct p2p_data {size_t num_groups; struct p2p_group** groups; } ;


 int FUNC_0 (struct p2p_group*) ;
 int FUNC_1 (struct p2p_group*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct p2p_group *VAR_0)
{
 size_t VAR_1;
 struct p2p_data *VAR_2;

 if (VAR_0 == ((void*)0))
  return;

 VAR_2 = VAR_0->p2p;

 for (VAR_1 = 0; VAR_1 < VAR_2->num_groups; VAR_1++) {
  if (VAR_2->groups[VAR_1] == VAR_0) {
   while (VAR_1 + 1 < VAR_2->num_groups) {
    VAR_2->groups[VAR_1] = VAR_2->groups[VAR_1 + 1];
    VAR_1++;
   }
   VAR_2->num_groups--;
   break;
  }
 }

 FUNC_1(VAR_0);
 FUNC_0(VAR_0->cfg);
 FUNC_2(VAR_0->noa);
 FUNC_2(VAR_0->wfd_ie);
 FUNC_0(VAR_0);
}

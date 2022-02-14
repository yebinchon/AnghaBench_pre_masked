
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_node {int working_links; struct link** active_links; } ;
struct link {scalar_t__ priority; int name; TYPE_1__* b_ptr; } ;
struct TYPE_2__ {int net_plane; } ;


 int FUNC_0 (char*,struct link*,struct link**,struct link**) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (struct tipc_node*) ;
 int FUNC_3 (struct link*,struct link*) ;

void FUNC_4(struct tipc_node *VAR_0, struct link *VAR_1)
{
 struct link **VAR_2 = &VAR_0->active_links[0];

 VAR_0->working_links++;

 FUNC_1("Established link <%s> on network plane %c\n",
      VAR_1->name, VAR_1->b_ptr->net_plane);

 if (!VAR_2[0]) {
  FUNC_0(" link %x into %x/%x\n", VAR_1, &VAR_2[0], &VAR_2[1]);
  VAR_2[0] = VAR_2[1] = VAR_1;
  FUNC_2(VAR_0);
  return;
 }
 if (VAR_1->priority < VAR_2[0]->priority) {
  FUNC_1("New link <%s> becomes standby\n", VAR_1->name);
  return;
 }
 FUNC_3(VAR_2[0], VAR_1);
 if (VAR_1->priority == VAR_2[0]->priority) {
  VAR_2[0] = VAR_1;
  return;
 }
 FUNC_1("Old link <%s> becomes standby\n", VAR_2[0]->name);
 if (VAR_2[1] != VAR_2[0])
  FUNC_1("Old link <%s> becomes standby\n", VAR_2[1]->name);
 VAR_2[0] = VAR_2[1] = VAR_1;
}

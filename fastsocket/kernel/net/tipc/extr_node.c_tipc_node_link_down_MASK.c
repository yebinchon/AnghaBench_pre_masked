
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_node {struct link** active_links; int working_links; } ;
struct link {TYPE_1__* b_ptr; int name; } ;
struct TYPE_2__ {int net_plane; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct tipc_node*) ;
 int FUNC_2 (struct tipc_node*) ;
 int FUNC_3 (struct link*) ;
 int FUNC_4 (struct link*) ;
 scalar_t__ FUNC_5 (struct tipc_node*) ;

void FUNC_6(struct tipc_node *VAR_0, struct link *VAR_1)
{
 struct link **VAR_2;

 VAR_0->working_links--;

 if (!FUNC_4(VAR_1)) {
  FUNC_0("Lost standby link <%s> on network plane %c\n",
       VAR_1->name, VAR_1->b_ptr->net_plane);
  return;
 }
 FUNC_0("Lost link <%s> on network plane %c\n",
  VAR_1->name, VAR_1->b_ptr->net_plane);

 VAR_2 = &VAR_0->active_links[0];
 if (VAR_2[0] == VAR_1)
  VAR_2[0] = VAR_2[1];
 if (VAR_2[1] == VAR_1)
  VAR_2[1] = VAR_2[0];
 if (VAR_2[0] == VAR_1)
  FUNC_2(VAR_0);
 if (FUNC_5(VAR_0))
  FUNC_3(VAR_1);
 else
  FUNC_1(VAR_0);
}

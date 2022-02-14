
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct tipc_node {int link_cnt; struct link** links; int addr; } ;
struct link {int addr; TYPE_3__* b_ptr; } ;
struct TYPE_8__ {TYPE_1__** zones; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_7__ {size_t identity; TYPE_2__ publ; } ;
struct TYPE_5__ {int links; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,...) ;
 TYPE_4__ VAR_0 ;
 struct tipc_node* FUNC_2 (int ) ;
 struct tipc_node* FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;

struct tipc_node *FUNC_5(struct link *VAR_1)
{
 struct tipc_node *VAR_2 = FUNC_3(VAR_1->addr);

 if (!VAR_2)
  VAR_2 = FUNC_2(VAR_1->addr);
 if (VAR_2) {
  u32 VAR_3 = VAR_1->b_ptr->identity;
  char VAR_4[16];

  if (VAR_2->link_cnt >= 2) {
   FUNC_1("Attempt to create third link to %s\n",
       FUNC_0(VAR_4, VAR_2->addr));
   return ((void*)0);
  }

  if (!VAR_2->links[VAR_3]) {
   VAR_2->links[VAR_3] = VAR_1;
   VAR_0.zones[FUNC_4(VAR_1->addr)]->links++;
   VAR_2->link_cnt++;
   return VAR_2;
  }
  FUNC_1("Attempt to establish second link on <%s> to %s \n",
      VAR_1->b_ptr->publ.name,
      FUNC_0(VAR_4, VAR_1->addr));
 }
 return ((void*)0);
}

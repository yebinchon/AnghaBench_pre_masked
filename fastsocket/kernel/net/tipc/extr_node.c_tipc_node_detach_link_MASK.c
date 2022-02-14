
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tipc_node {int link_cnt; int ** links; } ;
struct link {int addr; TYPE_1__* b_ptr; } ;
struct TYPE_6__ {TYPE_2__** zones; } ;
struct TYPE_5__ {int links; } ;
struct TYPE_4__ {size_t identity; } ;


 TYPE_3__ VAR_0 ;
 size_t FUNC_0 (int ) ;

void FUNC_1(struct tipc_node *VAR_1, struct link *VAR_2)
{
 VAR_1->links[VAR_2->b_ptr->identity] = ((void*)0);
 VAR_0.zones[FUNC_0(VAR_2->addr)]->links--;
 VAR_1->link_cnt--;
}

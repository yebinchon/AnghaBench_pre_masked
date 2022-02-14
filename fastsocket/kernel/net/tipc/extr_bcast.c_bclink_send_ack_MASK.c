
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_node {int addr; struct link** active_links; } ;
struct link {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct link*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct tipc_node *VAR_1)
{
 struct link *VAR_2 = VAR_1->active_links[VAR_1->addr & 1];

 if (VAR_2 != ((void*)0))
  FUNC_0(VAR_2, VAR_0, 0, 0, 0, 0, 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mibifa {int flags; int inbcast; int inmask; int inaddr; int ifindex; } ;
struct mibif {int name; } ;


 int VAR_0 ;
 struct mibif* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;

void
FUNC_2(struct mibifa *VAR_1)
{
 struct mibif *VAR_2;

 if ((VAR_2 = FUNC_0(VAR_1->ifindex)) == ((void*)0))

  return;

 if (FUNC_1(VAR_2->name, VAR_1->inaddr, VAR_1->inmask, VAR_1->inbcast))

  return;

 VAR_1->flags &= ~VAR_0;
}

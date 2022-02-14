
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mibifa {int inaddr; int ifindex; } ;
struct mibif {int name; } ;


 int FUNC_0 (struct mibifa*) ;
 struct mibif* FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ) ;

void
FUNC_3(struct mibifa *VAR_1)
{
 struct mibif *VAR_2;

 if ((VAR_2 = FUNC_1(VAR_1->ifindex)) == ((void*)0)) {

  VAR_0 = 1;
  return;
 }
 if (FUNC_2(VAR_2->name, VAR_1->inaddr)) {

  VAR_0 = 1;
  return;
 }

 FUNC_0(VAR_1);
}

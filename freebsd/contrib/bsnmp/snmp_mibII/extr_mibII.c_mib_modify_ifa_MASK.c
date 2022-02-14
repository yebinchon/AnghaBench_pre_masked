
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mibifa {int inbcast; int inmask; int inaddr; int ifindex; } ;
struct mibif {int name; } ;


 struct mibif* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,struct mibifa*) ;

int
FUNC_3(struct mibifa *VAR_1)
{
 struct mibif *VAR_2;

 if ((VAR_2 = FUNC_0(VAR_1->ifindex)) == ((void*)0)) {

  VAR_0 = 1;
  return (-1);
 }

 if (FUNC_1(VAR_2->name, VAR_1->inaddr, VAR_1->inmask, VAR_1->inbcast)) {

  VAR_0 = 1;
  return (-1);
 }

 if (FUNC_2(VAR_2->name, VAR_1)) {

  VAR_0 = 1;
  return (-1);
 }

 return (0);
}

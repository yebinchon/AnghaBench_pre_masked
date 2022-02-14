
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mibifa {int flags; int inaddr; int ifindex; } ;
struct mibif {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mibif* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;

int
FUNC_3(struct mibifa *VAR_3)
{
 struct mibif *VAR_4;

 if ((VAR_4 = FUNC_0(VAR_3->ifindex)) == ((void*)0)) {

  VAR_2 = 1;
  return (-1);
 }
 if (FUNC_1(VAR_4->name, VAR_3->inaddr)) {

  FUNC_2(VAR_0, "SIOCDIFADDR: %m");
  VAR_2 = 1;
  return (-1);
 }
 VAR_3->flags |= VAR_1;
 return (0);
}

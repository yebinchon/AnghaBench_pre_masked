
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_link_state; int if_linktask; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;

void
FUNC_1(struct ifnet *VAR_1, int VAR_2)
{

 if (VAR_1->if_link_state == VAR_2)
  return;

 VAR_1->if_link_state = VAR_2;


 FUNC_0(VAR_0, &VAR_1->if_linktask);
}

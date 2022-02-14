
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_group {int beacon_update; scalar_t__ group_formation; } ;


 int FUNC_0 (struct p2p_group*) ;

void FUNC_1(struct p2p_group *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 VAR_0->group_formation = 0;
 VAR_0->beacon_update = 1;
 FUNC_0(VAR_0);
}

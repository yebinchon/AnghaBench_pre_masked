
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_lro_mgr {int features; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_lro_mgr*,struct sk_buff*,int *,int ,void*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;

void FUNC_3(struct net_lro_mgr *VAR_1,
       struct sk_buff *VAR_2,
       void *VAR_3)
{
 if (FUNC_0(VAR_1, VAR_2, ((void*)0), 0, VAR_3)) {
  if (VAR_1->features & VAR_0)
   FUNC_1(VAR_2);
  else
   FUNC_2(VAR_2);
 }
}

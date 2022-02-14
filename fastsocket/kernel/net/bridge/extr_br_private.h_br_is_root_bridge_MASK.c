
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {int designated_root; int bridge_id; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline int FUNC_1(const struct net_bridge *VAR_0)
{
 return !FUNC_0(&VAR_0->bridge_id, &VAR_0->designated_root, 8);
}

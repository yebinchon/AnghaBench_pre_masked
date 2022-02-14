
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ifindex; } ;
struct meta_obj {int value; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct net_device *VAR_0, struct meta_obj *VAR_1)
{
 if (FUNC_0(VAR_0 == ((void*)0)))
  return -1;

 VAR_1->value = VAR_0->ifindex;
 return 0;
}

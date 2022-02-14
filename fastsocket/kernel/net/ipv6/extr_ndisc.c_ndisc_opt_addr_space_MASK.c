
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int type; scalar_t__ addr_len; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct net_device *VAR_0)
{
 return FUNC_0(VAR_0->addr_len + FUNC_1(VAR_0->type));
}

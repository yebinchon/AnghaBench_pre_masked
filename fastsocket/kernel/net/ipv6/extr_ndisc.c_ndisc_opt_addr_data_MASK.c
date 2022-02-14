
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {scalar_t__ addr_len; int type; } ;
struct nd_opt_hdr {int nd_opt_len; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline u8 *FUNC_2(struct nd_opt_hdr *VAR_0,
          struct net_device *VAR_1)
{
 u8 *VAR_2 = (u8 *)(VAR_0 + 1);
 int VAR_3 = VAR_0->nd_opt_len << 3;
 int VAR_4 = FUNC_1(VAR_1->type);
 if (VAR_3 != FUNC_0(VAR_1->addr_len + VAR_4))
  return ((void*)0);
 return (VAR_2 + VAR_4);
}

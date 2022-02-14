
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgbe_mc_addr {int * addr; int vmdq; } ;
struct ixgbe_hw {int dummy; } ;



__attribute__((used)) static u8 *
FUNC_0(struct ixgbe_hw *VAR_0, u8 **VAR_1, u32 *VAR_2)
{
 struct ixgbe_mc_addr *VAR_3;

 VAR_3 = (struct ixgbe_mc_addr *)*VAR_1;
 *VAR_2 = VAR_3->vmdq;

 *VAR_1 = (u8*)(VAR_3 + 1);

 return (VAR_3->addr);
}

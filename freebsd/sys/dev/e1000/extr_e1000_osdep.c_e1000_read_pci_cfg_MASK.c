
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_osdep {int dev; } ;
struct e1000_hw {scalar_t__ back; } ;


 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(struct e1000_hw *VAR_0, u32 VAR_1, u16 *VAR_2)
{
 *VAR_2 = FUNC_0(((struct e1000_osdep *)VAR_0->back)->dev, VAR_1, 2);
}

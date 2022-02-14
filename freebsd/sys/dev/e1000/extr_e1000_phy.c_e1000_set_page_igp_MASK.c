
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int addr; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;

s32 FUNC_3(struct e1000_hw *VAR_1, u16 VAR_2)
{
 FUNC_0("e1000_set_page_igp");

 FUNC_1("Setting page 0x%x\n", VAR_2);

 VAR_1->phy.addr = 1;

 return FUNC_2(VAR_1, VAR_0, VAR_2);
}

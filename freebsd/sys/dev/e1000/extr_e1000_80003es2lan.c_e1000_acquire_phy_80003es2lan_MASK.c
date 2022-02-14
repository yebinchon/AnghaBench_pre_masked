
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ func; } ;
struct e1000_hw {TYPE_1__ bus; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_hw*,int ) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_2)
{
 u16 VAR_3;

 FUNC_0("e1000_acquire_phy_80003es2lan");

 VAR_3 = VAR_2->bus.func ? VAR_1 : VAR_0;
 return FUNC_1(VAR_2, VAR_3);
}

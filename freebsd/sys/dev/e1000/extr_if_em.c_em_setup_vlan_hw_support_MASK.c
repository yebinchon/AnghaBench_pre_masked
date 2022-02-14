
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct adapter {scalar_t__ num_vlans; scalar_t__* shadow_vfta; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct e1000_hw*,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct e1000_hw*,int ,int ) ;
 int FUNC_2 (struct e1000_hw*,int ,int,scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(struct adapter *VAR_7)
{
 struct e1000_hw *VAR_8 = &VAR_7->hw;
 u32 VAR_9;







 if (VAR_7->num_vlans == 0)
  return;





 for (int VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
  if (VAR_7->shadow_vfta[VAR_10] != 0)
   FUNC_2(VAR_8, VAR_5,
       VAR_10, VAR_7->shadow_vfta[VAR_10]);

 VAR_9 = FUNC_0(VAR_8, VAR_0);
 VAR_9 |= VAR_1;
 FUNC_1(VAR_8, VAR_0, VAR_9);


 VAR_9 = FUNC_0(VAR_8, VAR_2);
 VAR_9 &= ~VAR_3;
 VAR_9 |= VAR_4;
 FUNC_1(VAR_8, VAR_2, VAR_9);
}

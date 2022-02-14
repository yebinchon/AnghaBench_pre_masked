
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ixl_vf {int vf_num; } ;
struct TYPE_2__ {int vf_base_id; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;
struct ixl_pf {struct i40e_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct ixl_pf *VAR_7, struct ixl_vf *VAR_8)
{
 struct i40e_hw *VAR_9;
 int VAR_10;
 uint16_t VAR_11;
 uint32_t VAR_12;

 VAR_9 = &VAR_7->hw;
 VAR_11 = VAR_9->func_caps.vf_base_id + VAR_8->vf_num;

 FUNC_2(VAR_9, VAR_1, VAR_4 |
      (VAR_11 << VAR_2));
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_12 = FUNC_1(VAR_9, VAR_3);
  if ((VAR_12 & VAR_5) == 0)
   return (0);
  FUNC_0(1);
 }

 return (VAR_0);
}

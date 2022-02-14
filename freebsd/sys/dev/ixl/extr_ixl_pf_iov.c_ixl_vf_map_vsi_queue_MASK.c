
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int vsi_num; } ;
struct ixl_vf {TYPE_1__ vsi; } ;
struct i40e_hw {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct i40e_hw *VAR_2, struct ixl_vf *VAR_3, int VAR_4,
    uint32_t VAR_5)
{
 uint32_t VAR_6;
 int VAR_7, VAR_8;






 VAR_7 = VAR_4 / 2;
 VAR_8 = (VAR_4 % 2) * VAR_1;

 VAR_6 = FUNC_1(VAR_2, FUNC_0(VAR_7, VAR_3->vsi.vsi_num));
 VAR_6 &= ~(VAR_0 << VAR_8);
 VAR_6 |= VAR_5 << VAR_8;
 FUNC_2(VAR_2, FUNC_0(VAR_7, VAR_3->vsi.vsi_num), VAR_6);
}

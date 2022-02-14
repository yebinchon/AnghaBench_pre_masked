
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct ixl_vf {int vf_num; } ;
struct TYPE_2__ {int vf_base_id; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;
struct ixl_pf {struct i40e_hw hw; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (struct ixl_pf*,int ,char*,int ,int ,int,int) ;
 int FUNC_1 (struct i40e_hw*,int,int ,int,void*,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct ixl_pf *VAR_0, struct ixl_vf *VAR_1, uint16_t VAR_2,
    enum i40e_status_code VAR_3, void *VAR_4, uint16_t VAR_5)
{
 struct i40e_hw *VAR_6;
 int VAR_7;

 VAR_6 = &VAR_0->hw;
 VAR_7 = VAR_6->func_caps.vf_base_id + VAR_1->vf_num;

 FUNC_0(VAR_0, FUNC_2(VAR_2),
     "Sending msg (op=%s[%d], status=%d) to VF-%d\n",
     FUNC_3(VAR_2), VAR_2, VAR_3, VAR_1->vf_num);

 FUNC_1(VAR_6, VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u32 ;
struct virtchnl_rss_hena {int hena; } ;
struct ixl_vf {int vf_num; } ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {int dev; struct i40e_hw hw; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct ixl_pf*,struct ixl_vf*,int ,int ) ;
 int FUNC_3 (struct i40e_hw*,int ,int ) ;
 int FUNC_4 (struct ixl_pf*,struct ixl_vf*,int ) ;

__attribute__((used)) static void
FUNC_5(struct ixl_pf *VAR_2, struct ixl_vf *VAR_3, void *VAR_4,
    uint16_t VAR_5)
{
 struct i40e_hw *VAR_6;
 struct virtchnl_rss_hena *VAR_7;

 VAR_6 = &VAR_2->hw;

 if (VAR_5 < sizeof(*VAR_7)) {
  FUNC_2(VAR_2, VAR_3, VAR_1,
      VAR_0);
  return;
 }

 VAR_7 = VAR_4;


 FUNC_3(VAR_6, FUNC_1(0, VAR_3->vf_num), (u32)VAR_7->hena);
 FUNC_3(VAR_6, FUNC_1(1, VAR_3->vf_num), (u32)(VAR_7->hena >> 32));

 FUNC_0(VAR_2->dev, "VF %d: Programmed HENA with 0x%016lx",
     VAR_3->vf_num, VAR_7->hena);

 FUNC_4(VAR_2, VAR_3, VAR_1);
}

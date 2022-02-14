
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ixl_vf {int num_mdd_events; } ;
struct i40e_hw {int pf_id; } ;
struct ixl_pf {int num_vfs; struct ixl_vf* vfs; int dev; struct i40e_hw hw; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int VAR_10 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct i40e_hw*,int ) ;
 int FUNC_3 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct ixl_pf *VAR_11)
{
 struct i40e_hw *VAR_12 = &VAR_11->hw;
 device_t VAR_13 = VAR_11->dev;
 struct ixl_vf *VAR_14;
 bool VAR_15 = 0;
 bool VAR_16 = 0;
 bool VAR_17 = 0;
 u16 VAR_18;
 u8 VAR_19, VAR_20;
 u8 VAR_21, VAR_22;
 u32 VAR_23;





 VAR_23 = FUNC_2(VAR_12, VAR_0);
 if (VAR_23 & VAR_7) {
  VAR_19 = (VAR_23 & VAR_3) >>
      VAR_4;
  VAR_20 = (VAR_23 & VAR_1) >>
      VAR_2;
  VAR_18 = (VAR_23 & VAR_5) >>
      VAR_6;
  FUNC_3(VAR_12, VAR_0, 0xffffffff);
  VAR_15 = 1;
 }

 if (!VAR_15)
  return;

 VAR_23 = FUNC_2(VAR_12, VAR_8);
 if (VAR_23 & VAR_9) {
  FUNC_3(VAR_12, VAR_8, 0xFFFF);
  VAR_21 = VAR_12->pf_id;
  VAR_16 = 1;
 }


 for (int VAR_24 = 0; VAR_24 < VAR_11->num_vfs; VAR_24++) {
  VAR_14 = &(VAR_11->vfs[VAR_24]);
  VAR_23 = FUNC_2(VAR_12, FUNC_0(VAR_24));
  if (VAR_23 & VAR_10) {
   FUNC_3(VAR_12, FUNC_0(VAR_24), 0xFFFF);
   VAR_22 = VAR_24;
   VAR_14->num_mdd_events++;
   VAR_17 = 1;
  }
 }


 if (VAR_17 && VAR_16)
  FUNC_1(VAR_13,
      "Malicious Driver Detection event %d"
      " on RX queue %d, pf number %d (PF-%d), (VF-%d)\n",
      VAR_20, VAR_18, VAR_19, VAR_21, VAR_22);
 else if (VAR_17 && !VAR_16)
  FUNC_1(VAR_13,
      "Malicious Driver Detection event %d"
      " on RX queue %d, pf number %d, (VF-%d)\n",
      VAR_20, VAR_18, VAR_19, VAR_22);
 else if (!VAR_17 && VAR_16)
  FUNC_1(VAR_13,
      "Malicious Driver Detection event %d"
      " on RX queue %d, pf number %d (PF-%d)\n",
      VAR_20, VAR_18, VAR_19, VAR_21);

 else
  FUNC_1(VAR_13,
      "RX Malicious Driver Detection event (unknown)\n");
}

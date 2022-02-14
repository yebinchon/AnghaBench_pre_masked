
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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct i40e_hw*,int ) ;
 int FUNC_3 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct ixl_pf *VAR_13)
{
 struct i40e_hw *VAR_14 = &VAR_13->hw;
 device_t VAR_15 = VAR_13->dev;
 struct ixl_vf *VAR_16;
 bool VAR_17 = 0;
 bool VAR_18 = 0;
 bool VAR_19 = 0;
 u16 VAR_20, VAR_21;
 u8 VAR_22, VAR_23;
 u8 VAR_24, VAR_25;
 u32 VAR_26;


 VAR_26 = FUNC_2(VAR_14, VAR_0);
 if (VAR_26 & VAR_7) {
  VAR_22 = (VAR_26 & VAR_3) >>
      VAR_4;
  VAR_20 = (VAR_26 & VAR_8) >>
      VAR_9;
  VAR_23 = (VAR_26 & VAR_1) >>
      VAR_2;
  VAR_21 = (VAR_26 & VAR_5) >>
      VAR_6;
  FUNC_3(VAR_14, VAR_0, 0xffffffff);
  VAR_17 = 1;
 }

 if (!VAR_17)
  return;

 VAR_26 = FUNC_2(VAR_14, VAR_10);
 if (VAR_26 & VAR_11) {
  FUNC_3(VAR_14, VAR_10, 0xFFFF);
  VAR_24 = VAR_14->pf_id;
  VAR_18 = 1;
 }


 for (int VAR_27 = 0; VAR_27 < VAR_13->num_vfs; VAR_27++) {
  VAR_16 = &(VAR_13->vfs[VAR_27]);
  VAR_26 = FUNC_2(VAR_14, FUNC_0(VAR_27));
  if (VAR_26 & VAR_12) {
   FUNC_3(VAR_14, FUNC_0(VAR_27), 0xFFFF);
   VAR_25 = VAR_27;
   VAR_16->num_mdd_events++;
   VAR_19 = 1;
  }
 }


 if (VAR_19 && VAR_18)
  FUNC_1(VAR_15,
      "Malicious Driver Detection event %d"
      " on TX queue %d, pf number %d (PF-%d), vf number %d (VF-%d)\n",
      VAR_23, VAR_21, VAR_22, VAR_24, VAR_20, VAR_25);
 else if (VAR_19 && !VAR_18)
  FUNC_1(VAR_15,
      "Malicious Driver Detection event %d"
      " on TX queue %d, pf number %d, vf number %d (VF-%d)\n",
      VAR_23, VAR_21, VAR_22, VAR_20, VAR_25);
 else if (!VAR_19 && VAR_18)
  FUNC_1(VAR_15,
      "Malicious Driver Detection event %d"
      " on TX queue %d, pf number %d (PF-%d)\n",
      VAR_23, VAR_21, VAR_22, VAR_24);

 else
  FUNC_1(VAR_15,
      "TX Malicious Driver Detection event (unknown)\n");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u64 ;
typedef int u32 ;
struct ixl_vsi {int num_rx_queues; } ;
struct i40e_hw {int dummy; } ;
struct iavf_sc {int dev; struct ixl_vsi vsi; struct i40e_hw hw; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (struct i40e_hw*) ;
 int FUNC_5 (int*) ;
 scalar_t__ FUNC_6 (struct i40e_hw*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void
FUNC_11(struct iavf_sc *VAR_18)
{
 struct i40e_hw *VAR_19 = &VAR_18->hw;
 struct ixl_vsi *VAR_20 = &VAR_18->vsi;
 u32 VAR_21 = 0;
 u64 VAR_22 = 0, VAR_23;
 int VAR_24, VAR_25, VAR_26;
 u32 VAR_27[VAR_8];





 if (VAR_20->num_rx_queues == 1) {
  FUNC_10(VAR_19, FUNC_1(0), 0);
  FUNC_10(VAR_19, FUNC_1(1), 0);
  FUNC_4(VAR_19);
  return;
 }





 FUNC_5(VAR_27);



 for (VAR_24 = 0; VAR_24 < VAR_8; VAR_24++)
                FUNC_10(VAR_19, FUNC_2(VAR_24), VAR_27[VAR_24]);
 VAR_22 = VAR_7;

 VAR_23 = (u64)FUNC_6(VAR_19, FUNC_1(0)) |
     ((u64)FUNC_6(VAR_19, FUNC_1(1)) << 32);
 VAR_23 |= VAR_22;
 FUNC_10(VAR_19, FUNC_1(0), (u32)VAR_23);
 FUNC_10(VAR_19, FUNC_1(1), (u32)(VAR_23 >> 32));


 for (VAR_24 = 0, VAR_25 = 0; VAR_24 < VAR_10; VAR_24++, VAR_25++) {
                if (VAR_25 == VAR_20->num_rx_queues)
                        VAR_25 = 0;
  VAR_26 = VAR_25;


                VAR_21 = (VAR_21 << 8) | (VAR_26 & VAR_9);

                if ((VAR_24 & 3) == 3) {
                        FUNC_10(VAR_19, FUNC_3(VAR_24 >> 2), VAR_21);
   FUNC_0(VAR_18->dev, "HLUT(%2d): %#010x", VAR_24, VAR_21);
  }
        }
 FUNC_4(VAR_19);
}

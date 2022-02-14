
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {struct i40e_hw hw; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_hw*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct ixl_pf*,int ) ;
 int FUNC_3 (struct ixl_pf*,int ,char*) ;
 int FUNC_4 (struct i40e_hw*) ;
 scalar_t__ FUNC_5 (struct ixl_pf*) ;
 int FUNC_6 (struct ixl_pf*) ;
 int FUNC_7 (struct ixl_pf*) ;
 int FUNC_8 (struct ixl_pf*) ;
 scalar_t__ FUNC_9 (struct i40e_hw*,int ) ;
 int FUNC_10 (struct i40e_hw*,int ,scalar_t__) ;

s32
FUNC_11(struct ixl_pf *VAR_3, u8 VAR_4,
         u8 VAR_5, u8 VAR_6)
{
 struct i40e_hw *VAR_7 = &VAR_3->hw;
 s32 VAR_8 = VAR_1;
 u32 VAR_9 = 1;
 u32 VAR_10 = 0;

 u32 VAR_11 = FUNC_9(VAR_7, FUNC_0(VAR_7));
 VAR_11 |= VAR_0;
 FUNC_10(VAR_7, FUNC_0(VAR_7), VAR_11);
 FUNC_4(VAR_7);

 do {
  FUNC_7(VAR_3);

  VAR_8 = FUNC_2(VAR_3, VAR_5);
  if (VAR_8 != VAR_1)
   goto fail;

  VAR_8 = FUNC_5(VAR_3);
  if (VAR_8 != VAR_1)
   goto fail;

  VAR_8 = FUNC_2(VAR_3, VAR_4);
  if (VAR_8 != VAR_1)
   goto fail;

  VAR_8 = FUNC_5(VAR_3);
  if (VAR_8 != VAR_1)
   goto fail;

  VAR_8 = FUNC_2(VAR_3, VAR_6);
  if (VAR_8 != VAR_1)
   goto fail;

  VAR_8 = FUNC_5(VAR_3);
  if (VAR_8 != VAR_1)
   goto fail;

  FUNC_8(VAR_3);
  goto write_byte_out;

fail:
  FUNC_6(VAR_3);
  FUNC_1(100);
  VAR_10++;
  if (VAR_10 < VAR_9)
   FUNC_3(VAR_3, VAR_2, "I2C byte write error - Retrying\n");
  else
   FUNC_3(VAR_3, VAR_2, "I2C byte write error\n");
 } while (VAR_10 < VAR_9);

write_byte_out:
 VAR_11 = FUNC_9(VAR_7, FUNC_0(VAR_7));
 VAR_11 &= ~VAR_0;
 FUNC_10(VAR_7, FUNC_0(VAR_7), VAR_11);
 FUNC_4(VAR_7);

 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {struct i40e_hw hw; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_hw*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ixl_pf*,int*) ;
 int FUNC_3 (struct ixl_pf*,int) ;
 int FUNC_4 (struct ixl_pf*,int) ;
 int FUNC_5 (struct ixl_pf*,int ,char*) ;
 int FUNC_6 (struct i40e_hw*) ;
 int FUNC_7 (struct ixl_pf*) ;
 int FUNC_8 (struct ixl_pf*) ;
 int FUNC_9 (struct ixl_pf*) ;
 int FUNC_10 (struct ixl_pf*) ;
 scalar_t__ FUNC_11 (struct i40e_hw*,int ) ;
 int FUNC_12 (struct i40e_hw*,int ,scalar_t__) ;

s32
FUNC_13(struct ixl_pf *VAR_3, u8 VAR_4,
    u8 VAR_5, u8 *VAR_6)
{
 struct i40e_hw *VAR_7 = &VAR_3->hw;
 u32 VAR_8 = 10;
 u32 VAR_9 = 0;
 bool VAR_10 = 1;
 s32 VAR_11;
 *VAR_6 = 0;

 u32 VAR_12 = FUNC_11(VAR_7, FUNC_0(VAR_7));
 VAR_12 |= VAR_0;
 FUNC_12(VAR_7, FUNC_0(VAR_7), VAR_12);
 FUNC_6(VAR_7);

 do {
  FUNC_9(VAR_3);


  VAR_11 = FUNC_4(VAR_3, VAR_5);
  if (VAR_11 != VAR_1) {
   FUNC_5(VAR_3, VAR_2, "dev_addr clock out error\n");
   goto fail;
  }

  VAR_11 = FUNC_7(VAR_3);
  if (VAR_11 != VAR_1) {
   FUNC_5(VAR_3, VAR_2, "dev_addr i2c ack error\n");
   goto fail;
  }

  VAR_11 = FUNC_4(VAR_3, VAR_4);
  if (VAR_11 != VAR_1) {
   FUNC_5(VAR_3, VAR_2, "byte_offset clock out error\n");
   goto fail;
  }

  VAR_11 = FUNC_7(VAR_3);
  if (VAR_11 != VAR_1) {
   FUNC_5(VAR_3, VAR_2, "byte_offset i2c ack error\n");
   goto fail;
  }

  FUNC_9(VAR_3);


  VAR_11 = FUNC_4(VAR_3, (VAR_5 | 0x1));
  if (VAR_11 != VAR_1)
   goto fail;

  VAR_11 = FUNC_7(VAR_3);
  if (VAR_11 != VAR_1)
   goto fail;

  VAR_11 = FUNC_2(VAR_3, VAR_6);
  if (VAR_11 != VAR_1)
   goto fail;

  VAR_11 = FUNC_3(VAR_3, VAR_10);
  if (VAR_11 != VAR_1)
   goto fail;

  FUNC_10(VAR_3);
  VAR_11 = VAR_1;
  goto done;

fail:
  FUNC_8(VAR_3);
  FUNC_1(100);
  VAR_9++;
  if (VAR_9 < VAR_8)
   FUNC_5(VAR_3, VAR_2, "I2C byte read error - Retrying\n");
  else
   FUNC_5(VAR_3, VAR_2, "I2C byte read error\n");

 } while (VAR_9 < VAR_8);
done:
 VAR_12 = FUNC_11(VAR_7, FUNC_0(VAR_7));
 VAR_12 &= ~VAR_0;
 FUNC_12(VAR_7, FUNC_0(VAR_7), VAR_12);
 FUNC_6(VAR_7);

 return VAR_11;
}

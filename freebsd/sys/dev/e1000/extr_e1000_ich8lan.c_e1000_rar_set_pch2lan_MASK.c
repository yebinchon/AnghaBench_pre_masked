
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ rar_entry_count; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct e1000_hw*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_3 ;
 int FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_10 (struct e1000_hw*) ;
 int FUNC_11 (struct e1000_hw*) ;

__attribute__((used)) static int FUNC_12(struct e1000_hw *VAR_4, u8 *VAR_5, u32 VAR_6)
{
 u32 VAR_7, VAR_8;

 FUNC_0("e1000_rar_set_pch2lan");




 VAR_7 = ((u32) VAR_5[0] |
     ((u32) VAR_5[1] << 8) |
     ((u32) VAR_5[2] << 16) | ((u32) VAR_5[3] << 24));

 VAR_8 = ((u32) VAR_5[4] | ((u32) VAR_5[5] << 8));


 if (VAR_7 || VAR_8)
  VAR_8 |= VAR_2;

 if (VAR_6 == 0) {
  FUNC_9(VAR_4, FUNC_4(VAR_6), VAR_7);
  FUNC_8(VAR_4);
  FUNC_9(VAR_4, FUNC_3(VAR_6), VAR_8);
  FUNC_8(VAR_4);
  return VAR_3;
 }




 if (VAR_6 < (u32) (VAR_4->mac.rar_entry_count)) {
  s32 VAR_9;

  VAR_9 = FUNC_10(VAR_4);
  if (VAR_9)
   goto out;

  FUNC_9(VAR_4, FUNC_7(VAR_6 - 1), VAR_7);
  FUNC_8(VAR_4);
  FUNC_9(VAR_4, FUNC_6(VAR_6 - 1), VAR_8);
  FUNC_8(VAR_4);

  FUNC_11(VAR_4);


  if ((FUNC_5(VAR_4, FUNC_7(VAR_6 - 1)) == VAR_7) &&
      (FUNC_5(VAR_4, FUNC_6(VAR_6 - 1)) == VAR_8))
   return VAR_3;

  FUNC_2("SHRA[%d] might be locked by ME - FWSM=0x%8.8x\n",
    (VAR_6 - 1), FUNC_5(VAR_4, VAR_1));
 }

out:
 FUNC_1("Failed to write receive address at index %d\n", VAR_6);
 return -VAR_0;
}

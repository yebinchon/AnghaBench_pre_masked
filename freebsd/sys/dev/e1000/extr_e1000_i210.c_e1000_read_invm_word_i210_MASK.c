
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static s32 FUNC_8(struct e1000_hw *VAR_9, u8 VAR_10, u16 *VAR_11)
{
 s32 VAR_12 = -VAR_0;
 u32 VAR_13;
 u16 VAR_14;
 u8 VAR_15, VAR_16;

 FUNC_0("e1000_read_invm_word_i210");

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  VAR_13 = FUNC_4(VAR_9, FUNC_3(VAR_14));

  VAR_15 = FUNC_5(VAR_13);
  if (VAR_15 == VAR_6)
   break;
  if (VAR_15 == VAR_2)
   VAR_14 += VAR_1;
  if (VAR_15 == VAR_4)
   VAR_14 += VAR_3;
  if (VAR_15 == VAR_7) {
   VAR_16 = FUNC_6(VAR_13);
   if (VAR_16 == VAR_10) {
    *VAR_11 = FUNC_7(VAR_13);
    FUNC_2("Read INVM Word 0x%02x = %x",
       VAR_10, *VAR_11);
    VAR_12 = VAR_8;
    break;
   }
  }
 }
 if (VAR_12 != VAR_8)
  FUNC_1("Requested word 0x%02x not found in OTP\n", VAR_10);
 return VAR_12;
}

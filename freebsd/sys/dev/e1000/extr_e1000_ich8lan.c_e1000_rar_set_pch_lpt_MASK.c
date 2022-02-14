
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int rar_entry_count; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct e1000_hw*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_9 (struct e1000_hw*) ;
 int FUNC_10 (struct e1000_hw*) ;

__attribute__((used)) static int FUNC_11(struct e1000_hw *VAR_6, u8 *VAR_7, u32 VAR_8)
{
 u32 VAR_9, VAR_10;
 u32 VAR_11;

 FUNC_0("e1000_rar_set_pch_lpt");




 VAR_9 = ((u32) VAR_7[0] | ((u32) VAR_7[1] << 8) |
     ((u32) VAR_7[2] << 16) | ((u32) VAR_7[3] << 24));

 VAR_10 = ((u32) VAR_7[4] | ((u32) VAR_7[5] << 8));


 if (VAR_9 || VAR_10)
  VAR_10 |= VAR_4;

 if (VAR_8 == 0) {
  FUNC_8(VAR_6, FUNC_3(VAR_8), VAR_9);
  FUNC_7(VAR_6);
  FUNC_8(VAR_6, FUNC_2(VAR_8), VAR_10);
  FUNC_7(VAR_6);
  return VAR_5;
 }




 if (VAR_8 < VAR_6->mac.rar_entry_count) {
  VAR_11 = FUNC_4(VAR_6, VAR_1) &
       VAR_2;
  VAR_11 >>= VAR_3;


  if (VAR_11 == 1)
   goto out;

  if ((VAR_11 == 0) || (VAR_8 <= VAR_11)) {
   s32 VAR_12;

   VAR_12 = FUNC_9(VAR_6);

   if (VAR_12)
    goto out;

   FUNC_8(VAR_6, FUNC_6(VAR_8 - 1),
     VAR_9);
   FUNC_7(VAR_6);
   FUNC_8(VAR_6, FUNC_5(VAR_8 - 1),
     VAR_10);
   FUNC_7(VAR_6);

   FUNC_10(VAR_6);


   if ((FUNC_4(VAR_6, FUNC_6(VAR_8 - 1)) == VAR_9) &&
       (FUNC_4(VAR_6, FUNC_5(VAR_8 - 1)) == VAR_10))
    return VAR_5;
  }
 }

out:
 FUNC_1("Failed to write receive address at index %d\n", VAR_8);
 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_nvm_info {scalar_t__ type; int delay_usec; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (struct e1000_hw*,int*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct e1000_hw*,int*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct e1000_hw *VAR_5, u16 VAR_6, u16 VAR_7)
{
 struct e1000_nvm_info *VAR_8 = &VAR_5->nvm;
 u32 VAR_9 = FUNC_1(VAR_5, VAR_0);
 u32 VAR_10;

 FUNC_0("e1000_shift_out_eec_bits");

 VAR_10 = 0x01 << (VAR_7 - 1);
 if (VAR_8->type == VAR_3)
  VAR_9 &= ~VAR_2;
 else
 if (VAR_8->type == VAR_4)
  VAR_9 |= VAR_2;

 do {
  VAR_9 &= ~VAR_1;

  if (VAR_6 & VAR_10)
   VAR_9 |= VAR_1;

  FUNC_3(VAR_5, VAR_0, VAR_9);
  FUNC_2(VAR_5);

  FUNC_6(VAR_8->delay_usec);

  FUNC_5(VAR_5, &VAR_9);
  FUNC_4(VAR_5, &VAR_9);

  VAR_10 >>= 1;
 } while (VAR_10);

 VAR_9 &= ~VAR_1;
 FUNC_3(VAR_5, VAR_0, VAR_9);
}

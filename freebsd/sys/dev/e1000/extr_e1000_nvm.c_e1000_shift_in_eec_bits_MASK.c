
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*,scalar_t__*) ;
 int FUNC_3 (struct e1000_hw*,scalar_t__*) ;

__attribute__((used)) static u16 FUNC_4(struct e1000_hw *VAR_3, u16 VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 u16 VAR_7;

 FUNC_0("e1000_shift_in_eec_bits");

 VAR_5 = FUNC_1(VAR_3, VAR_0);

 VAR_5 &= ~(VAR_2 | VAR_1);
 VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_7 <<= 1;
  FUNC_3(VAR_3, &VAR_5);

  VAR_5 = FUNC_1(VAR_3, VAR_0);

  VAR_5 &= ~VAR_1;
  if (VAR_5 & VAR_2)
   VAR_7 |= 1;

  FUNC_2(VAR_3, &VAR_5);
 }

 return VAR_7;
}

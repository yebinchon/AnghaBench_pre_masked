
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static void FUNC_5(struct e1000_hw *VAR_17)
{
 u32 VAR_18;

 FUNC_0("e1000_initialize_hw_bits_ich8lan");


 VAR_18 = FUNC_1(VAR_17, VAR_1);
 VAR_18 |= (1 << 22);

 if (VAR_17->mac.type >= VAR_16)
  VAR_18 |= VAR_2;
 FUNC_4(VAR_17, VAR_1, VAR_18);


 VAR_18 = FUNC_1(VAR_17, FUNC_3(0));
 VAR_18 |= (1 << 22);
 FUNC_4(VAR_17, FUNC_3(0), VAR_18);


 VAR_18 = FUNC_1(VAR_17, FUNC_3(1));
 VAR_18 |= (1 << 22);
 FUNC_4(VAR_17, FUNC_3(1), VAR_18);


 VAR_18 = FUNC_1(VAR_17, FUNC_2(0));
 if (VAR_17->mac.type == VAR_14)
  VAR_18 |= (1 << 28) | (1 << 29);
 VAR_18 |= (1 << 23) | (1 << 24) | (1 << 26) | (1 << 27);
 FUNC_4(VAR_17, FUNC_2(0), VAR_18);


 VAR_18 = FUNC_1(VAR_17, FUNC_2(1));
 if (FUNC_1(VAR_17, VAR_12) & VAR_13)
  VAR_18 &= ~(1 << 28);
 else
  VAR_18 |= (1 << 28);
 VAR_18 |= (1 << 24) | (1 << 26) | (1 << 30);
 FUNC_4(VAR_17, FUNC_2(1), VAR_18);


 if (VAR_17->mac.type == VAR_14) {
  VAR_18 = FUNC_1(VAR_17, VAR_11);
  VAR_18 &= ~(1U << 31);
  FUNC_4(VAR_17, VAR_11, VAR_18);
 }




 VAR_18 = FUNC_1(VAR_17, VAR_6);
 VAR_18 |= (VAR_10 | VAR_9);




 if (VAR_17->mac.type == VAR_14)
  VAR_18 |= (VAR_7 | VAR_8);
 FUNC_4(VAR_17, VAR_6, VAR_18);


 if (VAR_17->mac.type >= VAR_15) {
  VAR_18 = FUNC_1(VAR_17, VAR_4);
  VAR_18 |= VAR_5;
  FUNC_4(VAR_17, VAR_4, VAR_18);

  VAR_18 = FUNC_1(VAR_17, VAR_0);
  VAR_18 |= VAR_3;
  FUNC_4(VAR_17, VAR_0, VAR_18);
 }

 return;
}

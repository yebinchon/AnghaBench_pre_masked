
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_1__ phy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_5(struct e1000_hw *VAR_6)
{
 u32 VAR_7;

 FUNC_0("e1000_initialize_hw_bits_80003es2lan");


 VAR_7 = FUNC_1(VAR_6, FUNC_3(0));
 VAR_7 |= (1 << 22);
 FUNC_4(VAR_6, FUNC_3(0), VAR_7);


 VAR_7 = FUNC_1(VAR_6, FUNC_3(1));
 VAR_7 |= (1 << 22);
 FUNC_4(VAR_6, FUNC_3(1), VAR_7);


 VAR_7 = FUNC_1(VAR_6, FUNC_2(0));
 VAR_7 &= ~(0xF << 27);
 if (VAR_6->phy.media_type != VAR_5)
  VAR_7 &= ~(1 << 20);
 FUNC_4(VAR_6, FUNC_2(0), VAR_7);


 VAR_7 = FUNC_1(VAR_6, FUNC_2(1));
 if (FUNC_1(VAR_6, VAR_3) & VAR_4)
  VAR_7 &= ~(1 << 28);
 else
  VAR_7 |= (1 << 28);
 FUNC_4(VAR_6, FUNC_2(1), VAR_7);




 VAR_7 = FUNC_1(VAR_6, VAR_0);
 VAR_7 |= (VAR_1 | VAR_2);
 FUNC_4(VAR_6, VAR_0, VAR_7);

 return;
}

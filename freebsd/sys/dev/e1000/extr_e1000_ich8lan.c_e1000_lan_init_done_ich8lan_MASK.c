
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct e1000_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct e1000_hw *VAR_3)
{
 u32 VAR_4, VAR_5 = VAR_0;

 FUNC_0("e1000_lan_init_done_ich8lan");


 do {
  VAR_4 = FUNC_2(VAR_3, VAR_1);
  VAR_4 &= VAR_2;
  FUNC_4(100);
 } while ((!VAR_4) && --VAR_5);





 if (VAR_5 == 0)
  FUNC_1("LAN_INIT_DONE not set, increase timeout\n");


 VAR_4 = FUNC_2(VAR_3, VAR_1);
 VAR_4 &= ~VAR_2;
 FUNC_3(VAR_3, VAR_1, VAR_4);
}

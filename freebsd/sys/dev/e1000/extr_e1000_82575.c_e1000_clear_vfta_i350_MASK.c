
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct e1000_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*,int ,scalar_t__,int ) ;

void FUNC_3(struct e1000_hw *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 FUNC_0("e1000_clear_vfta_350");

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < 10; VAR_4++)
   FUNC_2(VAR_2, VAR_0, VAR_3, 0);

  FUNC_1(VAR_2);
 }
}

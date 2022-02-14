
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct ixgbe_hw*) ;
 int FUNC_12 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static void FUNC_13(struct ixgbe_hw *VAR_9)
{
 int VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;


 VAR_11 = 0x100 << VAR_6;
 VAR_11 |= 0x800 >> VAR_7;


 VAR_12 = VAR_1 |
         VAR_0 |
         VAR_2;


 VAR_13 = VAR_4 |
         VAR_5 |
         VAR_3;

 FUNC_12(VAR_9, VAR_8, 0);

 for (VAR_10 = 0; VAR_10 < 7; VAR_10++) {
  FUNC_12(VAR_9, FUNC_2(VAR_10), 0);
  FUNC_12(VAR_9, FUNC_3(VAR_10), 0);
  FUNC_12(VAR_9, FUNC_4(VAR_10), 0);
  FUNC_12(VAR_9, FUNC_5(VAR_10), VAR_11);
  FUNC_12(VAR_9, FUNC_6(VAR_10), 0);
  FUNC_12(VAR_9, FUNC_7(VAR_10), 0);
  FUNC_12(VAR_9, FUNC_10(VAR_10), 0);
  FUNC_12(VAR_9, FUNC_8(VAR_10), 0);
  FUNC_12(VAR_9, FUNC_9(VAR_10), 0);
  FUNC_12(VAR_9, FUNC_0(VAR_10), VAR_12);
  FUNC_12(VAR_9, FUNC_1(VAR_10), VAR_13);
 }

 FUNC_11(VAR_9);
}

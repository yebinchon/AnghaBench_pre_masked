
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int*) ;
 int FUNC_6 (int) ;

s32 FUNC_7(struct ixgbe_hw *VAR_14)
{
 s32 VAR_15;
 int VAR_16;
 u32 VAR_17 = FUNC_2(VAR_14, VAR_3);
 u32 VAR_18;
 VAR_17 &= ~VAR_4;

 FUNC_0("ixgbe_reinit_fdir_tables_82599");





 VAR_15 = FUNC_5(VAR_14, &VAR_18);
 if (VAR_15) {
  FUNC_1("Flow Director previous command did not complete, aborting table re-initialization.\n");
  return VAR_15;
 }

 FUNC_4(VAR_14, VAR_5, 0);
 FUNC_3(VAR_14);







 FUNC_4(VAR_14, VAR_1,
   (FUNC_2(VAR_14, VAR_1) |
    VAR_2));
 FUNC_3(VAR_14);
 FUNC_4(VAR_14, VAR_1,
   (FUNC_2(VAR_14, VAR_1) &
    ~VAR_2));
 FUNC_3(VAR_14);




 FUNC_4(VAR_14, VAR_7, 0x00);
 FUNC_3(VAR_14);

 FUNC_4(VAR_14, VAR_3, VAR_17);
 FUNC_3(VAR_14);


 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++) {
  if (FUNC_2(VAR_14, VAR_3) &
       VAR_4)
   break;
  FUNC_6(1);
 }
 if (VAR_16 >= VAR_12) {
  FUNC_1("Flow Director Signature poll time exceeded!\n");
  return VAR_0;
 }


 FUNC_2(VAR_14, VAR_11);
 FUNC_2(VAR_14, VAR_6);
 FUNC_2(VAR_14, VAR_9);
 FUNC_2(VAR_14, VAR_10);
 FUNC_2(VAR_14, VAR_8);

 return VAR_13;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
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
 int FUNC_5 (struct ixgbe_hw*,int ) ;
 int VAR_11 ;
 int FUNC_6 (struct ixgbe_hw*,int ,int) ;
 int FUNC_7 (struct ixgbe_hw*,int ,int,int ) ;
 int FUNC_8 (int) ;

s32 FUNC_9(struct ixgbe_hw *VAR_12, u32 *VAR_13, u32 VAR_14,
         u32 VAR_15)
{
 u32 VAR_16, VAR_17, VAR_18;
 u16 VAR_19;

 FUNC_0("ixgbe_hic_unlocked");

 if (!VAR_14 || VAR_14 > VAR_10) {
  FUNC_2("Buffer length failure buffersize=%d.\n", VAR_14);
  return VAR_1;
 }


 VAR_18 = FUNC_5(VAR_12, VAR_4);
 FUNC_6(VAR_12, VAR_4, VAR_18 | VAR_5);


 VAR_16 = FUNC_5(VAR_12, VAR_6);
 if (!(VAR_16 & VAR_8)) {
  FUNC_1("IXGBE_HOST_EN bit disabled.\n");
  return VAR_1;
 }


 if (VAR_14 % sizeof(u32)) {
  FUNC_1("Buffer length failure, not aligned to dword");
  return VAR_2;
 }

 VAR_19 = VAR_14 >> 2;




 for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++)
  FUNC_7(VAR_12, VAR_3,
          VAR_17, FUNC_4(VAR_13[VAR_17]));


 FUNC_6(VAR_12, VAR_6, VAR_16 | VAR_7);

 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
  VAR_16 = FUNC_5(VAR_12, VAR_6);
  if (!(VAR_16 & VAR_7))
   break;
  FUNC_8(1);
 }


 if ((VAR_15 && VAR_17 == VAR_15) ||
     !(FUNC_5(VAR_12, VAR_6) & VAR_9)) {
  FUNC_3(VAR_0,
        "Command has failed with no status valid.\n");
  return VAR_1;
 }

 return VAR_11;
}

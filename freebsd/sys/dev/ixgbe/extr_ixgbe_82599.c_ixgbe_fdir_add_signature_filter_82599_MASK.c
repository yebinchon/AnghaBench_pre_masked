
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flow_type; } ;
union ixgbe_atr_hash_dword {TYPE_1__ formatted; } ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int) ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 int FUNC_4 (union ixgbe_atr_hash_dword,union ixgbe_atr_hash_dword) ;

void FUNC_5(struct ixgbe_hw *VAR_9,
        union ixgbe_atr_hash_dword VAR_10,
        union ixgbe_atr_hash_dword VAR_11,
        u8 VAR_12)
{
 u64 VAR_13;
 u8 VAR_14;
 bool VAR_15;
 u32 VAR_16;

 FUNC_0("ixgbe_fdir_add_signature_filter_82599");






 VAR_15 = !!(VAR_10.formatted.flow_type & VAR_0);
 VAR_14 = VAR_10.formatted.flow_type &
      (VAR_0 - 1);
 switch (VAR_14) {
 case 131:
 case 129:
 case 133:
 case 130:
 case 128:
 case 132:
  break;
 default:
  FUNC_1(" Error on flow type input\n");
  return;
 }


 VAR_16 = VAR_1 | VAR_2 |
    VAR_4 | VAR_5;
 VAR_16 |= (u32)VAR_14 << VAR_3;
 VAR_16 |= (u32)VAR_12 << VAR_6;
 if (VAR_15)
  VAR_16 |= VAR_7;





 VAR_13 = (u64)VAR_16 << 32;
 VAR_13 |= FUNC_4(VAR_10, VAR_11);
 FUNC_3(VAR_9, VAR_8, VAR_13);

 FUNC_2("Tx Queue=%x hash=%x\n", VAR_12, (u32)VAR_13);

 return;
}

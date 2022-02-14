
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ecore_hwfn {int p_dpc_ptt; int p_dev; } ;
struct aeu_invert_reg_bit {scalar_t__ block_index; int bit_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ecore_hwfn*,char*,int ) ;
 int FUNC_1 (int ,int,char*,int ,scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct ecore_hwfn*,scalar_t__,int ,int) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*,int ,scalar_t__) ;
 int FUNC_4 (struct ecore_hwfn*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ecore_hwfn *VAR_5,
      struct aeu_invert_reg_bit *VAR_6,
      u32 VAR_7, u8 VAR_8)
{
 u32 VAR_9 = VAR_6->block_index, VAR_10, VAR_11;

 FUNC_1(VAR_5->p_dev, 0,
    "%s parity attention is set [address 0x%08x, bit %d]\n",
    VAR_6->bit_name, VAR_7, VAR_8);

 if (VAR_9 != VAR_4) {
  FUNC_2(VAR_5, VAR_9, VAR_0, 0);


  if (VAR_9 == VAR_1) {
   FUNC_2(VAR_5, VAR_3,
          VAR_0, 0);
   FUNC_2(VAR_5, VAR_2,
          VAR_0, 0);
  }
 }


 VAR_10 = ~(0x1 << VAR_8);
 VAR_11 = FUNC_3(VAR_5, VAR_5->p_dpc_ptt, VAR_7);
 FUNC_4(VAR_5, VAR_5->p_dpc_ptt, VAR_7, VAR_11 & VAR_10);
 FUNC_0(VAR_5, "`%s' - Disabled future parity errors\n",
  VAR_6->bit_name);
}

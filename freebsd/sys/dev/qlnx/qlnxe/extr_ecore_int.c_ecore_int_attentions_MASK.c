
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ecore_sb_attn_info {scalar_t__ known_attn; struct atten_status_block* sb_attn; } ;
struct ecore_hwfn {struct ecore_sb_attn_info* p_sb_attn; } ;
struct atten_status_block {scalar_t__ sb_index; int atten_ack; int atten_bits; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,char*,...) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ecore_hwfn*,scalar_t__) ;
 int FUNC_5 (struct ecore_hwfn*,scalar_t__) ;

__attribute__((used)) static enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_3)
{
 struct ecore_sb_attn_info *VAR_4 = VAR_3->p_sb_attn;
 struct atten_status_block *VAR_5 = VAR_4->sb_attn;
 u16 VAR_6 = 0, VAR_7, VAR_8;
 u32 VAR_9 = 0, VAR_10 = 0;
 enum _ecore_status_t VAR_11 = VAR_2;




 do {
  VAR_6 = FUNC_2(VAR_5->sb_index);
  VAR_9 = FUNC_3(VAR_5->atten_bits);
  VAR_10 = FUNC_3(VAR_5->atten_ack);
 } while (VAR_6 != FUNC_2(VAR_5->sb_index));
 VAR_5->sb_index = VAR_6;






 VAR_7 = (VAR_9 & ~VAR_10 & VAR_0) &
   ~VAR_4->known_attn;
 VAR_8 = (~VAR_9 & VAR_10 & VAR_0) &
     VAR_4->known_attn;

 if ((VAR_7 & ~0x100) || (VAR_8 & ~0x100))
  FUNC_0(VAR_3,
   "Attention: Index: 0x%04x, Bits: 0x%08x, Acks: 0x%08x, asserted: 0x%04x, De-asserted 0x%04x [Prev. known: 0x%04x]\n",
   VAR_6, VAR_9, VAR_10, VAR_7,
   VAR_8, VAR_4->known_attn);
 else if (VAR_7 == 0x100)
  FUNC_0(VAR_3,
   "MFW indication via attention\n");
 else
  FUNC_1(VAR_3, VAR_1,
      "MFW indication [deassertion]\n");

 if (VAR_7) {
  VAR_11 = FUNC_4(VAR_3, VAR_7);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_8)
  VAR_11 = FUNC_5(VAR_3, VAR_8);

 return VAR_11;
}

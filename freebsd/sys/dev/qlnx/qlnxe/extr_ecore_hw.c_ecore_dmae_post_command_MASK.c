
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_2__ {int channel; struct dmae_cmd* p_dmae_cmd; } ;
struct ecore_hwfn {TYPE_1__ dmae_info; } ;
struct dmae_cmd {int dst_addr_lo; int dst_addr_hi; int src_addr_lo; int src_addr_hi; int length_dw; int opcode_b; int opcode; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*,int,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_7,
          struct ecore_ptt *VAR_8)
{
 struct dmae_cmd *VAR_9 = VAR_7->dmae_info.p_dmae_cmd;
 u8 VAR_10 = VAR_7->dmae_info.channel, VAR_11;
 enum _ecore_status_t VAR_12 = VAR_6;


 if ((((!VAR_9->dst_addr_lo) && (!VAR_9->dst_addr_hi)) ||
      ((!VAR_9->src_addr_lo) && (!VAR_9->src_addr_hi)))) {
  FUNC_0(VAR_7, 1,
     "source or destination address 0 idx_cmd=%d\n"
     "opcode = [0x%08x,0x%04x] len=0x%x src=0x%x:%x dst=0x%x:%x\n",
     VAR_10,
     FUNC_3(VAR_9->opcode),
     FUNC_2(VAR_9->opcode_b),
     FUNC_2(VAR_9->length_dw),
     FUNC_3(VAR_9->src_addr_hi),
     FUNC_3(VAR_9->src_addr_lo),
     FUNC_3(VAR_9->dst_addr_hi),
     FUNC_3(VAR_9->dst_addr_lo));

  return VAR_4;
 }

 FUNC_1(VAR_7, VAR_5,
     "Posting DMAE command [idx %d]: opcode = [0x%08x,0x%04x] len=0x%x src=0x%x:%x dst=0x%x:%x\n",
     VAR_10,
     FUNC_3(VAR_9->opcode),
     FUNC_2(VAR_9->opcode_b),
     FUNC_2(VAR_9->length_dw),
     FUNC_3(VAR_9->src_addr_hi),
     FUNC_3(VAR_9->src_addr_lo),
     FUNC_3(VAR_9->dst_addr_hi),
     FUNC_3(VAR_9->dst_addr_lo));
 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  u32 VAR_13 = (VAR_11 < VAR_1) ?
       *(((u32 *)VAR_9) + VAR_11) : 0;

  FUNC_5(VAR_7, VAR_8,
    VAR_3 +
    (VAR_10 * VAR_0 * sizeof(u32)) +
    (VAR_11 * sizeof(u32)), VAR_13);
 }

 FUNC_5(VAR_7, VAR_8,
   FUNC_4(VAR_10),
   VAR_2);

 return VAR_12;
}

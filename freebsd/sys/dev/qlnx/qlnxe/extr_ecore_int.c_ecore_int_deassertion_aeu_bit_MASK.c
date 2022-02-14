
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_hwfn {int p_dpc_ptt; TYPE_1__* p_dev; } ;
struct aeu_invert_reg_bit {int (* cb ) (struct ecore_hwfn*) ;scalar_t__ block_index; int flags; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {scalar_t__ attn_clr_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,char*,char const*,...) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct ecore_hwfn*,int ) ;
 int FUNC_3 (struct ecore_hwfn*,scalar_t__,int ,int) ;
 int FUNC_4 (struct ecore_hwfn*,int ,int) ;
 int FUNC_5 (struct ecore_hwfn*,int ,int,int) ;
 int FUNC_6 (struct ecore_hwfn*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_7(struct ecore_hwfn *VAR_6,
         struct aeu_invert_reg_bit *VAR_7,
         u32 VAR_8,
         const char *VAR_9,
         u32 VAR_10)
{
 enum _ecore_status_t VAR_11 = VAR_3;
 bool VAR_12 = 0;

 FUNC_0(VAR_6, "Deasserted attention `%s'[%08x]\n",
  VAR_9, VAR_10);


 if (VAR_7->cb) {
  FUNC_0(VAR_6, "`%s (attention)': Calling Callback function\n",
   VAR_9);
  VAR_11 = VAR_7->cb(VAR_6);
 }

 if (VAR_11 != VAR_4)
  VAR_12 = 1;


 if (VAR_7->block_index != VAR_5)
  FUNC_3(VAR_6, VAR_7->block_index,
         VAR_1, !VAR_12);


 if (VAR_12) {
  FUNC_1(VAR_6, 1, "`%s': Fatal attention\n",
     VAR_9);

  FUNC_2(VAR_6, VAR_2);
 }


 if (VAR_7->flags & VAR_0 ||
     VAR_6->p_dev->attn_clr_en) {
  u32 VAR_13;
  u32 VAR_14 = ~VAR_10;
  VAR_13 = FUNC_4(VAR_6, VAR_6->p_dpc_ptt, VAR_8);
  FUNC_5(VAR_6, VAR_6->p_dpc_ptt, VAR_8, (VAR_13 & VAR_14));
  FUNC_0(VAR_6, "`%s' - Disabled future attentions\n",
   VAR_9);
 }

 return VAR_11;
}

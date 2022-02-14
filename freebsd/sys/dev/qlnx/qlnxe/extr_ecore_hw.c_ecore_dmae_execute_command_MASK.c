
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_3__ {int b_mem_ready; struct dmae_cmd* p_dmae_cmd; int completion_word_phys_addr; } ;
struct ecore_hwfn {TYPE_2__* p_dev; TYPE_1__ dmae_info; } ;
struct ecore_dmae_params {int dummy; } ;
struct dmae_cmd {void* comp_val; void* comp_addr_hi; void* comp_addr_lo; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {scalar_t__ recov_in_prog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_hwfn*,int,char*,int,unsigned long long,unsigned long long,...) ;
 int FUNC_3 (struct ecore_hwfn*,int ,char*,unsigned long long,int ,unsigned long long,int ,int) ;
 int VAR_2 ;
 int FUNC_4 (struct ecore_dmae_params*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,scalar_t__,int ,int ,int) ;
 int FUNC_7 (struct ecore_hwfn*,int,int,struct ecore_dmae_params*) ;
 int FUNC_8 (struct ecore_hwfn*,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_9(struct ecore_hwfn *VAR_9,
             struct ecore_ptt *VAR_10,
             u64 VAR_11, u64 VAR_12,
             u8 VAR_13, u8 VAR_14,
             u32 VAR_15,
             struct ecore_dmae_params *VAR_16)
{
 dma_addr_t VAR_17 = VAR_9->dmae_info.completion_word_phys_addr;
 u16 VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
 struct dmae_cmd *VAR_22 = VAR_9->dmae_info.p_dmae_cmd;
 u64 VAR_23 = 0, VAR_24 = 0;
 u16 VAR_25 = VAR_1;
 enum _ecore_status_t VAR_26 = VAR_7;
 u32 VAR_27 = 0;

 if (!VAR_9->dmae_info.b_mem_ready) {
  FUNC_3(VAR_9, VAR_5,
      "No buffers allocated. Avoid DMAE transaction [{src: addr 0x%llx, type %d}, {dst: addr 0x%llx, type %d}, size %d].\n",
      (unsigned long long)VAR_11, VAR_13, (unsigned long long)VAR_12, VAR_14,
      VAR_15);
  return VAR_6;
 }

 if (VAR_9->p_dev->recov_in_prog) {
  FUNC_3(VAR_9, VAR_5,
      "Recovery is in progress. Avoid DMAE transaction [{src: addr 0x%llx, type %d}, {dst: addr 0x%llx, type %d}, size %d].\n",
      (unsigned long long)VAR_11, VAR_13, (unsigned long long)VAR_12, VAR_14,
      VAR_15);



  return VAR_7;
 }

 if (!VAR_22) {
  FUNC_2(VAR_9, 1,
     "ecore_dmae_execute_sub_operation failed. Invalid state. source_addr 0x%llx, destination addr 0x%llx, size_in_dwords 0x%x\n",
     (unsigned long long)VAR_11, (unsigned long long)VAR_12, VAR_18);
  return VAR_4;
 }

 FUNC_7(VAR_9,
     (VAR_13 == VAR_2),
     (VAR_14 == VAR_2),
     VAR_16);

 VAR_22->comp_addr_lo = FUNC_5(FUNC_1(VAR_17));
 VAR_22->comp_addr_hi = FUNC_5(FUNC_0(VAR_17));
 VAR_22->comp_val = FUNC_5(VAR_0);


 VAR_20 = VAR_15 / VAR_25;
 VAR_21 = VAR_15 % VAR_25;

 VAR_23 = VAR_11;
 VAR_24 = VAR_12;

 for (VAR_19 = 0; VAR_19 <= VAR_20; VAR_19++) {
  VAR_27 = VAR_25 * VAR_19;

  if (!FUNC_4(VAR_16, VAR_8)) {
   if (VAR_13 == VAR_2)
    VAR_23 = VAR_11 + VAR_27;
   else
    VAR_23 = VAR_11 + (VAR_27*4);
  }

  if (VAR_14 == VAR_2)
   VAR_24 = VAR_12 + VAR_27;
  else
   VAR_24 = VAR_12 + (VAR_27*4);

  VAR_18 = (VAR_20 == VAR_19) ? VAR_21 : VAR_25;


  if (!VAR_18)
   continue;

  VAR_26 = FUNC_6(VAR_9,
        VAR_10,
        VAR_23,
        VAR_24,
        VAR_13,
        VAR_14,
        VAR_18);
  if (VAR_26 != VAR_7) {
   FUNC_2(VAR_9, 0,
      "ecore_dmae_execute_sub_operation Failed with error 0x%x. source_addr 0x%llx, destination addr 0x%llx, size_in_dwords 0x%x\n",
      VAR_26, (unsigned long long)VAR_11, (unsigned long long)VAR_12, VAR_18);

   FUNC_8(VAR_9, VAR_3);
   break;
  }
 }

 return VAR_26;
}

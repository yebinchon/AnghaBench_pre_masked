
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_2__ {void* p_intermediate_buffer; scalar_t__ intermediate_buffer_phys_addr; struct dmae_cmd* p_dmae_cmd; } ;
struct ecore_hwfn {TYPE_1__ dmae_info; int p_dev; } ;
struct dmae_cmd {void* src_addr_lo; void* src_addr_hi; int length_dw; void* dst_addr_lo; void* dst_addr_hi; } ;
typedef scalar_t__ osal_uintptr_t ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,unsigned long long,unsigned long long,int,unsigned long long) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (void*,void*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,void*,int,int) ;
 int FUNC_7 (void*,void*,int) ;
 int FUNC_8 (struct ecore_hwfn*) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*) ;

__attribute__((used)) static enum _ecore_status_t FUNC_10(struct ecore_hwfn *VAR_3,
            struct ecore_ptt *VAR_4,
            u64 VAR_5,
            u64 VAR_6,
            u8 VAR_7,
            u8 VAR_8,
            u32 VAR_9)
{
 dma_addr_t VAR_10 = VAR_3->dmae_info.intermediate_buffer_phys_addr;
 struct dmae_cmd *VAR_11 = VAR_3->dmae_info.p_dmae_cmd;
 enum _ecore_status_t VAR_12 = VAR_2;

 switch (VAR_7) {
 case 130:
 case 129:
  VAR_11->src_addr_hi = FUNC_5(FUNC_0(VAR_5));
  VAR_11->src_addr_lo = FUNC_5(FUNC_1(VAR_5));
  break;

 case 128:
  VAR_11->src_addr_hi = FUNC_5(FUNC_0(VAR_10));
  VAR_11->src_addr_lo = FUNC_5(FUNC_1(VAR_10));
  FUNC_7(&(VAR_3->dmae_info.p_intermediate_buffer[0]),
       (void *)(osal_uintptr_t)VAR_5,
       VAR_9 * sizeof(u32));
  break;
 default:
  return VAR_0;
 }

 switch (VAR_8) {
 case 130:
 case 129:
  VAR_11->dst_addr_hi = FUNC_5(FUNC_0(VAR_6));
  VAR_11->dst_addr_lo = FUNC_5(FUNC_1(VAR_6));
  break;

 case 128:
  VAR_11->dst_addr_hi = FUNC_5(FUNC_0(VAR_10));
  VAR_11->dst_addr_lo = FUNC_5(FUNC_1(VAR_10));
  break;
 default:
  return VAR_0;
 }

 VAR_11->length_dw = FUNC_4((u16)VAR_9);

 if (VAR_7 == 128 ||
     VAR_7 == 129)
  FUNC_6(VAR_3->p_dev,
         (void *)FUNC_3(VAR_11->src_addr_hi,
            VAR_11->src_addr_lo),
         VAR_9 * sizeof(u32), 0);


 FUNC_9(VAR_3, VAR_4);

 VAR_12 = FUNC_8(VAR_3);



 if (VAR_7 == 128 ||
     VAR_7 == 129)
  FUNC_6(VAR_3->p_dev,
         (void *)FUNC_3(VAR_11->src_addr_hi,
            VAR_11->src_addr_lo),
         VAR_9 * sizeof(u32), 1);


 if (VAR_12 != VAR_2) {
  FUNC_2(VAR_3, VAR_1,
     "Wait Failed. source_addr 0x%llx, grc_addr 0x%llx, size_in_dwords 0x%x, intermediate buffer 0x%llx.\n",
     (unsigned long long)VAR_5, (unsigned long long)VAR_6, VAR_9,
     (unsigned long long)VAR_3->dmae_info.intermediate_buffer_phys_addr);
  return VAR_12;
 }

 if (VAR_8 == 128)
  FUNC_7((void *)(osal_uintptr_t)(VAR_6),
       &VAR_3->dmae_info.p_intermediate_buffer[0],
       VAR_9 * sizeof(u32));

 return VAR_2;
}

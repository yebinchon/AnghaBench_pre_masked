
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmae_cmd {int dummy; } ;
typedef struct dmae_cmd u32 ;
struct TYPE_2__ {int b_mem_ready; int channel; int intermediate_buffer_phys_addr; int dmae_cmd_phys_addr; struct dmae_cmd* p_completion_word; struct dmae_cmd* p_intermediate_buffer; struct dmae_cmd* p_dmae_cmd; int completion_word_phys_addr; } ;
struct ecore_hwfn {TYPE_1__ dmae_info; int rel_pf_id; int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dmae_cmd* FUNC_1 (int ,int *,int) ;
 struct dmae_cmd* VAR_3 ;
 int FUNC_2 (struct ecore_hwfn*) ;

enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_4)
{
 dma_addr_t *VAR_5 = &VAR_4->dmae_info.completion_word_phys_addr;
 struct dmae_cmd **VAR_6 = &VAR_4->dmae_info.p_dmae_cmd;
 u32 **VAR_7 = &VAR_4->dmae_info.p_intermediate_buffer;
 u32 **VAR_8 = &VAR_4->dmae_info.p_completion_word;

 *VAR_8 = FUNC_1(VAR_4->p_dev, VAR_5, sizeof(u32));
 if (*VAR_8 == VAR_3) {
  FUNC_0(VAR_4, 0,
     "Failed to allocate `p_completion_word'\n");
  goto err;
 }

 VAR_5 = &VAR_4->dmae_info.dmae_cmd_phys_addr;
 *VAR_6 = FUNC_1(VAR_4->p_dev, VAR_5,
      sizeof(struct dmae_cmd));
 if (*VAR_6 == VAR_3) {
  FUNC_0(VAR_4, 0,
     "Failed to allocate `struct dmae_cmd'\n");
  goto err;
 }

 VAR_5 = &VAR_4->dmae_info.intermediate_buffer_phys_addr;
 *VAR_7 = FUNC_1(VAR_4->p_dev, VAR_5,
       sizeof(u32) * VAR_0);
 if (*VAR_7 == VAR_3) {
  FUNC_0(VAR_4, 0,
     "Failed to allocate `intermediate_buffer'\n");
  goto err;
 }

  VAR_4->dmae_info.channel = VAR_4->rel_pf_id;
  VAR_4->dmae_info.b_mem_ready = 1;

 return VAR_2;
err:
 FUNC_2(VAR_4);
 return VAR_1;
}

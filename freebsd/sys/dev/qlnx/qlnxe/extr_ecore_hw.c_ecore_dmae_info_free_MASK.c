
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int b_mem_ready; scalar_t__ p_completion_word; scalar_t__ p_dmae_cmd; scalar_t__ p_intermediate_buffer; int intermediate_buffer_phys_addr; int dmae_cmd_phys_addr; int completion_word_phys_addr; int lock; } ;
struct ecore_hwfn {TYPE_1__ dmae_info; int p_dev; } ;
struct dmae_cmd {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ecore_hwfn *VAR_2)
{
 dma_addr_t VAR_3;

 FUNC_1(&VAR_2->dmae_info.lock);
 VAR_2->dmae_info.b_mem_ready = 0;
 FUNC_2(&VAR_2->dmae_info.lock);

 if (VAR_2->dmae_info.p_completion_word != VAR_1) {
  VAR_3 = VAR_2->dmae_info.completion_word_phys_addr;
  FUNC_0(VAR_2->p_dev,
           VAR_2->dmae_info.p_completion_word,
           VAR_3, sizeof(u32));
  VAR_2->dmae_info.p_completion_word = VAR_1;
 }

 if (VAR_2->dmae_info.p_dmae_cmd != VAR_1) {
  VAR_3 = VAR_2->dmae_info.dmae_cmd_phys_addr;
  FUNC_0(VAR_2->p_dev,
           VAR_2->dmae_info.p_dmae_cmd,
           VAR_3, sizeof(struct dmae_cmd));
  VAR_2->dmae_info.p_dmae_cmd = VAR_1;
 }

 if (VAR_2->dmae_info.p_intermediate_buffer != VAR_1) {
  VAR_3 = VAR_2->dmae_info.intermediate_buffer_phys_addr;
  FUNC_0(VAR_2->p_dev,
           VAR_2->dmae_info.p_intermediate_buffer,
           VAR_3, sizeof(u32) * VAR_0);
  VAR_2->dmae_info.p_intermediate_buffer = VAR_1;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct vmci_queue_kernel_if {size_t num_pages; struct vmci_dma_alloc* dmas; } ;
struct vmci_queue {struct vmci_queue_kernel_if* kernel_if; int * q_header; int * saved_header; } ;
struct vmci_dma_alloc {scalar_t__ dma_vaddr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 struct vmci_queue* FUNC_2 (size_t const,int ,int ) ;
 int FUNC_3 (size_t,int,struct vmci_dma_alloc*) ;
 int FUNC_4 (struct vmci_queue*,size_t) ;

void *
FUNC_5(uint64_t VAR_4, uint32_t VAR_5)
{
 struct vmci_queue *VAR_6;
 size_t VAR_7;
 const size_t VAR_8 = FUNC_1(VAR_4, VAR_2) + 1;
 const size_t VAR_9 = VAR_8 * sizeof(struct vmci_dma_alloc);
 const size_t VAR_10 =
     sizeof(*VAR_6) + sizeof(*(VAR_6->kernel_if)) + VAR_9;


 if (VAR_4 > VAR_3) {
  FUNC_0(0);
  return (((void*)0));
 }

 VAR_6 = FUNC_2(VAR_10, VAR_0, VAR_1);
 if (!VAR_6)
  return (((void*)0));

 VAR_6->q_header = ((void*)0);
 VAR_6->saved_header = ((void*)0);
 VAR_6->kernel_if = (struct vmci_queue_kernel_if *)(VAR_6 + 1);
 VAR_6->kernel_if->num_pages = VAR_8;
 VAR_6->kernel_if->dmas = (struct vmci_dma_alloc *)(VAR_6->kernel_if +
     1);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  FUNC_3(VAR_2, 1, &VAR_6->kernel_if->dmas[VAR_7]);
  if (!VAR_6->kernel_if->dmas[VAR_7].dma_vaddr) {

   FUNC_4(VAR_6, VAR_7 * VAR_2);
   return (((void*)0));
  }
 }


 VAR_6->q_header = (void *)VAR_6->kernel_if->dmas[0].dma_vaddr;

 return ((void *)VAR_6);
}

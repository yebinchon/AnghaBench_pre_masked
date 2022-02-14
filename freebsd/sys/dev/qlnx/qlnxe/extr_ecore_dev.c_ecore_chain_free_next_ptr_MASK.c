
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ecore_dev {int dummy; } ;
struct ecore_chain_next {int next_phys; void* next_virt; } ;
struct ecore_chain {scalar_t__ elem_size; scalar_t__ usable_per_page; scalar_t__ page_cnt; int p_phys_addr; void* p_virt_addr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_dev*,void*,int ,int ) ;
 void* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct ecore_dev *VAR_2,
          struct ecore_chain *VAR_3)
{
 void *VAR_4 = VAR_3->p_virt_addr, *VAR_5 = VAR_1;
 dma_addr_t VAR_6 = VAR_3->p_phys_addr, VAR_7 = 0;
 struct ecore_chain_next *VAR_8;
 u32 VAR_9, VAR_10;

 if (!VAR_4)
  return;

 VAR_9 = VAR_3->elem_size * VAR_3->usable_per_page;

 for (VAR_10 = 0; VAR_10 < VAR_3->page_cnt; VAR_10++) {
  if (!VAR_4)
   break;

  VAR_8 = (struct ecore_chain_next *)((u8 *)VAR_4 + VAR_9);
  VAR_5 = VAR_8->next_virt;
  VAR_7 = FUNC_0(VAR_8->next_phys);

  FUNC_1(VAR_2, VAR_4, VAR_6,
           VAR_0);

  VAR_4 = VAR_5;
  VAR_6 = VAR_7;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct ecore_dev {int dummy; } ;
struct TYPE_4__ {void** pp_virt_addr_tbl; } ;
struct TYPE_3__ {void* p_virt_table; int p_phys_table; } ;
struct ecore_chain {size_t page_cnt; TYPE_2__ pbl; TYPE_1__ pbl_sp; int b_external_pbl; } ;
typedef int dma_addr_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ecore_dev*,void*,int ,size_t) ;
 void** VAR_2 ;
 int FUNC_1 (struct ecore_dev*,void**) ;

__attribute__((used)) static void FUNC_2(struct ecore_dev *VAR_3,
     struct ecore_chain *VAR_4)
{
 void **VAR_5 = VAR_4->pbl.pp_virt_addr_tbl;
 u8 *VAR_6 = (u8 *)VAR_4->pbl_sp.p_virt_table;
 u32 VAR_7 = VAR_4->page_cnt, VAR_8, VAR_9;

 if (!VAR_5)
  return;

 if (!VAR_6)
  goto out;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (!VAR_5[VAR_8])
   break;

  FUNC_0(VAR_3, VAR_5[VAR_8],
           *(dma_addr_t *)VAR_6,
           VAR_0);

  VAR_6 += VAR_1;
 }

 VAR_9 = VAR_7 * VAR_1;

 if (!VAR_4->b_external_pbl) {
  FUNC_0(VAR_3, VAR_4->pbl_sp.p_virt_table,
           VAR_4->pbl_sp.p_phys_table, VAR_9);
 }
out:
 FUNC_1(VAR_3, VAR_4->pbl.pp_virt_addr_tbl);
 VAR_4->pbl.pp_virt_addr_tbl = VAR_2;
}

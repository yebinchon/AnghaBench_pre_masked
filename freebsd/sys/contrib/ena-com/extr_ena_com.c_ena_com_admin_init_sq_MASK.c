
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ena_com_admin_sq {int phase; int * db_addr; scalar_t__ tail; scalar_t__ head; int entries; int mem_handle; int dma_addr; } ;
struct ena_com_admin_queue {int q_dmadev; int q_depth; struct ena_com_admin_sq sq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct ena_com_admin_queue *VAR_1)
{
 struct ena_com_admin_sq *VAR_2 = &VAR_1->sq;
 u16 VAR_3 = FUNC_0(VAR_1->q_depth);

 FUNC_1(VAR_1->q_dmadev, VAR_3, VAR_2->entries, VAR_2->dma_addr,
          VAR_2->mem_handle);

 if (!VAR_2->entries) {
  FUNC_2("memory allocation failed\n");
  return VAR_0;
 }

 VAR_2->head = 0;
 VAR_2->tail = 0;
 VAR_2->phase = 1;

 VAR_2->db_addr = ((void*)0);

 return 0;
}

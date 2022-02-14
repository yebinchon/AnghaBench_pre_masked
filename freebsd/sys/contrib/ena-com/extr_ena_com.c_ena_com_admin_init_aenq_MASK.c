
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ena_com_aenq {int q_depth; int head; int phase; struct ena_aenq_handlers* aenq_handlers; int dma_addr; int entries; int mem_handle; } ;
struct ena_com_dev {scalar_t__ reg_bar; int bus; struct ena_com_aenq aenq; int dmadev; } ;
struct ena_aenq_handlers {int dummy; } ;
struct ena_admin_aenq_entry {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ,int,scalar_t__) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ena_com_dev *VAR_9,
       struct ena_aenq_handlers *VAR_10)
{
 struct ena_com_aenq *VAR_11 = &VAR_9->aenq;
 u32 VAR_12, VAR_13, VAR_14;
 u16 VAR_15;

 VAR_9->aenq.q_depth = VAR_0;
 VAR_15 = FUNC_0(VAR_0);
 FUNC_3(VAR_9->dmadev, VAR_15,
   VAR_11->entries,
   VAR_11->dma_addr,
   VAR_11->mem_handle);

 if (!VAR_11->entries) {
  FUNC_5("memory allocation failed\n");
  return VAR_2;
 }

 VAR_11->head = VAR_11->q_depth;
 VAR_11->phase = 1;

 VAR_12 = FUNC_2(VAR_11->dma_addr);
 VAR_13 = FUNC_1(VAR_11->dma_addr);

 FUNC_4(VAR_9->bus, VAR_12, VAR_9->reg_bar + VAR_4);
 FUNC_4(VAR_9->bus, VAR_13, VAR_9->reg_bar + VAR_3);

 VAR_14 = 0;
 VAR_14 |= VAR_9->aenq.q_depth & VAR_5;
 VAR_14 |= (sizeof(struct ena_admin_aenq_entry) <<
  VAR_7) &
  VAR_6;
 FUNC_4(VAR_9->bus, VAR_14, VAR_9->reg_bar + VAR_8);

 if (FUNC_6(!VAR_10)) {
  FUNC_5("aenq handlers pointer is NULL\n");
  return VAR_1;
 }

 VAR_11->aenq_handlers = VAR_10;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_debug_entry {size_t size; int direction; scalar_t__ sg_call_ents; int dev_addr; struct device* dev; int type; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct device*,struct dma_debug_entry*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(struct device *VAR_2, dma_addr_t VAR_3,
       size_t VAR_4, int VAR_5)
{
 struct dma_debug_entry VAR_6;

 if (FUNC_1(VAR_1))
  return;

 VAR_6.type = VAR_0;
 VAR_6.dev = VAR_2;
 VAR_6.dev_addr = VAR_3;
 VAR_6.size = VAR_4;
 VAR_6.direction = VAR_5;
 VAR_6.sg_call_ents = 0;

 FUNC_0(VAR_2, &VAR_6, 1);
}

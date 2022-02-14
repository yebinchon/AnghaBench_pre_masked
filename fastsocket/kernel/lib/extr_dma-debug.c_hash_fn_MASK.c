
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_debug_entry {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct dma_debug_entry *VAR_2)
{




 return (VAR_2->dev_addr >> VAR_1) & VAR_0;
}

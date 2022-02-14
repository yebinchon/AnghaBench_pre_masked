
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pool {unsigned int boundary; unsigned int allocation; unsigned int size; } ;
struct dma_page {scalar_t__ vaddr; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct dma_pool *VAR_0, struct dma_page *VAR_1)
{
 unsigned int VAR_2 = 0;
 unsigned int VAR_3 = VAR_0->boundary;

 do {
  unsigned int VAR_4 = VAR_2 + VAR_0->size;
  if (FUNC_0((VAR_4 + VAR_0->size) >= VAR_3)) {
   VAR_4 = VAR_3;
   VAR_3 += VAR_0->boundary;
  }
  *(int *)(VAR_1->vaddr + VAR_2) = VAR_4;
  VAR_2 = VAR_4;
 } while (VAR_2 < VAR_0->allocation);
}

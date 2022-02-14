
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct rds_iw_scatterlist {unsigned int len; scalar_t__ bytes; scalar_t__ dma_npages; scalar_t__ dma_len; struct scatterlist* list; } ;



__attribute__((used)) static void FUNC_0(struct rds_iw_scatterlist *VAR_0,
  struct scatterlist *VAR_1, unsigned int VAR_2)
{
 VAR_0->list = VAR_1;
 VAR_0->len = VAR_2;
 VAR_0->dma_len = 0;
 VAR_0->dma_npages = 0;
 VAR_0->bytes = 0;
}

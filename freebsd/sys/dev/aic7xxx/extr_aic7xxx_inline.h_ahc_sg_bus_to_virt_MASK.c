
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scb {int sg_list_phys; struct ahc_dma_seg* sg_list; } ;
struct ahc_dma_seg {int dummy; } ;



__attribute__((used)) static __inline struct ahc_dma_seg *
FUNC_0(struct scb *VAR_0, uint32_t VAR_1)
{
 int VAR_2;

 VAR_2 = (VAR_1 - VAR_0->sg_list_phys)/sizeof(struct ahc_dma_seg);

 VAR_2++;

 return (&VAR_0->sg_list[VAR_2]);
}

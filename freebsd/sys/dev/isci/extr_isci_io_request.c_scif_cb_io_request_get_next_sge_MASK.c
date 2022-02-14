
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ISCI_IO_REQUEST {size_t current_sge_index; size_t num_segments; int * sge; } ;
typedef int bus_dma_segment_t ;



void
FUNC_0(void * VAR_0,
    void * VAR_1, void ** VAR_2)
{
 struct ISCI_IO_REQUEST *VAR_3 =
     (struct ISCI_IO_REQUEST *)VAR_0;

 if (VAR_3->current_sge_index == VAR_3->num_segments)
  *VAR_2 = ((void*)0);
 else {
  bus_dma_segment_t *VAR_4 =
      &VAR_3->sge[VAR_3->current_sge_index];

  VAR_3->current_sge_index++;
  *VAR_2 = VAR_4;
 }
}

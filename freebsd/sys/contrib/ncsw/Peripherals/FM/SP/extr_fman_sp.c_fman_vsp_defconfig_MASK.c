
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm_storage_profile_params {int no_scather_gather; int dma_write_optimize; int scatter_gather_cache_attr; int header_cache_attr; int int_context_cache_attr; int dma_swap_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(struct fm_storage_profile_params *VAR_6)
{
    VAR_6->dma_swap_data =
            VAR_3;
    VAR_6->int_context_cache_attr =
            VAR_1;
    VAR_6->header_cache_attr =
            VAR_0;
    VAR_6->scatter_gather_cache_attr =
            VAR_2;
    VAR_6->dma_write_optimize =
            VAR_4;
    VAR_6->no_scather_gather =
            VAR_5;
}

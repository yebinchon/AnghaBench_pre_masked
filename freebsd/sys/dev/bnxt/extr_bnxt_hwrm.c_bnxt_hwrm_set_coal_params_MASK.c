
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct hwrm_ring_cmpl_ring_cfg_aggint_params_input {void* num_cmpl_aggr_int; void* int_lat_tmr_max; void* int_lat_tmr_min; void* cmpl_aggr_dma_tmr_during_int; void* cmpl_aggr_dma_tmr; void* num_cmpl_dma_aggr_during_int; void* num_cmpl_dma_aggr; void* flags; } ;
struct bnxt_softc {int dummy; } ;


 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct bnxt_softc *VAR_0, uint32_t VAR_1,
        uint32_t VAR_2, uint16_t VAR_3,
        struct hwrm_ring_cmpl_ring_cfg_aggint_params_input *VAR_4)
{
        VAR_4->flags = FUNC_0(VAR_3);
        VAR_4->num_cmpl_dma_aggr = FUNC_0((uint16_t)VAR_1);
        VAR_4->num_cmpl_dma_aggr_during_int = FUNC_0(VAR_1 >> 16);
        VAR_4->cmpl_aggr_dma_tmr = FUNC_0((uint16_t)VAR_2);
        VAR_4->cmpl_aggr_dma_tmr_during_int = FUNC_0(VAR_2 >> 16);

        VAR_4->int_lat_tmr_min = FUNC_0((uint16_t)VAR_2 * 2);
        VAR_4->int_lat_tmr_max = FUNC_0((uint16_t)VAR_2 * 4);
        VAR_4->num_cmpl_aggr_int = FUNC_0((uint16_t)VAR_1 * 4);
}

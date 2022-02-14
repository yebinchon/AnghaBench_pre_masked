
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct fman_sp_int_context_data_copy {scalar_t__ size; scalar_t__ int_context_offset; scalar_t__ ext_buf_offset; } ;
struct fman_sp_buf_margins {scalar_t__ end_margins; scalar_t__ start_margins; } ;
struct fman_ext_pools {int num_pools_used; TYPE_1__* ext_buf_pool; } ;
struct fman_buf_pool_depletion {scalar_t__* pfc_priorities_en; scalar_t__ buf_pool_depletion_enabled; int pools_to_consider_for_single_mode; scalar_t__ single_pool_mode_enable; scalar_t__ num_pools; int pools_to_consider; scalar_t__ pools_grp_mode_enable; } ;
struct fman_backup_bm_pools {int num_backup_pools; scalar_t__* pool_ids; } ;
struct fm_storage_profile_params {int no_scather_gather; size_t liodn_offset; scalar_t__ dma_write_optimize; scalar_t__ scatter_gather_cache_attr; scalar_t__ header_cache_attr; scalar_t__ int_context_cache_attr; scalar_t__ dma_swap_data; struct fman_sp_buf_margins* buf_margins; struct fman_sp_int_context_data_copy* int_context; struct fman_backup_bm_pools backup_pools; struct fman_buf_pool_depletion buf_pool_depletion; struct fman_ext_pools fm_ext_pools; } ;
struct fm_pcd_storage_profile_regs {int fm_sp_spliodn; int fm_sp_ebm; int fm_sp_icp; int fm_sp_da; int fm_sp_mpd; int * fm_sp_ebmpi; } ;
struct TYPE_2__ {scalar_t__ id; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int,int ,struct fman_ext_pools*,int) ;
 int FUNC_1 (size_t,int *) ;

void FUNC_2(struct fm_pcd_storage_profile_regs *VAR_18,
    uint16_t VAR_19, struct fm_storage_profile_params *VAR_20,
    int VAR_21, int VAR_22,
    int VAR_23)
{
    int VAR_24 = 0, VAR_25 = 0;
    struct fm_pcd_storage_profile_regs *VAR_26;
    uint32_t VAR_27, VAR_28;
    struct fman_ext_pools *VAR_29 = &VAR_20->fm_ext_pools;
    struct fman_buf_pool_depletion *VAR_30 =
                    &VAR_20->buf_pool_depletion;
    struct fman_backup_bm_pools *VAR_31 =
                    &VAR_20->backup_pools;
    struct fman_sp_int_context_data_copy *VAR_32 =
                        VAR_20->int_context;
    struct fman_sp_buf_margins *VAR_33 =
                        VAR_20->buf_margins;
    bool VAR_34 = VAR_20->no_scather_gather;
    uint16_t VAR_35 = VAR_20->liodn_offset;

    VAR_26 = &VAR_18[VAR_19];


    for (VAR_24 = 0; VAR_24 < VAR_29->num_pools_used; VAR_24++) {
        VAR_27 = VAR_10 |
            VAR_8;
        VAR_27 |= ((uint32_t)VAR_29->ext_buf_pool[VAR_24].id <<
            VAR_9);
        VAR_27 |= VAR_29->ext_buf_pool[VAR_24].size;


        for (VAR_25 = 0; VAR_25 < VAR_31->num_backup_pools; VAR_25++)
            if (VAR_29->ext_buf_pool[VAR_24].id ==
                VAR_31->pool_ids[VAR_25]) {
                VAR_27 |= VAR_7;
                break;
            }
        FUNC_1(VAR_27, &VAR_26->fm_sp_ebmpi[VAR_24]);
    }


    for (VAR_24 = VAR_29->num_pools_used;
        VAR_24 < VAR_21; VAR_24++)
        FUNC_1(0, &VAR_26->fm_sp_ebmpi[VAR_24]);


    VAR_27 = 0;
    if (VAR_30->buf_pool_depletion_enabled && VAR_30->pools_grp_mode_enable) {

        VAR_28 = FUNC_0(VAR_22, VAR_30->
                pools_to_consider, VAR_29, 0x80000000);


        VAR_27 |= (((uint32_t)VAR_30->num_pools - 1) <<
            VAR_14);
        VAR_27 |= VAR_28;
    }

    if (VAR_30->buf_pool_depletion_enabled && VAR_30->single_pool_mode_enable) {

        VAR_28 = FUNC_0(VAR_22, VAR_30->
                pools_to_consider_for_single_mode,
                VAR_29, 0x00000080);


        VAR_27 |= VAR_28;
    }


    if (VAR_30->buf_pool_depletion_enabled) {
        VAR_28 = 0;
        for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++)
            if (VAR_30->pfc_priorities_en[VAR_24] == VAR_17)
                VAR_28 |= 0x00000100 << VAR_24;
        VAR_27 |= VAR_28;
    }
    FUNC_1(VAR_27, &VAR_26->fm_sp_mpd);


    VAR_27 = 0;
    VAR_27 |= (uint32_t)VAR_20->dma_swap_data <<
        VAR_3;
    VAR_27 |= (uint32_t)VAR_20->int_context_cache_attr <<
        VAR_1;
    VAR_27 |= (uint32_t)VAR_20->header_cache_attr <<
        VAR_0;
    VAR_27 |= (uint32_t)VAR_20->scatter_gather_cache_attr <<
        VAR_2;
    if (VAR_20->dma_write_optimize)
        VAR_27 |= VAR_4;
    FUNC_1(VAR_27, &VAR_26->fm_sp_da);


    VAR_27 = 0;
    VAR_27 |= (((uint32_t)VAR_32->ext_buf_offset/
        VAR_16) << VAR_13);
    VAR_27 |= (((uint32_t)VAR_32->int_context_offset/
        VAR_16) << VAR_11);
    VAR_27 |= (((uint32_t)VAR_32->size/VAR_16) <<
        VAR_12);
    FUNC_1(VAR_27, &VAR_26->fm_sp_icp);


    VAR_27 = 0;
    VAR_27 |= (((uint32_t)VAR_33->start_margins) <<
        VAR_6);
    VAR_27 |= (((uint32_t)VAR_33->end_margins) <<
        VAR_5);
    if (VAR_34)
        VAR_27 |= VAR_15;
    FUNC_1(VAR_27, &VAR_26->fm_sp_ebm);


    FUNC_1(VAR_35, &VAR_26->fm_sp_spliodn);
}

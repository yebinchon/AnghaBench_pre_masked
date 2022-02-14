
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_func_sp_obj {struct ecore_func_sp_drv_ops* drv; int wait_comp; int complete_cmd; int check_transition; int send_cmd; void* afex_rdata_mapping; void* afex_rdata; void* rdata_mapping; void* rdata; int one_pending_mutex; } ;
struct ecore_func_sp_drv_ops {int dummy; } ;
struct bxe_softc {int dummy; } ;
typedef void* ecore_dma_addr_t ;


 int FUNC_0 (struct ecore_func_sp_obj*,int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(struct bxe_softc *VAR_4,
    struct ecore_func_sp_obj *VAR_5,
    void *VAR_6, ecore_dma_addr_t VAR_7,
    void *VAR_8, ecore_dma_addr_t VAR_9,
    struct ecore_func_sp_drv_ops *VAR_10)
{
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));

 FUNC_1(&VAR_5->one_pending_mutex);

 VAR_5->rdata = VAR_6;
 VAR_5->rdata_mapping = VAR_7;
 VAR_5->afex_rdata = VAR_8;
 VAR_5->afex_rdata_mapping = VAR_9;
 VAR_5->send_cmd = VAR_2;
 VAR_5->check_transition = VAR_0;
 VAR_5->complete_cmd = VAR_1;
 VAR_5->wait_comp = VAR_3;
 VAR_5->drv = VAR_10;
}

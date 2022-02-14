
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int rcb_t ;
typedef int raid_path_error_info_elem_t ;
struct TYPE_4__ {scalar_t__ virt_addr; } ;
struct TYPE_5__ {TYPE_1__ err_buf_dma_mem; } ;
typedef TYPE_2__ pqisrc_softstate_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(pqisrc_softstate_t *VAR_0,
  rcb_t *VAR_1, uint16_t VAR_2)
{
 raid_path_error_info_elem_t *VAR_3 = ((void*)0);

 FUNC_1("IN");

 VAR_3 = (raid_path_error_info_elem_t*)
   VAR_0->err_buf_dma_mem.virt_addr +
   VAR_2;

 if(VAR_3 == ((void*)0)) {
  FUNC_0("err_info structure is NULL  err_idx :%x", VAR_2);
  return;
 }

 FUNC_2(VAR_1, VAR_3);

 FUNC_1("OUT");
}

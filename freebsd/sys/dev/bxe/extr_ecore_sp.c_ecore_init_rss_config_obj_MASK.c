
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ecore_rss_config_obj {int config_rss; int engine_id; int raw; } ;
struct bxe_softc {int dummy; } ;
typedef int ecore_obj_type ;
typedef int ecore_dma_addr_t ;


 int FUNC_0 (int *,int ,int ,int ,void*,int ,int,unsigned long*,int ) ;
 int VAR_0 ;

void FUNC_1(struct bxe_softc *VAR_1,
          struct ecore_rss_config_obj *VAR_2,
          uint8_t VAR_3, uint32_t VAR_4, uint8_t VAR_5, uint8_t VAR_6,
          void *VAR_7, ecore_dma_addr_t VAR_8,
          int VAR_9, unsigned long *VAR_10,
          ecore_obj_type VAR_11)
{
 FUNC_0(&VAR_2->raw, VAR_3, VAR_4, VAR_5, VAR_7,
      VAR_8, VAR_9, VAR_10, VAR_11);

 VAR_2->engine_id = VAR_6;
 VAR_2->config_rss = VAR_0;
}

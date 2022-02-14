
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct tpa_update_ramrod_data {int dummy; } ;
struct ecore_queue_update_tpa_params {int dummy; } ;
struct TYPE_2__ {struct ecore_queue_update_tpa_params update_tpa; } ;
struct ecore_queue_state_params {TYPE_1__ params; struct ecore_queue_sp_obj* q_obj; } ;
struct ecore_queue_sp_obj {int func_id; int * cids; int rdata_mapping; scalar_t__ rdata; } ;
struct bxe_softc {int dummy; } ;
typedef int ecore_dma_addr_t ;


 int FUNC_0 (struct tpa_update_ramrod_data*,int ,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bxe_softc*,struct ecore_queue_sp_obj*,struct ecore_queue_update_tpa_params*,struct tpa_update_ramrod_data*) ;
 int FUNC_2 (struct bxe_softc*,int ,int ,int ,int) ;

__attribute__((used)) static inline int FUNC_3(struct bxe_softc *VAR_4,
     struct ecore_queue_state_params *VAR_5)
{
 struct ecore_queue_sp_obj *VAR_6 = VAR_5->q_obj;
 struct tpa_update_ramrod_data *VAR_7 =
  (struct tpa_update_ramrod_data *)VAR_6->rdata;
 ecore_dma_addr_t VAR_8 = VAR_6->rdata_mapping;
 struct ecore_queue_update_tpa_params *VAR_9 =
  &VAR_5->params.update_tpa;
 uint16_t VAR_10;


 FUNC_0(VAR_7, 0, sizeof(*VAR_7));


 FUNC_1(VAR_4, VAR_6, VAR_9, VAR_7);





 VAR_10 = VAR_1 |
  ((VAR_6->func_id) << VAR_3);







 return FUNC_2(VAR_4, VAR_2,
        VAR_6->cids[VAR_0],
        VAR_8, VAR_10);
}

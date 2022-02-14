
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct ecore_queue_update_params {size_t cid_index; } ;
struct TYPE_2__ {struct ecore_queue_update_params update; } ;
struct ecore_queue_state_params {TYPE_1__ params; struct ecore_queue_sp_obj* q_obj; } ;
struct ecore_queue_sp_obj {size_t max_cos; int * cids; int cl_id; int rdata_mapping; scalar_t__ rdata; } ;
struct client_update_ramrod_data {int dummy; } ;
struct bxe_softc {int dummy; } ;
typedef int ecore_dma_addr_t ;


 int FUNC_0 (char*,int ,size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct client_update_ramrod_data*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bxe_softc*,struct ecore_queue_sp_obj*,struct ecore_queue_update_params*,struct client_update_ramrod_data*) ;
 int FUNC_3 (struct bxe_softc*,int ,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_4(struct bxe_softc *VAR_3,
          struct ecore_queue_state_params *VAR_4)
{
 struct ecore_queue_sp_obj *VAR_5 = VAR_4->q_obj;
 struct client_update_ramrod_data *VAR_6 =
  (struct client_update_ramrod_data *)VAR_5->rdata;
 ecore_dma_addr_t VAR_7 = VAR_5->rdata_mapping;
 struct ecore_queue_update_params *VAR_8 =
  &VAR_4->params.update;
 uint8_t VAR_9 = VAR_8->cid_index;

 if (VAR_9 >= VAR_5->max_cos) {
  FUNC_0("queue[%d]: cid_index (%d) is out of range\n",
     VAR_5->cl_id, VAR_9);
  return VAR_0;
 }


 FUNC_1(VAR_6, 0, sizeof(*VAR_6));


 FUNC_2(VAR_3, VAR_5, VAR_8, VAR_6);







 return FUNC_3(VAR_3, VAR_2,
        VAR_5->cids[VAR_9], VAR_7,
        VAR_1);
}

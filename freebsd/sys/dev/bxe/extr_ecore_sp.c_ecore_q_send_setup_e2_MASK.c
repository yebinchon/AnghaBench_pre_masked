
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_queue_state_params {struct ecore_queue_sp_obj* q_obj; } ;
struct ecore_queue_sp_obj {int * cids; int rdata_mapping; scalar_t__ rdata; } ;
struct client_init_ramrod_data {int dummy; } ;
struct bxe_softc {int dummy; } ;
typedef int ecore_dma_addr_t ;


 int FUNC_0 (struct client_init_ramrod_data*,int ,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bxe_softc*,struct ecore_queue_state_params*,struct client_init_ramrod_data*) ;
 int FUNC_2 (struct bxe_softc*,struct ecore_queue_state_params*,struct client_init_ramrod_data*) ;
 int FUNC_3 (struct bxe_softc*,int,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_4(struct bxe_softc *VAR_3,
     struct ecore_queue_state_params *VAR_4)
{
 struct ecore_queue_sp_obj *VAR_5 = VAR_4->q_obj;
 struct client_init_ramrod_data *VAR_6 =
  (struct client_init_ramrod_data *)VAR_5->rdata;
 ecore_dma_addr_t VAR_7 = VAR_5->rdata_mapping;
 int VAR_8 = VAR_2;


 FUNC_0(VAR_6, 0, sizeof(*VAR_6));


 FUNC_1(VAR_3, VAR_4, VAR_6);
 FUNC_2(VAR_3, VAR_4, VAR_6);







 return FUNC_3(VAR_3,
        VAR_8,
        VAR_5->cids[VAR_0],
        VAR_7,
        VAR_1);
}

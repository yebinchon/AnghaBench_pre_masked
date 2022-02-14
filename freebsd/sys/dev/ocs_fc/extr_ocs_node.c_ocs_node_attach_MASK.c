
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int hw; scalar_t__ enable_hlm; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_13__ {TYPE_4__* domain; } ;
typedef TYPE_2__ ocs_sport_t ;
struct TYPE_14__ {int sparm_dma_buf; int rnode; scalar_t__ service_params; int wwnn; int wwpn; TYPE_1__* ocs; TYPE_2__* sport; } ;
typedef TYPE_3__ ocs_node_t ;
struct TYPE_15__ {int attached; } ;
typedef TYPE_4__ ocs_domain_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;

int32_t
FUNC_10(ocs_node_t *VAR_0)
{
 int32_t VAR_1 = 0;
 ocs_sport_t *VAR_2 = VAR_0->sport;
 ocs_domain_t *VAR_3 = VAR_2->domain;
 ocs_t *VAR_4 = VAR_0->ocs;

 if (!VAR_3->attached) {
  FUNC_3(VAR_4, "Warning: ocs_node_attach with unattached domain\n");
  return -1;
 }


 FUNC_4(VAR_0->wwpn, sizeof(VAR_0->wwpn), FUNC_6(VAR_0));
 FUNC_4(VAR_0->wwnn, sizeof(VAR_0->wwnn), FUNC_5(VAR_0));

 if (VAR_4->enable_hlm) {
  FUNC_7(VAR_0);
 }

 FUNC_1(&VAR_0->sparm_dma_buf, VAR_0->service_params+4, sizeof(VAR_0->service_params)-4);


 FUNC_8(VAR_0);
  VAR_1 = FUNC_2(&VAR_4->hw, &VAR_0->rnode, &VAR_0->sparm_dma_buf);
  if (FUNC_0(VAR_1)) {
   FUNC_3(VAR_4, "ocs_hw_node_attach failed: %d\n", VAR_1);
  }
 FUNC_9(VAR_0);

 return VAR_1;
}

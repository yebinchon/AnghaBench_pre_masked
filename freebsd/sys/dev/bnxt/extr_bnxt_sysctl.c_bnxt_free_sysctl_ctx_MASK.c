
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnxt_softc {int * flow_ctrl_oid; int flow_ctrl_ctx; int * hw_lro_oid; int hw_lro_ctx; TYPE_2__* nvm_info; TYPE_1__* ver_info; int * hw_stats_oid; int hw_stats; } ;
struct TYPE_4__ {int * nvm_oid; int nvm_ctx; } ;
struct TYPE_3__ {int * ver_oid; int ver_ctx; } ;


 scalar_t__ FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct bnxt_softc *VAR_0)
{
 int VAR_1;
 int VAR_2 = 0;

 if (VAR_0->hw_stats_oid != ((void*)0)) {
  VAR_1 = FUNC_1(&VAR_0->hw_stats);
  if (VAR_1)
   VAR_2 = VAR_1;
  else
   VAR_0->hw_stats_oid = ((void*)0);
 }
 if (VAR_0->ver_info->ver_oid != ((void*)0)) {
  VAR_1 = FUNC_1(&VAR_0->ver_info->ver_ctx);
  if (VAR_1)
   VAR_2 = VAR_1;
  else
   VAR_0->ver_info->ver_oid = ((void*)0);
 }
 if (FUNC_0(VAR_0) && VAR_0->nvm_info->nvm_oid != ((void*)0)) {
  VAR_1 = FUNC_1(&VAR_0->nvm_info->nvm_ctx);
  if (VAR_1)
   VAR_2 = VAR_1;
  else
   VAR_0->nvm_info->nvm_oid = ((void*)0);
 }
 if (VAR_0->hw_lro_oid != ((void*)0)) {
  VAR_1 = FUNC_1(&VAR_0->hw_lro_ctx);
  if (VAR_1)
   VAR_2 = VAR_1;
  else
   VAR_0->hw_lro_oid = ((void*)0);
 }

 if (VAR_0->flow_ctrl_oid != ((void*)0)) {
  VAR_1 = FUNC_1(&VAR_0->flow_ctrl_ctx);
  if (VAR_1)
   VAR_2 = VAR_1;
  else
   VAR_0->flow_ctrl_oid = ((void*)0);
 }

 return VAR_2;
}

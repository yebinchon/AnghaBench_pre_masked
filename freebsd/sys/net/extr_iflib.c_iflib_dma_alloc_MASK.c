
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int iflib_dma_info_t ;
typedef TYPE_1__* if_shared_ctx_t ;
typedef TYPE_2__* if_ctx_t ;
struct TYPE_6__ {TYPE_1__* ifc_sctx; } ;
struct TYPE_5__ {scalar_t__ isc_q_align; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_2__*,int,scalar_t__,int ,int) ;

int
FUNC_2(if_ctx_t VAR_0, int VAR_1, iflib_dma_info_t VAR_2, int VAR_3)
{
 if_shared_ctx_t VAR_4 = VAR_0->ifc_sctx;

 FUNC_0(VAR_4->isc_q_align != 0, ("alignment value not initialized"));

 return (FUNC_1(VAR_0, VAR_1, VAR_4->isc_q_align, VAR_2, VAR_3));
}

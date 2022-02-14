
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* iflib_txq_t ;
typedef TYPE_2__* iflib_dma_info_t ;
typedef TYPE_3__* if_softc_ctx_t ;
typedef TYPE_4__* if_shared_ctx_t ;
typedef TYPE_5__* if_ctx_t ;
struct TYPE_10__ {int * isc_ntxd; } ;
struct TYPE_12__ {TYPE_4__* ifc_sctx; TYPE_3__ ifc_softc_ctx; } ;
struct TYPE_11__ {int isc_ntxqs; } ;
struct TYPE_9__ {int idi_map; int idi_tag; int idi_size; scalar_t__ idi_vaddr; } ;
struct TYPE_8__ {size_t ift_br_offset; TYPE_2__* ift_ifdi; int ift_id; int ift_size; scalar_t__ ift_npending; scalar_t__ ift_cidx; scalar_t__ ift_pidx; scalar_t__ ift_cidx_processed; int ift_update_freq; int ift_qstatus; TYPE_5__* ift_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (void*,int ) ;

__attribute__((used)) static int
FUNC_3(iflib_txq_t VAR_4)
{
 if_ctx_t VAR_5 = VAR_4->ift_ctx;
 if_softc_ctx_t VAR_6 = &VAR_5->ifc_softc_ctx;
 if_shared_ctx_t VAR_7 = VAR_5->ifc_sctx;
 iflib_dma_info_t VAR_8;
 int VAR_9;


 VAR_4->ift_qstatus = VAR_3;

 VAR_4->ift_update_freq = VAR_2;


 VAR_4->ift_cidx_processed = 0;
 VAR_4->ift_pidx = VAR_4->ift_cidx = VAR_4->ift_npending = 0;
 VAR_4->ift_size = VAR_6->isc_ntxd[VAR_4->ift_br_offset];

 for (VAR_9 = 0, VAR_8 = VAR_4->ift_ifdi; VAR_9 < VAR_7->isc_ntxqs; VAR_9++, VAR_8++)
  FUNC_2((void *)VAR_8->idi_vaddr, VAR_8->idi_size);

 FUNC_0(VAR_5, VAR_4->ift_id);
 for (VAR_9 = 0, VAR_8 = VAR_4->ift_ifdi; VAR_9 < VAR_7->isc_ntxqs; VAR_9++, VAR_8++)
  FUNC_1(VAR_8->idi_tag, VAR_8->idi_map,
      VAR_0 | VAR_1);
 return (0);
}

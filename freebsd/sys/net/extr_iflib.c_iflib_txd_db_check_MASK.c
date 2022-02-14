
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ qidx_t ;
typedef TYPE_2__* iflib_txq_t ;
typedef TYPE_3__* if_ctx_t ;
struct TYPE_9__ {int ifc_softc; int (* isc_txd_flush ) (int ,int ,scalar_t__) ;} ;
struct TYPE_8__ {scalar_t__ ift_db_pending; scalar_t__ ift_npending; scalar_t__ ift_pidx; int ift_id; TYPE_1__* ift_ifdi; } ;
struct TYPE_7__ {int idi_map; int idi_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline bool
FUNC_3(if_ctx_t VAR_2, iflib_txq_t VAR_3, int VAR_4, qidx_t VAR_5)
{
 qidx_t VAR_6, VAR_7;
 bool VAR_8;

 VAR_8 = 0;
 VAR_7 = FUNC_0(VAR_3, VAR_5);
 if (VAR_4 || VAR_3->ift_db_pending >= VAR_7) {
  VAR_6 = VAR_3->ift_npending ? VAR_3->ift_npending : VAR_3->ift_pidx;
  FUNC_1(VAR_3->ift_ifdi->idi_tag, VAR_3->ift_ifdi->idi_map,
      VAR_0 | VAR_1);
  VAR_2->isc_txd_flush(VAR_2->ifc_softc, VAR_3->ift_id, VAR_6);
  VAR_3->ift_db_pending = VAR_3->ift_npending = 0;
  VAR_8 = 1;
 }
 return (VAR_8);
}

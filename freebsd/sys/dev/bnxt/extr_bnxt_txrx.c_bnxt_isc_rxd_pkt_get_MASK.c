
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct rx_tpa_start_cmpl_hi {int dummy; } ;
struct rx_tpa_start_cmpl {size_t agg_id; } ;
struct cmpl_base {int type; } ;
struct bnxt_softc {int dev; TYPE_2__* rx_rings; struct bnxt_cp_ring* rx_cp_rings; } ;
struct TYPE_12__ {scalar_t__ vaddr; } ;
struct bnxt_cp_ring {size_t cons; TYPE_7__ ring; int v_bit; } ;
typedef TYPE_3__* if_rxd_info_t ;
struct TYPE_11__ {size_t iri_qsidx; void* iri_cidx; } ;
struct TYPE_10__ {TYPE_1__* tpa_start; } ;
struct TYPE_9__ {struct rx_tpa_start_cmpl_hi high; struct rx_tpa_start_cmpl low; } ;


 int VAR_0 ;



 int FUNC_0 (struct bnxt_cp_ring*,size_t) ;
 int FUNC_1 (TYPE_7__*,size_t,int ) ;
 void* FUNC_2 (TYPE_7__*,void*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (struct bnxt_softc*,TYPE_3__*,struct bnxt_cp_ring*,int) ;
 int FUNC_4 (struct bnxt_softc*,TYPE_3__*,struct bnxt_cp_ring*,int) ;
 int FUNC_5 (int ,char*,int,size_t) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(void *VAR_3, if_rxd_info_t VAR_4)
{
 struct bnxt_softc *VAR_5 = (struct bnxt_softc *)VAR_3;
 struct bnxt_cp_ring *VAR_6 = &VAR_5->rx_cp_rings[VAR_4->iri_qsidx];
 struct cmpl_base *VAR_7 = (struct cmpl_base *)VAR_6->ring.vaddr;
 struct cmpl_base *VAR_8;
 struct rx_tpa_start_cmpl *VAR_9;
 uint16_t VAR_10;
 uint16_t VAR_11;
 uint8_t VAR_12;

 for (;;) {
  FUNC_1(&VAR_6->ring, VAR_6->cons, VAR_6->v_bit);
  VAR_4->iri_cidx = FUNC_2(&VAR_6->ring, VAR_4->iri_cidx);
  FUNC_0(VAR_6, VAR_6->cons);
  VAR_8 = &((struct cmpl_base *)VAR_6->ring.vaddr)[VAR_6->cons];

  VAR_10 = FUNC_6(VAR_8->type);
  VAR_11 = VAR_10 & VAR_0;

  switch (VAR_11) {
  case 130:
   return FUNC_3(VAR_5, VAR_4, VAR_6, VAR_10);
  case 129:
   return FUNC_4(VAR_5, VAR_4, VAR_6, VAR_10);
  case 128:
   VAR_9 = (void *)&VAR_7[VAR_6->cons];
   VAR_12 = (VAR_9->agg_id &
       VAR_1) >>
       VAR_2;
   VAR_5->rx_rings[VAR_4->iri_qsidx].tpa_start[VAR_12].low = *VAR_9;

   FUNC_1(&VAR_6->ring, VAR_6->cons, VAR_6->v_bit);
   VAR_4->iri_cidx = FUNC_2(&VAR_6->ring, VAR_4->iri_cidx);
   FUNC_0(VAR_6, VAR_6->cons);

   VAR_5->rx_rings[VAR_4->iri_qsidx].tpa_start[VAR_12].high =
       ((struct rx_tpa_start_cmpl_hi *)VAR_7)[VAR_6->cons];
   break;
  default:
   FUNC_5(VAR_5->dev,
       "Unhandled completion type %d on RXQ %d get\n",
       VAR_11, VAR_4->iri_qsidx);
   if (VAR_11 & 1) {
    FUNC_1(&VAR_6->ring, VAR_6->cons,
        VAR_6->v_bit);
    VAR_4->iri_cidx = FUNC_2(&VAR_6->ring,
        VAR_4->iri_cidx);
    FUNC_0(VAR_6, VAR_6->cons);
   }
   break;
  }
 }

 return 0;
}

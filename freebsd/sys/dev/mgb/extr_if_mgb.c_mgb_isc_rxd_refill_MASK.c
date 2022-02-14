
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct mgb_ring_data {struct mgb_ring_desc* ring; } ;
struct mgb_softc {struct mgb_ring_data rx_ring_data; int ctx; } ;
struct TYPE_4__ {void* high; void* low; } ;
struct mgb_ring_desc {void* ctl; TYPE_1__ addr; scalar_t__ sts; } ;
typedef size_t qidx_t ;
typedef int if_softc_ctx_t ;
typedef TYPE_2__* if_rxd_update_t ;
struct TYPE_5__ {int iru_count; int iru_buf_size; size_t* iru_idxs; scalar_t__ iru_qsidx; int * iru_paddrs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2, if_rxd_update_t VAR_3)
{
 if_softc_ctx_t VAR_4;
 struct mgb_softc *VAR_5;
 struct mgb_ring_data *VAR_6;
 struct mgb_ring_desc *VAR_7;
 uint64_t *VAR_8;
 qidx_t *VAR_9;
 qidx_t VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = VAR_3->iru_count;
 VAR_12 = VAR_3->iru_buf_size;
 VAR_9 = VAR_3->iru_idxs;
 VAR_8 = VAR_3->iru_paddrs;
 FUNC_2(VAR_3->iru_qsidx == 0,
     ("tried to refill RX Channel %d.\n", VAR_3->iru_qsidx));

 VAR_5 = VAR_2;
 VAR_4 = FUNC_4(VAR_5->ctx);
 VAR_6 = &VAR_5->rx_ring_data;

 while (VAR_11 > 0) {
  VAR_10 = VAR_9[--VAR_11];
  VAR_7 = &VAR_6->ring[VAR_10];

  VAR_7->sts = 0;
  VAR_7->addr.low =
      FUNC_3(FUNC_1(VAR_8[VAR_11]));
  VAR_7->addr.high =
      FUNC_3(FUNC_0(VAR_8[VAR_11]));
  VAR_7->ctl = FUNC_3(VAR_1 |
      (VAR_12 & VAR_0));
 }
 return;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mgb_ring_data {size_t* head_wb; size_t last_head; struct mgb_ring_desc* ring; } ;
struct mgb_softc {int dev; struct mgb_ring_data rx_ring_data; } ;
struct TYPE_5__ {void* high; void* low; } ;
struct mgb_ring_desc {int ctl; void* sts; TYPE_1__ addr; } ;
typedef TYPE_3__* if_rxd_info_t ;
struct TYPE_7__ {scalar_t__ iri_qsidx; int iri_nfrags; int iri_len; TYPE_2__* iri_frags; } ;
struct TYPE_6__ {size_t irf_idx; int irf_len; scalar_t__ irf_flid; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct mgb_ring_desc*) ;
 size_t FUNC_2 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;
 void* FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(void *VAR_4, if_rxd_info_t VAR_5)
{
 struct mgb_softc *VAR_6;
 struct mgb_ring_data *VAR_7;
 struct mgb_ring_desc VAR_8;
 int VAR_9;

 FUNC_0(VAR_5->iri_qsidx == 0,
     ("tried to check availability in RX Channel %d\n", VAR_5->iri_qsidx));
 VAR_6 = VAR_4;
 VAR_9 = 0;
 VAR_7 = &VAR_6->rx_ring_data;

 while (*(VAR_7->head_wb) != VAR_7->last_head) {

  VAR_8 = VAR_7->ring[VAR_7->last_head];
  VAR_8.ctl = FUNC_4(VAR_8.ctl);
  VAR_8.addr.low = FUNC_4(VAR_8.ctl);
  VAR_8.addr.high = FUNC_4(VAR_8.ctl);
  VAR_8.sts = FUNC_4(VAR_8.ctl);

  if ((VAR_8.ctl & VAR_1) != 0) {
   FUNC_3(VAR_6->dev,
       "Tried to read descriptor ... "
       "found that it's owned by the driver\n");
   return VAR_0;
  }
  if ((VAR_8.ctl & VAR_2) == 0) {
   FUNC_3(VAR_6->dev,
       "Tried to read descriptor ... "
       "found that FS is not set.\n");
   FUNC_3(VAR_6->dev, "Tried to read descriptor ... that it FS is not set.\n");
   return VAR_0;
  }

  if ((VAR_8.ctl & VAR_3) == 0) {
   FUNC_3(VAR_6->dev,
       "Tried to read descriptor ... "
       "found that LS is not set. (Multi-buffer packets not yet supported)\n");
   return VAR_0;
  }
  VAR_5->iri_frags[0].irf_flid = 0;
  VAR_5->iri_frags[0].irf_idx = VAR_7->last_head;
  VAR_5->iri_frags[0].irf_len = FUNC_1(&VAR_8);
  VAR_9 += VAR_5->iri_frags[0].irf_len;

  VAR_7->last_head = FUNC_2(VAR_7->last_head);
  break;
 }
 VAR_5->iri_nfrags = 1;
 VAR_5->iri_len = VAR_9;

 return (0);
}

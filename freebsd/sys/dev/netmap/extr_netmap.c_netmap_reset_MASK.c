
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct netmap_slot {int dummy; } ;
struct netmap_kring {scalar_t__ nr_pending_mode; int nr_hwcur; int nr_hwtail; int nkr_num_slots; int nkr_hwofs; TYPE_1__* ring; int (* nm_notify ) (struct netmap_kring*,int ) ;scalar_t__ nr_mode; } ;
struct netmap_adapter {size_t num_tx_rings; size_t num_rx_rings; int name; struct netmap_kring** rx_rings; struct netmap_kring** tx_rings; } ;
typedef enum txrx { ____Placeholder_txrx } txrx ;
struct TYPE_2__ {struct netmap_slot* slot; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct netmap_adapter*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,char*,size_t,int,int,int,int) ;
 int FUNC_3 (struct netmap_kring*,int ) ;

struct netmap_slot *
FUNC_4(struct netmap_adapter *VAR_5, enum txrx VAR_6, u_int VAR_7,
 u_int VAR_8)
{
 struct netmap_kring *VAR_9;
 int VAR_10, VAR_11;

 if (!FUNC_0(VAR_5)) {
  FUNC_1("interface not in native netmap mode");
  return ((void*)0);
 }
 if (VAR_6 == VAR_3) {
  if (VAR_7 >= VAR_5->num_tx_rings)
   return ((void*)0);

  VAR_9 = VAR_5->tx_rings[VAR_7];

  if (VAR_9->nr_pending_mode == VAR_0) {
   VAR_9->nr_mode = VAR_0;
   return ((void*)0);
  }


  VAR_10 = VAR_9->nr_hwcur - VAR_8;
 } else {
  if (VAR_7 >= VAR_5->num_rx_rings)
   return ((void*)0);
  VAR_9 = VAR_5->rx_rings[VAR_7];

  if (VAR_9->nr_pending_mode == VAR_0) {
   VAR_9->nr_mode = VAR_0;
   return ((void*)0);
  }

  VAR_10 = VAR_9->nr_hwtail - VAR_8;
 }
 VAR_11 = VAR_9->nkr_num_slots - 1;
 if (VAR_10 > VAR_11)
  VAR_10 -= VAR_11 + 1;


 if (VAR_4 & VAR_2)
     FUNC_2("%s %s%d hwofs %d -> %d, hwtail %d -> %d",
  VAR_5->name,
  VAR_6 == VAR_3 ? "TX" : "RX", VAR_7,
  VAR_9->nkr_hwofs, VAR_10,
  VAR_9->nr_hwtail,
  VAR_6 == VAR_3 ? VAR_11 : VAR_9->nr_hwtail);
 VAR_9->nkr_hwofs = VAR_10;
 if (VAR_6 == VAR_3) {
  VAR_9->nr_hwtail = VAR_9->nr_hwcur + VAR_11;
  if (VAR_9->nr_hwtail > VAR_11)
   VAR_9->nr_hwtail -= VAR_11 + 1;
 }






 VAR_9->nr_mode = VAR_1;
 VAR_9->nm_notify(VAR_9, 0);
 return VAR_9->ring->slot;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct et_softc* if_softc; } ;
struct et_txdesc_ring {int tr_ready_index; scalar_t__ tr_ready_wrap; int tr_dmap; int tr_dtag; } ;
struct et_txbuf_data {int tbd_used; } ;
struct et_softc {int sc_flags; int watchdog_timer; struct et_txdesc_ring sc_tx_ring; struct et_txbuf_data sc_tx_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct et_softc*,int ,int) ;
 int FUNC_1 (struct ifnet*,struct mbuf*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct et_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *,struct mbuf*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct mbuf*) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct et_softc*,struct mbuf**) ;
 int FUNC_8 (struct et_softc*) ;
 int FUNC_9 (struct ifnet*,int ,int) ;

__attribute__((used)) static void
FUNC_10(struct ifnet *VAR_11)
{
 struct et_softc *VAR_12;
 struct mbuf *VAR_13 = ((void*)0);
 struct et_txdesc_ring *VAR_14;
 struct et_txbuf_data *VAR_15;
 uint32_t VAR_16;
 int VAR_17;

 VAR_12 = VAR_11->if_softc;
 FUNC_2(VAR_12);

 if ((VAR_11->if_drv_flags & (VAR_10 | VAR_9)) !=
     VAR_10 ||
     (VAR_12->sc_flags & (VAR_1 | VAR_2)) !=
     (VAR_1 | VAR_2))
  return;
 VAR_15 = &VAR_12->sc_tx_data;
 if (VAR_15->tbd_used > (VAR_4 * 2) / 3)
  FUNC_8(VAR_12);

 for (VAR_17 = 0; !FUNC_4(&VAR_11->if_snd); ) {
  if (VAR_15->tbd_used + VAR_3 >= VAR_4) {
   VAR_11->if_drv_flags |= VAR_9;
   break;
  }

  FUNC_3(&VAR_11->if_snd, VAR_13);
  if (VAR_13 == ((void*)0))
   break;

  if (FUNC_7(VAR_12, &VAR_13)) {
   if (VAR_13 == ((void*)0)) {
    FUNC_9(VAR_11, VAR_8, 1);
    break;
   }
   FUNC_5(&VAR_11->if_snd, VAR_13);
   if (VAR_15->tbd_used > 0)
    VAR_11->if_drv_flags |= VAR_9;
   break;
  }
  VAR_17++;
  FUNC_1(VAR_11, VAR_13);
 }

 if (VAR_17 > 0) {
  VAR_14 = &VAR_12->sc_tx_ring;
  FUNC_6(VAR_14->tr_dtag, VAR_14->tr_dmap,
      VAR_0);
  VAR_16 = VAR_14->tr_ready_index &
      VAR_6;
  if (VAR_14->tr_ready_wrap)
   VAR_16 |= VAR_7;
  FUNC_0(VAR_12, VAR_5, VAR_16);
  VAR_12->watchdog_timer = 5;
 }
}

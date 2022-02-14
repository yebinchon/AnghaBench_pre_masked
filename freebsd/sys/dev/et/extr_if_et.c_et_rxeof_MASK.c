
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int len; struct ifnet* rcvif; } ;
struct mbuf {int m_len; TYPE_3__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct et_rxstat_ring {int rsr_index; int rsr_wrap; int rsr_dmap; int rsr_dtag; struct et_rxstat* rsr_stat; } ;
struct et_rxstatus_data {int rxsd_dmap; int rxsd_dtag; TYPE_1__* rxsd_status; } ;
struct et_softc {int sc_flags; struct et_rxdesc_ring* sc_rx_ring; struct et_rxbuf_data* sc_rx_data; struct et_rxstat_ring sc_rxstat_ring; struct et_rxstatus_data sc_rx_status; struct ifnet* ifp; } ;
struct et_rxstat {int rxst_info2; int rxst_info1; } ;
struct et_rxdesc_ring {int rr_index; int rr_wrap; int rr_posreg; } ;
struct et_rxbuf_data {scalar_t__ (* rbd_newbuf ) (struct et_rxbuf_data*,int) ;int (* rbd_discard ) (struct et_rxbuf_data*,int) ;TYPE_2__* rbd_buf; } ;
struct TYPE_5__ {struct mbuf* rb_mbuf; } ;
struct TYPE_4__ {int rxs_stat_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct et_softc*,int ,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct et_softc*) ;
 int FUNC_2 (struct et_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (struct et_softc*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct ifnet*,int ,int) ;
 int FUNC_7 (struct ifnet*,char*,int,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct mbuf*) ;
 int FUNC_10 (struct et_rxbuf_data*,int) ;
 scalar_t__ FUNC_11 (struct et_rxbuf_data*,int) ;
 int FUNC_12 (struct et_rxbuf_data*,int) ;
 int FUNC_13 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_14(struct et_softc *VAR_26)
{
 struct et_rxstatus_data *VAR_27;
 struct et_rxstat_ring *VAR_28;
 struct et_rxbuf_data *VAR_29;
 struct et_rxdesc_ring *VAR_30;
 struct et_rxstat *VAR_31;
 struct ifnet *VAR_32;
 struct mbuf *VAR_33;
 uint32_t VAR_34, VAR_35;
 uint32_t VAR_36, VAR_37, VAR_38;
 int VAR_39, VAR_40, VAR_41[2], VAR_42;
 int VAR_43, VAR_44;

 FUNC_2(VAR_26);

 VAR_32 = VAR_26->ifp;
 VAR_27 = &VAR_26->sc_rx_status;
 VAR_28 = &VAR_26->sc_rxstat_ring;

 if ((VAR_26->sc_flags & VAR_4) == 0)
  return;

 FUNC_5(VAR_27->rxsd_dtag, VAR_27->rxsd_dmap,
     VAR_0);
 FUNC_5(VAR_28->rsr_dtag, VAR_28->rsr_dmap,
     VAR_0);

 VAR_41[0] = VAR_41[1] = 0;
 VAR_38 = FUNC_8(VAR_27->rxsd_status->rxs_stat_ring);
 VAR_44 = (VAR_38 & VAR_17) ? 1 : 0;
 VAR_43 = (VAR_38 & VAR_15) >>
     VAR_16;

 while (VAR_43 != VAR_28->rsr_index ||
     VAR_44 != VAR_28->rsr_wrap) {
  if ((VAR_32->if_drv_flags & VAR_25) == 0)
   break;

  FUNC_4(VAR_28->rsr_index < VAR_20);
  VAR_31 = &VAR_28->rsr_stat[VAR_28->rsr_index];
  VAR_36 = FUNC_8(VAR_31->rxst_info1);
  VAR_37 = FUNC_8(VAR_31->rxst_info2);
  VAR_39 = (VAR_37 & VAR_11) >>
      VAR_12;
  VAR_40 = (VAR_37 & VAR_9) >>
      VAR_10;
  VAR_42 = (VAR_37 & VAR_13) >>
      VAR_14;

  if (++VAR_28->rsr_index == VAR_20) {
   VAR_28->rsr_index = 0;
   VAR_28->rsr_wrap ^= 1;
  }
  VAR_34 = VAR_28->rsr_index & VAR_6;
  if (VAR_28->rsr_wrap)
   VAR_34 |= VAR_7;
  FUNC_0(VAR_26, VAR_5, VAR_34);

  if (VAR_42 >= VAR_19) {
   FUNC_6(VAR_32, VAR_23, 1);
   FUNC_7(VAR_32, "invalid ring index %d\n", VAR_42);
   continue;
  }
  if (VAR_40 >= VAR_18) {
   FUNC_6(VAR_32, VAR_23, 1);
   FUNC_7(VAR_32, "invalid buf index %d\n", VAR_40);
   continue;
  }

  VAR_29 = &VAR_26->sc_rx_data[VAR_42];
  VAR_33 = VAR_29->rbd_buf[VAR_40].rb_mbuf;
  if ((VAR_36 & VAR_8) == 0){

   VAR_29->rbd_discard(VAR_29, VAR_40);
  } else if (VAR_29->rbd_newbuf(VAR_29, VAR_40) != 0) {

   FUNC_6(VAR_32, VAR_24, 1);
   VAR_29->rbd_discard(VAR_29, VAR_40);
  } else {
   VAR_39 -= VAR_2;
   if (VAR_39 < VAR_3) {
    FUNC_9(VAR_33);
    FUNC_6(VAR_32, VAR_23, 1);
   } else {
    VAR_33->m_pkthdr.len = VAR_33->m_len = VAR_39;
    VAR_33->m_pkthdr.rcvif = VAR_32;
    FUNC_3(VAR_26);
    VAR_32->if_input(VAR_32, VAR_33);
    FUNC_1(VAR_26);
   }
  }

  VAR_30 = &VAR_26->sc_rx_ring[VAR_42];
  if (VAR_40 != VAR_30->rr_index) {
   FUNC_7(VAR_32,
       "WARNING!! ring %d, buf_idx %d, rr_idx %d\n",
       VAR_42, VAR_40, VAR_30->rr_index);
  }

  FUNC_4(VAR_30->rr_index < VAR_18);
  if (++VAR_30->rr_index == VAR_18) {
   VAR_30->rr_index = 0;
   VAR_30->rr_wrap ^= 1;
  }
  VAR_35 = VAR_30->rr_index & VAR_21;
  if (VAR_30->rr_wrap)
   VAR_35 |= VAR_22;
  FUNC_0(VAR_26, VAR_30->rr_posreg, VAR_35);
 }

 FUNC_5(VAR_27->rxsd_dtag, VAR_27->rxsd_dmap,
     VAR_1);
 FUNC_5(VAR_28->rsr_dtag, VAR_28->rsr_dmap,
     VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
struct tsec_softc {int tsec_rx_dmap; int tsec_rx_dtag; scalar_t__ is_etsec; int tsec_rx_mtag; struct mbuf* frame; struct rx_data_type* rx_data; struct ifnet* tsec_ifp; } ;
struct tsec_desc {int flags; scalar_t__ length; int bufptr; } ;
struct rx_data_type {int paddr; struct mbuf* mbuf; int map; } ;
struct TYPE_2__ {struct ifnet* rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; int m_flags; scalar_t__ m_len; } ;
struct ifnet {int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tsec_softc*) ;
 struct tsec_desc* FUNC_1 (struct tsec_softc*) ;
 size_t FUNC_2 (struct tsec_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct tsec_softc*) ;
 int FUNC_4 (struct tsec_softc*) ;
 int FUNC_5 (struct tsec_softc*) ;
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
 int FUNC_6 (struct tsec_softc*,int ,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct ifnet*,int ,int) ;
 int FUNC_9 (struct mbuf*,int ) ;
 int FUNC_10 (struct mbuf*,struct mbuf*) ;
 int FUNC_11 (struct mbuf*) ;
 int FUNC_12 (struct mbuf*) ;
 scalar_t__ FUNC_13 (struct mbuf*,int *) ;
 int FUNC_14 (struct ifnet*,struct mbuf*) ;
 scalar_t__ FUNC_15 (int ,int ,struct mbuf**,int *) ;
 int FUNC_16 (struct tsec_softc*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_17(struct tsec_softc *VAR_23, int VAR_24)
{
 struct tsec_desc *VAR_25;
 struct ifnet *VAR_26;
 struct rx_data_type *VAR_27;
 struct mbuf *VAR_28;
 uint32_t VAR_29;
 int VAR_30, VAR_31;
 uint16_t VAR_32;

 FUNC_4(VAR_23);

 VAR_26 = VAR_23->tsec_ifp;
 VAR_27 = VAR_23->rx_data;
 VAR_31 = 0;

 FUNC_7(VAR_23->tsec_rx_dtag, VAR_23->tsec_rx_dmap,
     VAR_0 | VAR_1);

 for (VAR_30 = 0; ; VAR_30++) {
  if (VAR_24 >= 0 && VAR_24-- == 0)
   break;

  VAR_25 = FUNC_1(VAR_23);
  VAR_32 = VAR_25->flags;


  if ((VAR_32 & VAR_13) || (VAR_30 >= VAR_22)) {



   if (VAR_32 & VAR_13)
    FUNC_6(VAR_23, VAR_9,
        VAR_7 | VAR_8);




   FUNC_0(VAR_23);
   break;
  }

  if (VAR_32 & (VAR_16 | VAR_19 | VAR_17 |
      VAR_12 | VAR_18 | VAR_20)) {

   VAR_25->length = 0;
   VAR_25->flags = (VAR_25->flags &
       ~VAR_21) | VAR_13 | VAR_14;

   if (VAR_23->frame != ((void*)0)) {
    FUNC_12(VAR_23->frame);
    VAR_23->frame = ((void*)0);
   }

   continue;
  }


  VAR_29 = FUNC_2(VAR_23);
  VAR_28 = VAR_27[VAR_29].mbuf;
  VAR_28->m_len = VAR_25->length;

  if (VAR_23->frame != ((void*)0)) {
   if ((VAR_32 & VAR_15) != 0)
    VAR_28->m_len -= FUNC_13(VAR_23->frame, ((void*)0));

   VAR_28->m_flags &= ~VAR_6;
   FUNC_10(VAR_23->frame, VAR_28);
  } else {
   VAR_23->frame = VAR_28;
  }

  VAR_28 = ((void*)0);

  if ((VAR_32 & VAR_15) != 0) {
   VAR_28 = VAR_23->frame;
   VAR_23->frame = ((void*)0);
  }

  if (FUNC_15(VAR_23->tsec_rx_mtag, VAR_27[VAR_29].map,
      &VAR_27[VAR_29].mbuf, &VAR_27[VAR_29].paddr)) {
   FUNC_8(VAR_26, VAR_5, 1);




   FUNC_0(VAR_23);
   break;
  }


  VAR_25->bufptr = VAR_27[VAR_29].paddr;
  VAR_25->length = 0;
  VAR_25->flags = (VAR_25->flags & ~VAR_21) |
      VAR_13 | VAR_14;

  if (VAR_28 != ((void*)0)) {
   VAR_28->m_pkthdr.rcvif = VAR_26;

   FUNC_11(VAR_28);
   FUNC_9(VAR_28, -VAR_4);

   if (VAR_23->is_etsec)
    FUNC_16(VAR_23, VAR_28);

   FUNC_5(VAR_23);
   (*VAR_26->if_input)(VAR_26, VAR_28);
   FUNC_3(VAR_23);
   VAR_31++;
  }
 }

 FUNC_7(VAR_23->tsec_rx_dtag, VAR_23->tsec_rx_dmap,
     VAR_2 | VAR_3);
 FUNC_6(VAR_23, VAR_10, VAR_11);
 return (VAR_31);
}

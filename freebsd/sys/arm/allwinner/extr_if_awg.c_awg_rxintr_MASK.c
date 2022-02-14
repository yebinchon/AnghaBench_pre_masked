
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int len; int csum_flags; int csum_data; int rcvif; } ;
struct mbuf {int m_len; struct mbuf* m_nextpkt; TYPE_3__ m_pkthdr; } ;
struct TYPE_8__ {int cur; int desc_map; int desc_tag; TYPE_2__* buf_map; TYPE_1__* desc_ring; } ;
struct awg_softc {TYPE_4__ rx; int ifp; } ;
typedef int if_t ;
struct TYPE_6__ {struct mbuf* mbuf; } ;
struct TYPE_5__ {int status; } ;


 int FUNC_0 (struct awg_softc*) ;
 int FUNC_1 (struct awg_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int FUNC_2 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct awg_softc*,int) ;
 int FUNC_4 (struct awg_softc*,int) ;
 int VAR_20 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,struct mbuf*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct awg_softc *VAR_21)
{
 if_t VAR_22;
 struct mbuf *VAR_23, *VAR_24, *VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
 uint32_t VAR_31;

 VAR_22 = VAR_21->ifp;
 VAR_24 = VAR_25 = ((void*)0);
 VAR_29 = 0;
 VAR_30 = 0;

 FUNC_5(VAR_21->rx.desc_tag, VAR_21->rx.desc_map,
     VAR_0 | VAR_1);

 for (VAR_27 = VAR_21->rx.cur; ; VAR_27 = FUNC_2(VAR_27)) {
  VAR_31 = FUNC_9(VAR_21->rx.desc_ring[VAR_27].status);
  if ((VAR_31 & VAR_12) != 0)
   break;

  VAR_28 = (VAR_31 & VAR_13) >> VAR_14;

  if (VAR_28 == 0) {
   if ((VAR_31 & (VAR_17 | VAR_18)) != 0)
    FUNC_7(VAR_22, VAR_9, 1);
   FUNC_4(VAR_21, VAR_27);
   continue;
  }

  VAR_23 = VAR_21->rx.buf_map[VAR_27].mbuf;

  VAR_26 = FUNC_3(VAR_21, VAR_27);
  if (VAR_26 != 0) {
   FUNC_7(VAR_22, VAR_11, 1);
   FUNC_4(VAR_21, VAR_27);
   continue;
  }

  VAR_23->m_pkthdr.rcvif = VAR_22;
  VAR_23->m_pkthdr.len = VAR_28;
  VAR_23->m_len = VAR_28;
  FUNC_7(VAR_22, VAR_10, 1);

  if ((FUNC_6(VAR_22) & VAR_8) != 0 &&
      (VAR_31 & VAR_15) != 0) {
   VAR_23->m_pkthdr.csum_flags = VAR_5;
   if ((VAR_31 & VAR_16) == 0)
    VAR_23->m_pkthdr.csum_flags |= VAR_6;
   if ((VAR_31 & VAR_19) == 0) {
    VAR_23->m_pkthdr.csum_flags |=
        VAR_4 | VAR_7;
    VAR_23->m_pkthdr.csum_data = 0xffff;
   }
  }

  VAR_23->m_nextpkt = ((void*)0);
  if (VAR_24 == ((void*)0))
   VAR_24 = VAR_23;
  else
   VAR_25->m_nextpkt = VAR_23;
  VAR_25 = VAR_23;
  ++VAR_29;
  ++VAR_30;

  if (VAR_29 == VAR_20) {
   FUNC_1(VAR_21);
   FUNC_8(VAR_22, VAR_24);
   FUNC_0(VAR_21);
   VAR_24 = VAR_25 = ((void*)0);
   VAR_29 = 0;
  }
 }

 if (VAR_27 != VAR_21->rx.cur) {
  FUNC_5(VAR_21->rx.desc_tag, VAR_21->rx.desc_map,
      VAR_2 | VAR_3);
 }

 if (VAR_24 != ((void*)0)) {
  FUNC_1(VAR_21);
  FUNC_8(VAR_22, VAR_24);
  FUNC_0(VAR_21);
 }

 VAR_21->rx.cur = VAR_27;

 return (VAR_30);
}

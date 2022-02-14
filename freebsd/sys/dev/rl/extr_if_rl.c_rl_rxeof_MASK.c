
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int * rl_rx_buf; int rl_rx_dmamap; int rl_rx_tag; } ;
struct rl_softc {scalar_t__ rxcycles; TYPE_1__ rl_cdata; struct ifnet* rl_ifp; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_capenable; int (* if_input ) (struct ifnet*,struct mbuf*) ;int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rl_softc*,int ) ;
 int FUNC_1 (struct rl_softc*,int ) ;
 int FUNC_2 (struct rl_softc*,int ,int) ;
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
 int FUNC_3 (struct rl_softc*) ;
 int FUNC_4 (struct rl_softc*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (struct rl_softc*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct ifnet*,int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct mbuf*,int,int,int *) ;
 struct mbuf* FUNC_10 (int *,int,int ,struct ifnet*,int *) ;
 int FUNC_11 (struct rl_softc*) ;
 int FUNC_12 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_13(struct rl_softc *VAR_19)
{
 struct mbuf *VAR_20;
 struct ifnet *VAR_21 = VAR_19->rl_ifp;
 uint8_t *VAR_22;
 int VAR_23 = 0;
 int VAR_24 = 0;
 int VAR_25 = 0;
 uint32_t VAR_26;
 uint16_t VAR_27;
 uint16_t VAR_28;
 uint16_t VAR_29, VAR_30 = 0;

 FUNC_4(VAR_19);

 FUNC_6(VAR_19->rl_cdata.rl_rx_tag, VAR_19->rl_cdata.rl_rx_dmamap,
     VAR_0 | VAR_1);

 VAR_27 = (FUNC_1(VAR_19, VAR_13) + 16) % VAR_16;


 VAR_28 = FUNC_1(VAR_19, VAR_14) % VAR_16;

 if (VAR_28 < VAR_27)
  VAR_29 = (VAR_16 - VAR_27) + VAR_28;
 else
  VAR_29 = VAR_28 - VAR_27;

 while((FUNC_0(VAR_19, VAR_12) & VAR_11) == 0) {







  VAR_22 = VAR_19->rl_cdata.rl_rx_buf + VAR_27;
  VAR_26 = FUNC_8(*(uint32_t *)VAR_22);
  VAR_23 = VAR_26 >> 16;
  if (VAR_23 == VAR_18)
   break;

  if (!(VAR_26 & VAR_17) ||
      VAR_23 < VAR_4 ||
      VAR_23 > VAR_3 + VAR_5) {
   FUNC_7(VAR_21, VAR_7, 1);
   VAR_21->if_drv_flags &= ~VAR_10;
   FUNC_11(VAR_19);
   return (VAR_25);
  }


  VAR_30 += VAR_23 + 4;
  VAR_23 -= VAR_2;





  if (VAR_30 > VAR_29)
   break;

  VAR_22 = VAR_19->rl_cdata.rl_rx_buf +
   ((VAR_27 + sizeof(uint32_t)) % VAR_16);
  if (VAR_22 == (VAR_19->rl_cdata.rl_rx_buf + VAR_16))
   VAR_22 = VAR_19->rl_cdata.rl_rx_buf;

  VAR_24 = (VAR_19->rl_cdata.rl_rx_buf + VAR_16) - VAR_22;
  if (VAR_23 > VAR_24) {
   VAR_20 = FUNC_10(VAR_22, VAR_23, VAR_15, VAR_21,
       ((void*)0));
   if (VAR_20 != ((void*)0))
    FUNC_9(VAR_20, VAR_24, VAR_23 - VAR_24,
     VAR_19->rl_cdata.rl_rx_buf);
   VAR_27 = (VAR_23 - VAR_24 + VAR_2);
  } else {
   VAR_20 = FUNC_10(VAR_22, VAR_23, VAR_15, VAR_21,
       ((void*)0));
   VAR_27 += VAR_23 + 4 + VAR_2;
  }


  VAR_27 = (VAR_27 + 3) & ~3;
  FUNC_2(VAR_19, VAR_13, VAR_27 - 16);

  if (VAR_20 == ((void*)0)) {
   FUNC_7(VAR_21, VAR_9, 1);
   continue;
  }

  FUNC_7(VAR_21, VAR_8, 1);
  FUNC_5(VAR_19);
  (*VAR_21->if_input)(VAR_21, VAR_20);
  FUNC_3(VAR_19);
  VAR_25++;
 }


 return (VAR_25);
}

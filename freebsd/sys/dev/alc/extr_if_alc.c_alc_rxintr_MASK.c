
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct rx_rdesc {scalar_t__ status; scalar_t__ rdinfo; } ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_4__ {int alc_rr_cons; scalar_t__ alc_rx_cons; int alc_rx_ring_map; int alc_rx_ring_tag; int alc_rr_ring_map; int alc_rr_ring_tag; } ;
struct TYPE_3__ {struct rx_rdesc* alc_rr_ring; } ;
struct alc_softc {int alc_flags; TYPE_2__ alc_cdata; int alc_dev; TYPE_1__ alc_rdata; struct ifnet* alc_ifp; } ;


 int FUNC_0 (int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct alc_softc*,int ,int ) ;
 int FUNC_2 (struct alc_softc*,int ,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (struct alc_softc*,struct rx_rdesc*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct alc_softc *VAR_11, int VAR_12)
{
 struct ifnet *VAR_13;
 struct rx_rdesc *VAR_14;
 uint32_t VAR_15, VAR_16;
 int VAR_17, VAR_18;

 FUNC_5(VAR_11->alc_cdata.alc_rr_ring_tag,
     VAR_11->alc_cdata.alc_rr_ring_map,
     VAR_3 | VAR_4);
 FUNC_5(VAR_11->alc_cdata.alc_rx_ring_tag,
     VAR_11->alc_cdata.alc_rx_ring_map, VAR_4);
 VAR_17 = VAR_11->alc_cdata.alc_rr_cons;
 VAR_13 = VAR_11->alc_ifp;
 for (VAR_18 = 0; (VAR_13->if_drv_flags & VAR_9) != 0;) {
  if (VAR_12-- <= 0)
   break;
  VAR_14 = &VAR_11->alc_rdata.alc_rr_ring[VAR_17];
  VAR_16 = FUNC_7(VAR_14->status);
  if ((VAR_16 & VAR_10) == 0)
   break;
  VAR_15 = FUNC_3(FUNC_7(VAR_14->rdinfo));
  if (VAR_15 == 0) {

   FUNC_6(VAR_11->alc_dev,
       "unexpected segment count -- resetting\n");
   return (VAR_8);
  }
  FUNC_4(VAR_11, VAR_14);

  VAR_14->status = 0;
  FUNC_0(VAR_17, VAR_2);
  VAR_11->alc_cdata.alc_rx_cons += VAR_15;
  VAR_11->alc_cdata.alc_rx_cons %= VAR_2;
  VAR_18 += VAR_15;
 }

 if (VAR_18 > 0) {

  VAR_11->alc_cdata.alc_rr_cons = VAR_17;

  FUNC_5(VAR_11->alc_cdata.alc_rr_ring_tag,
      VAR_11->alc_cdata.alc_rr_ring_map,
      VAR_5 | VAR_6);




  FUNC_5(VAR_11->alc_cdata.alc_rx_ring_tag,
      VAR_11->alc_cdata.alc_rx_ring_map, VAR_6);
  if ((VAR_11->alc_flags & VAR_0) != 0)
   FUNC_1(VAR_11, VAR_1,
       (uint16_t)VAR_11->alc_cdata.alc_rx_cons);
  else
   FUNC_2(VAR_11, VAR_1,
       VAR_11->alc_cdata.alc_rx_cons);
 }

 return (VAR_12 > 0 ? 0 : VAR_7);
}

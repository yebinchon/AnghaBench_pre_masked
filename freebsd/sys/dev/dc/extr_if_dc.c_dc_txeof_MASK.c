
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_4__ {scalar_t__ dc_tx_cnt; int dc_tx_cons; int dc_tx_prod; int ** dc_tx_chain; int * dc_tx_map; } ;
struct TYPE_3__ {struct dc_desc* dc_tx_list; } ;
struct dc_softc {scalar_t__ dc_pmode; int dc_tx_lmap; int dc_tx_ltag; scalar_t__ dc_wdog_timer; TYPE_2__ dc_cdata; int dc_tx_mtag; int dc_smap; int dc_stag; TYPE_1__ dc_ldata; struct ifnet* dc_ifp; } ;
struct dc_desc {int dc_ctl; int dc_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (struct dc_softc*) ;
 scalar_t__ FUNC_2 (struct dc_softc*) ;
 scalar_t__ FUNC_3 (struct dc_softc*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct dc_softc*) ;
 int FUNC_7 (struct dc_softc*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ifnet*,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct dc_softc *VAR_21)
{
 struct dc_desc *VAR_22;
 struct ifnet *VAR_23;
 int VAR_24, VAR_25;
 uint32_t VAR_26, VAR_27;

 if (VAR_21->dc_cdata.dc_tx_cnt == 0)
  return;

 VAR_23 = VAR_21->dc_ifp;





 FUNC_4(VAR_21->dc_tx_ltag, VAR_21->dc_tx_lmap, VAR_0 |
     VAR_1);
 VAR_25 = 0;
 for (VAR_24 = VAR_21->dc_cdata.dc_tx_cons; VAR_24 != VAR_21->dc_cdata.dc_tx_prod;
     FUNC_0(VAR_24, VAR_14), VAR_21->dc_cdata.dc_tx_cnt--) {
  VAR_22 = &VAR_21->dc_ldata.dc_tx_list[VAR_24];
  VAR_27 = FUNC_10(VAR_22->dc_status);
  VAR_26 = FUNC_10(VAR_22->dc_ctl);

  if (VAR_27 & VAR_12)
   break;

  if (VAR_21->dc_cdata.dc_tx_chain[VAR_24] == ((void*)0))
   continue;

  if (VAR_26 & VAR_5) {
   VAR_22->dc_ctl = FUNC_8(VAR_26 & ~VAR_5);
   VAR_25++;
   FUNC_4(VAR_21->dc_stag, VAR_21->dc_smap,
       VAR_1);
   if (FUNC_2(VAR_21)) {
    if (VAR_27 & VAR_8)
     FUNC_7(VAR_21);
   }
   VAR_21->dc_cdata.dc_tx_chain[VAR_24] = ((void*)0);
   continue;
  }

  if (FUNC_3(VAR_21) || FUNC_1(VAR_21)) {
   if (
       VAR_21->dc_pmode == VAR_4 &&
       ((VAR_27 & 0xFFFF) & ~(VAR_8 |
       VAR_11)))
    VAR_27 &= ~VAR_8;
  } else {
   if (
       VAR_21->dc_pmode == VAR_4 &&
       ((VAR_27 & 0xFFFF) & ~(VAR_8 |
       VAR_11 | VAR_6)))
    VAR_27 &= ~VAR_8;
  }

  if (VAR_27 & VAR_8) {
   FUNC_9(VAR_23, VAR_17, 1);
   if (VAR_27 & VAR_9)
    FUNC_9(VAR_23, VAR_16, 1);
   if (VAR_27 & VAR_10)
    FUNC_9(VAR_23, VAR_16, 1);
   if (!(VAR_27 & VAR_13)) {
    VAR_23->if_drv_flags &= ~VAR_20;
    FUNC_6(VAR_21);
    return;
   }
  } else
   FUNC_9(VAR_23, VAR_18, 1);
  FUNC_9(VAR_23, VAR_16, (VAR_27 & VAR_7) >> 3);

  FUNC_4(VAR_21->dc_tx_mtag, VAR_21->dc_cdata.dc_tx_map[VAR_24],
      VAR_1);
  FUNC_5(VAR_21->dc_tx_mtag, VAR_21->dc_cdata.dc_tx_map[VAR_24]);
  FUNC_11(VAR_21->dc_cdata.dc_tx_chain[VAR_24]);
  VAR_21->dc_cdata.dc_tx_chain[VAR_24] = ((void*)0);
 }
 VAR_21->dc_cdata.dc_tx_cons = VAR_24;

 if (VAR_21->dc_cdata.dc_tx_cnt <= VAR_14 - VAR_15) {
  VAR_23->if_drv_flags &= ~VAR_19;
  if (VAR_21->dc_cdata.dc_tx_cnt == 0)
   VAR_21->dc_wdog_timer = 0;
 }
 if (VAR_25 > 0)
  FUNC_4(VAR_21->dc_tx_ltag, VAR_21->dc_tx_lmap,
      VAR_2 | VAR_3);
}

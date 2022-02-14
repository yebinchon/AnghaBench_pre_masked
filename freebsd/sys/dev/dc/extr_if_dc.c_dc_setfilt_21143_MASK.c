
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct mbuf {int dummy; } ;
struct ifnet {int if_flags; int if_broadcastaddr; } ;
struct TYPE_4__ {int dc_tx_prod; int* dc_sbuf; struct mbuf** dc_tx_chain; int dc_tx_cnt; } ;
struct TYPE_3__ {struct dc_desc* dc_tx_list; } ;
struct dc_softc {int dc_wdog_timer; int dc_smap; int dc_stag; int dc_tx_lmap; int dc_tx_ltag; struct ifnet* dc_ifp; TYPE_2__ dc_cdata; int dc_saddr; TYPE_1__ dc_ldata; } ;
struct dc_desc {int dc_data; int dc_ctl; int dc_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dc_softc*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dc_softc*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct dc_softc*,int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int*,int) ;
 int VAR_17 ;
 int FUNC_11 (struct dc_softc*,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct ifnet*,int ,int*) ;

__attribute__((used)) static void
FUNC_14(struct dc_softc *VAR_18)
{
 uint16_t VAR_19[(VAR_13+1)/2];
 struct dc_desc *VAR_20;
 uint32_t VAR_21, *VAR_22;
 struct ifnet *VAR_23;
 int VAR_24;

 VAR_23 = VAR_18->dc_ifp;

 VAR_24 = VAR_18->dc_cdata.dc_tx_prod;
 FUNC_3(VAR_18->dc_cdata.dc_tx_prod, VAR_12);
 VAR_18->dc_cdata.dc_tx_cnt++;
 VAR_20 = &VAR_18->dc_ldata.dc_tx_list[VAR_24];
 VAR_22 = VAR_18->dc_cdata.dc_sbuf;
 FUNC_10(VAR_22, VAR_6);

 VAR_20->dc_data = FUNC_12(FUNC_1(VAR_18->dc_saddr));
 VAR_20->dc_ctl = FUNC_12(VAR_6 | VAR_8 |
     VAR_9 | VAR_2 | VAR_7);

 VAR_18->dc_cdata.dc_tx_chain[VAR_24] = (struct mbuf *)VAR_18->dc_cdata.dc_sbuf;


 if (VAR_23->if_flags & VAR_16)
  FUNC_4(VAR_18, VAR_3, VAR_5);
 else
  FUNC_2(VAR_18, VAR_3, VAR_5);

 if (VAR_23->if_flags & VAR_14)
  FUNC_4(VAR_18, VAR_3, VAR_4);
 else
  FUNC_2(VAR_18, VAR_3, VAR_4);

 FUNC_13(VAR_23, VAR_17, VAR_22);

 if (VAR_23->if_flags & VAR_15) {
  VAR_21 = FUNC_11(VAR_18, VAR_23->if_broadcastaddr);
  VAR_22[VAR_21 >> 4] |= FUNC_12(1 << (VAR_21 & 0xF));
 }


 FUNC_8(FUNC_7(VAR_18->dc_ifp), VAR_19, VAR_13);
 VAR_22[39] = FUNC_5(VAR_19[0]);
 VAR_22[40] = FUNC_5(VAR_19[1]);
 VAR_22[41] = FUNC_5(VAR_19[2]);

 VAR_20->dc_status = FUNC_12(VAR_11);
 FUNC_9(VAR_18->dc_tx_ltag, VAR_18->dc_tx_lmap, VAR_0 |
     VAR_1);
 FUNC_9(VAR_18->dc_stag, VAR_18->dc_smap, VAR_1);
 FUNC_0(VAR_18, VAR_10, 0xFFFFFFFF);







 FUNC_6(10000);

 VAR_18->dc_wdog_timer = 5;
}

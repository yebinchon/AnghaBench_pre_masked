
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
 int FUNC_2 (struct dc_softc*,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct dc_softc*,int ,int) ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int*,int) ;
 int VAR_19 ;
 int FUNC_11 (struct dc_softc*,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct ifnet*,int ,int**) ;

__attribute__((used)) static void
FUNC_14(struct dc_softc *VAR_20)
{
 uint16_t VAR_21[(VAR_15+1)/2];
 struct ifnet *VAR_22;
 struct dc_desc *VAR_23;
 uint32_t VAR_24, *VAR_25;
 int VAR_26;

 VAR_22 = VAR_20->dc_ifp;
 FUNC_2(VAR_20, VAR_3, (VAR_7 | VAR_5));

 VAR_26 = VAR_20->dc_cdata.dc_tx_prod;
 FUNC_3(VAR_20->dc_cdata.dc_tx_prod, VAR_14);
 VAR_20->dc_cdata.dc_tx_cnt++;
 VAR_23 = &VAR_20->dc_ldata.dc_tx_list[VAR_26];
 VAR_25 = VAR_20->dc_cdata.dc_sbuf;
 FUNC_10(VAR_25, VAR_8);

 VAR_23->dc_data = FUNC_12(FUNC_1(VAR_20->dc_saddr));
 VAR_23->dc_ctl = FUNC_12(VAR_8 | VAR_10 |
     VAR_11 | VAR_2 | VAR_9);

 VAR_20->dc_cdata.dc_tx_chain[VAR_26] = (struct mbuf *)VAR_20->dc_cdata.dc_sbuf;


 if (VAR_22->if_flags & VAR_18)
  FUNC_4(VAR_20, VAR_3, VAR_6);
 else
  FUNC_2(VAR_20, VAR_3, VAR_6);

 if (VAR_22->if_flags & VAR_16)
  FUNC_4(VAR_20, VAR_3, VAR_4);
 else
  FUNC_2(VAR_20, VAR_3, VAR_4);

 FUNC_13(VAR_22, VAR_19, &VAR_25);

 if (VAR_22->if_flags & VAR_17) {
  VAR_24 = FUNC_11(VAR_20, VAR_22->if_broadcastaddr);
  VAR_25[VAR_24 >> 4] |= FUNC_12(1 << (VAR_24 & 0xF));
 }


 FUNC_8(FUNC_7(VAR_20->dc_ifp), VAR_21, VAR_15);
 VAR_25[0] = FUNC_5(VAR_21[0]);
 VAR_25[1] = FUNC_5(VAR_21[1]);
 VAR_25[2] = FUNC_5(VAR_21[2]);

 FUNC_4(VAR_20, VAR_3, VAR_7);
 FUNC_4(VAR_20, VAR_3, VAR_5);
 VAR_23->dc_status = FUNC_12(VAR_13);
 FUNC_9(VAR_20->dc_tx_ltag, VAR_20->dc_tx_lmap, VAR_0 |
     VAR_1);
 FUNC_9(VAR_20->dc_stag, VAR_20->dc_smap, VAR_1);
 FUNC_0(VAR_20, VAR_12, 0xFFFFFFFF);




 FUNC_6(1000);

 VAR_20->dc_wdog_timer = 5;
}

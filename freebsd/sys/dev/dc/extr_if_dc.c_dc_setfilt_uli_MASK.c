
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mbuf {int dummy; } ;
struct ifnet {int if_flags; } ;
struct TYPE_4__ {int dc_tx_prod; int* dc_sbuf; struct mbuf** dc_tx_chain; int dc_tx_cnt; } ;
struct TYPE_3__ {struct dc_desc* dc_tx_list; } ;
struct dc_softc {int dc_wdog_timer; int dc_smap; int dc_stag; int dc_tx_lmap; int dc_tx_ltag; struct ifnet* dc_ifp; TYPE_2__ dc_cdata; int dc_saddr; TYPE_1__ dc_ldata; } ;
struct dc_desc {void* dc_status; void* dc_ctl; void* dc_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dc_softc*,int ) ;
 int FUNC_1 (struct dc_softc*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_4 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (int ,int*,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int*,int) ;
 int VAR_19 ;
 void* FUNC_10 (int) ;
 int FUNC_11 (struct ifnet*,int ,int**) ;

__attribute__((used)) static void
FUNC_12(struct dc_softc *VAR_20)
{
 uint8_t VAR_21[VAR_16];
 struct ifnet *VAR_22;
 struct dc_desc *VAR_23;
 uint32_t VAR_24, *VAR_25;
 int VAR_26, VAR_27;

 VAR_22 = VAR_20->dc_ifp;

 VAR_26 = VAR_20->dc_cdata.dc_tx_prod;
 FUNC_3(VAR_20->dc_cdata.dc_tx_prod, VAR_14);
 VAR_20->dc_cdata.dc_tx_cnt++;
 VAR_23 = &VAR_20->dc_ldata.dc_tx_list[VAR_26];
 VAR_25 = VAR_20->dc_cdata.dc_sbuf;
 FUNC_9(VAR_25, VAR_8);

 VAR_23->dc_data = FUNC_10(FUNC_2(VAR_20->dc_saddr));
 VAR_23->dc_ctl = FUNC_10(VAR_8 | VAR_10 |
     VAR_11 | VAR_2 | VAR_9);

 VAR_20->dc_cdata.dc_tx_chain[VAR_26] = (struct mbuf *)VAR_20->dc_cdata.dc_sbuf;


 FUNC_7(FUNC_6(VAR_20->dc_ifp), VAR_21, VAR_16);
 *VAR_25++ = FUNC_4(VAR_21[1] << 8 | VAR_21[0]);
 *VAR_25++ = FUNC_4(VAR_21[3] << 8 | VAR_21[2]);
 *VAR_25++ = FUNC_4(VAR_21[5] << 8 | VAR_21[4]);


 *VAR_25++ = FUNC_4(0xFFFF);
 *VAR_25++ = FUNC_4(0xFFFF);
 *VAR_25++ = FUNC_4(0xFFFF);


 VAR_24 = FUNC_0(VAR_20, VAR_3);
 VAR_24 &= ~(VAR_6 | VAR_4);


 VAR_27 = FUNC_11(VAR_22, VAR_19, &VAR_25);

 if (VAR_27 == VAR_15)
  VAR_24 |= VAR_4;
 else
  for (; VAR_27 < VAR_15; VAR_27++) {
   *VAR_25++ = FUNC_4(0xFFFF);
   *VAR_25++ = FUNC_4(0xFFFF);
   *VAR_25++ = FUNC_4(0xFFFF);
  }

 if (VAR_24 & (VAR_7 | VAR_5))
  FUNC_1(VAR_20, VAR_3,
      VAR_24 & ~(VAR_7 | VAR_5));
 if (VAR_22->if_flags & VAR_18)
  VAR_24 |= VAR_6 | VAR_4;
 if (VAR_22->if_flags & VAR_17)
  VAR_24 |= VAR_4;
 FUNC_1(VAR_20, VAR_3,
     VAR_24 & ~(VAR_7 | VAR_5));
 if (VAR_24 & (VAR_7 | VAR_5))
  FUNC_1(VAR_20, VAR_3, VAR_24);

 VAR_23->dc_status = FUNC_10(VAR_13);
 FUNC_8(VAR_20->dc_tx_ltag, VAR_20->dc_tx_lmap, VAR_0 |
     VAR_1);
 FUNC_8(VAR_20->dc_stag, VAR_20->dc_smap, VAR_1);
 FUNC_1(VAR_20, VAR_12, 0xFFFFFFFF);




 FUNC_5(1000);

 VAR_20->dc_wdog_timer = 5;
}

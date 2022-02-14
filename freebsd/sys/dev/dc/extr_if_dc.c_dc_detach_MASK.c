
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_capenable; } ;
struct dc_softc {int dc_mtx; struct dc_mediainfo* dc_srom; struct dc_mediainfo* dc_mi; struct dc_mediainfo* dc_pnic_rx_buf; scalar_t__ dc_res; scalar_t__ dc_irq; scalar_t__ dc_intrhand; scalar_t__ dc_miibus; int dc_wdog_ch; int dc_stat_ch; struct ifnet* dc_ifp; } ;
struct dc_mediainfo {struct dc_mediainfo* dc_next; } ;
typedef int device_t ;


 int FUNC_0 (struct dc_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dc_softc*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct dc_softc*) ;
 int FUNC_8 (struct dc_softc*) ;
 int FUNC_9 (int ,scalar_t__) ;
 struct dc_softc* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (struct ifnet*) ;
 int FUNC_14 (struct dc_mediainfo*,int ) ;
 int FUNC_15 (struct ifnet*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_5)
{
 struct dc_softc *VAR_6;
 struct ifnet *VAR_7;
 struct dc_mediainfo *VAR_8;

 VAR_6 = FUNC_10(VAR_5);
 FUNC_2(FUNC_17(&VAR_6->dc_mtx), ("dc mutex not initialized"));

 VAR_7 = VAR_6->dc_ifp;







 if (FUNC_11(VAR_5)) {
  FUNC_0(VAR_6);
  FUNC_8(VAR_6);
  FUNC_1(VAR_6);
  FUNC_6(&VAR_6->dc_stat_ch);
  FUNC_6(&VAR_6->dc_wdog_ch);
  FUNC_12(VAR_7);
 }
 if (VAR_6->dc_miibus)
  FUNC_9(VAR_5, VAR_6->dc_miibus);
 FUNC_3(VAR_5);

 if (VAR_6->dc_intrhand)
  FUNC_5(VAR_5, VAR_6->dc_irq, VAR_6->dc_intrhand);
 if (VAR_6->dc_irq)
  FUNC_4(VAR_5, VAR_4, 0, VAR_6->dc_irq);
 if (VAR_6->dc_res)
  FUNC_4(VAR_5, VAR_0, VAR_1, VAR_6->dc_res);

 if (VAR_7 != ((void*)0))
  FUNC_15(VAR_7);

 FUNC_7(VAR_6);

 FUNC_14(VAR_6->dc_pnic_rx_buf, VAR_3);

 while (VAR_6->dc_mi != ((void*)0)) {
  VAR_8 = VAR_6->dc_mi->dc_next;
  FUNC_14(VAR_6->dc_mi, VAR_3);
  VAR_6->dc_mi = VAR_8;
 }
 FUNC_14(VAR_6->dc_srom, VAR_3);

 FUNC_16(&VAR_6->dc_mtx);

 return (0);
}

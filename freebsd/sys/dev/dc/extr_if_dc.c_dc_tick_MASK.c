
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mii_data {int mii_media_active; } ;
struct ifnet {int if_snd; } ;
struct TYPE_2__ {scalar_t__ dc_tx_cnt; } ;
struct dc_softc {int dc_flags; scalar_t__ dc_link; int dc_stat_ch; TYPE_1__ dc_cdata; int dc_miibus; struct ifnet* dc_ifp; } ;


 int FUNC_0 (struct dc_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct dc_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct dc_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,void (*) (void*),struct dc_softc*) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (struct dc_softc*) ;
 struct mii_data* FUNC_8 (int ) ;
 int VAR_11 ;
 int FUNC_9 (struct mii_data*) ;
 int FUNC_10 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_12)
{
 struct dc_softc *VAR_13;
 struct mii_data *VAR_14;
 struct ifnet *VAR_15;
 uint32_t VAR_16;

 VAR_13 = VAR_12;
 FUNC_2(VAR_13);
 VAR_15 = VAR_13->dc_ifp;
 VAR_14 = FUNC_8(VAR_13->dc_miibus);





 if (VAR_13->dc_flags & VAR_8)
  FUNC_7(VAR_13);

 if (VAR_13->dc_flags & VAR_4) {
  if (VAR_13->dc_flags & VAR_1) {
   VAR_16 = FUNC_0(VAR_13, VAR_0);
   if (FUNC_3(VAR_14->mii_media_active) ==
       VAR_9 && (VAR_16 & VAR_7)) {
    VAR_13->dc_link = 0;
    FUNC_9(VAR_14);
   }
   if (FUNC_3(VAR_14->mii_media_active) ==
       VAR_10 && (VAR_16 & VAR_6)) {
    VAR_13->dc_link = 0;
    FUNC_9(VAR_14);
   }
   if (VAR_13->dc_link == 0)
    FUNC_10(VAR_14);
  } else {




   if ((FUNC_1(VAR_13) || (FUNC_0(VAR_13,
       VAR_2) & VAR_3) == VAR_5) &&
       VAR_13->dc_cdata.dc_tx_cnt == 0)
    FUNC_10(VAR_14);
  }
 } else
  FUNC_10(VAR_14);
 if (VAR_13->dc_link != 0 && !FUNC_4(&VAR_15->if_snd))
  FUNC_6(VAR_15);

 if (VAR_13->dc_flags & VAR_1 && !VAR_13->dc_link)
  FUNC_5(&VAR_13->dc_stat_ch, VAR_11/10, FUNC_11, VAR_13);
 else
  FUNC_5(&VAR_13->dc_stat_ch, VAR_11, FUNC_11, VAR_13);
}

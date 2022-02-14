
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {struct mii_data* mii_pdata; } ;
struct mii_data {int mii_media_active; int mii_media_status; int mii_ifp; } ;
struct dc_softc {int dummy; } ;


 int FUNC_0 (struct dc_softc*,int ) ;
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
 struct dc_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct mii_softc *VAR_12)
{
 struct mii_data *VAR_13 = VAR_12->mii_pdata;
 int VAR_14;
 struct dc_softc *VAR_15;

 VAR_15 = FUNC_1(VAR_13->mii_ifp);

 VAR_13->mii_media_status = VAR_8;
 VAR_13->mii_media_active = VAR_9;

 VAR_14 = FUNC_0(VAR_15, VAR_0);
 if (!(VAR_14 & VAR_1))
  VAR_13->mii_media_status |= VAR_7;
 VAR_14 = FUNC_0(VAR_15, VAR_2);
 if (VAR_14 & VAR_4)
  VAR_13->mii_media_active |= VAR_6;
 else
  VAR_13->mii_media_active |= VAR_5;
 if (VAR_14 & VAR_3)
  VAR_13->mii_media_active |= VAR_10;
 else
  VAR_13->mii_media_active |= VAR_11;
}

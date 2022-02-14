
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct mii_data* mii_pdata; } ;
struct tlphy_softc {TYPE_3__ sc_mii; } ;
struct mii_softc {int dummy; } ;
struct TYPE_5__ {TYPE_1__* ifm_cur; } ;
struct mii_data {int mii_media_active; int mii_media_status; TYPE_2__ mii_media; } ;
struct TYPE_4__ {int ifm_media; } ;


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
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_2(struct mii_softc *VAR_16)
{
 struct tlphy_softc *VAR_17 = (struct tlphy_softc *)VAR_16;
 struct mii_data *VAR_18 = VAR_17->sc_mii.mii_pdata;
 int VAR_19, VAR_20, VAR_21;

 VAR_18->mii_media_status = VAR_7;
 VAR_18->mii_media_active = VAR_8;

 VAR_20 = FUNC_0(&VAR_17->sc_mii, VAR_13);
 if (VAR_20 & VAR_1) {
  VAR_18->mii_media_active |= VAR_12;
  VAR_18->mii_media_status = 0;
  return;
 }

 VAR_21 = FUNC_0(&VAR_17->sc_mii, VAR_15);
 if (VAR_21 & VAR_4) {
  VAR_18->mii_media_status = 0;
  VAR_18->mii_media_active = VAR_18->mii_media.ifm_cur->ifm_media;
  return;
 }

 VAR_19 = FUNC_0(&VAR_17->sc_mii, VAR_14) |
     FUNC_0(&VAR_17->sc_mii, VAR_14);
 if (VAR_19 & VAR_3)
  VAR_18->mii_media_status |= VAR_6;

 if (VAR_20 & VAR_2)
  VAR_18->mii_media_active |= VAR_11;







 if (VAR_20 & VAR_0)
  VAR_18->mii_media_active |= VAR_9 | FUNC_1(VAR_16);
 else
  VAR_18->mii_media_active |= VAR_10;
 VAR_18->mii_media_active |= VAR_5;
}

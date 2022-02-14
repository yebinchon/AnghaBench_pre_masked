
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {scalar_t__ mii_mpd_model; scalar_t__ mii_mpd_rev; int mii_dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct mii_softc *VAR_6)
{
 int VAR_7;

 if (VAR_6->mii_mpd_model != VAR_0 &&
     VAR_6->mii_mpd_rev < VAR_1) {
  FUNC_2(VAR_6, VAR_4, VAR_2);
  FUNC_0(1000);
 }

 for (VAR_7 = 0; VAR_7 < 15000; VAR_7++) {
  if (!(FUNC_1(VAR_6, VAR_5) & VAR_3)) {



   break;
  }
  FUNC_0(10);
 }
}

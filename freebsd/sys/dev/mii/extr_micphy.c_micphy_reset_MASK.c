
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {scalar_t__ mii_mpd_model; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mii_softc*,int ) ;
 int FUNC_1 (struct mii_softc*,int ,int) ;
 int FUNC_2 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_3(struct mii_softc *VAR_2)
{
 int VAR_3;







 if (VAR_2->mii_mpd_model == VAR_1)
  VAR_3 = FUNC_0(VAR_2, VAR_0);
 FUNC_2(VAR_2);
 if (VAR_2->mii_mpd_model == VAR_1)
  FUNC_1(VAR_2, VAR_0, VAR_3);
}

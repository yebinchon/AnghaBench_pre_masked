
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia {int ifm_media; } ;
struct mii_data {struct ifmedia mii_media; } ;
struct dc_softc {int dc_miibus; scalar_t__ dc_link; } ;


 scalar_t__ FUNC_0 (struct dc_softc*) ;
 scalar_t__ FUNC_1 (struct dc_softc*) ;
 int FUNC_2 (struct dc_softc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct dc_softc*,int ) ;
 struct mii_data* FUNC_5 (int ) ;
 int FUNC_6 (struct mii_data*) ;

__attribute__((used)) static int
FUNC_7(struct dc_softc *VAR_1)
{
 struct mii_data *VAR_2;
 struct ifmedia *VAR_3;
 int VAR_4;

 FUNC_2(VAR_1);

 VAR_1->dc_link = 0;
 VAR_2 = FUNC_5(VAR_1->dc_miibus);
 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4 == 0) {
  VAR_3 = &VAR_2->mii_media;
  if (FUNC_1(VAR_1))
   FUNC_4(VAR_1, VAR_3->ifm_media);
  else if (FUNC_0(VAR_1) &&
      FUNC_3(VAR_3->ifm_media) == VAR_0)
   FUNC_4(VAR_1, VAR_3->ifm_media);
 }

 return (VAR_4);
}

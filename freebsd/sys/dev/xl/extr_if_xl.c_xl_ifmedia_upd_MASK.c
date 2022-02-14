
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia {int ifm_media; } ;
struct xl_softc {int xl_media; struct ifmedia ifmedia; int * xl_miibus; } ;
struct mii_data {struct ifmedia mii_media; } ;
struct ifnet {int if_drv_flags; struct xl_softc* if_softc; } ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct xl_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct xl_softc*) ;
 struct mii_data* FUNC_3 (int *) ;
 int FUNC_4 (struct xl_softc*) ;
 int FUNC_5 (struct xl_softc*,int ) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_4)
{
 struct xl_softc *VAR_5 = VAR_4->if_softc;
 struct ifmedia *VAR_6 = ((void*)0);
 struct mii_data *VAR_7 = ((void*)0);

 FUNC_1(VAR_5);

 if (VAR_5->xl_miibus != ((void*)0))
  VAR_7 = FUNC_3(VAR_5->xl_miibus);
 if (VAR_7 == ((void*)0))
  VAR_6 = &VAR_5->ifmedia;
 else
  VAR_6 = &VAR_7->mii_media;

 switch (FUNC_0(VAR_6->ifm_media)) {
 case 131:
 case 128:
 case 130:
 case 129:
  FUNC_5(VAR_5, VAR_6->ifm_media);
  FUNC_2(VAR_5);
  return (0);
 }

 if (VAR_5->xl_media & VAR_3 ||
     VAR_5->xl_media & VAR_2 ||
     VAR_5->xl_media & VAR_1) {
  VAR_4->if_drv_flags &= ~VAR_0;
  FUNC_4(VAR_5);
 } else {
  FUNC_5(VAR_5, VAR_6->ifm_media);
 }

 FUNC_2(VAR_5);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nfe_softc {int nfe_link; int nfe_ifp; int nfe_miibus; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
typedef int if_t ;
typedef int device_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfe_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct nfe_softc*,int ,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nfe_softc*,struct mii_data*) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_7)
{
 struct nfe_softc *VAR_8;
 struct mii_data *VAR_9;
 if_t VAR_10;
 uint32_t VAR_11, VAR_12;

 VAR_8 = FUNC_3(VAR_7);

 VAR_9 = FUNC_3(VAR_8->nfe_miibus);
 VAR_10 = VAR_8->nfe_ifp;

 VAR_8->nfe_link = 0;
 if ((VAR_9->mii_media_status & (VAR_1 | VAR_2)) ==
     (VAR_1 | VAR_2)) {
  switch (FUNC_0(VAR_9->mii_media_active)) {
  case 128:
  case 129:
  case 130:
   VAR_8->nfe_link = 1;
   break;
  default:
   break;
  }
 }

 FUNC_5(VAR_8, VAR_9);
 VAR_12 = FUNC_1(VAR_8, VAR_5);
 VAR_11 = FUNC_1(VAR_8, VAR_3);
 if (VAR_8->nfe_link != 0 && (FUNC_4(VAR_10) & VAR_0) != 0) {
  VAR_12 |= VAR_6;
  VAR_11 |= VAR_4;
 } else {
  VAR_12 &= ~VAR_6;
  VAR_11 &= ~VAR_4;
 }
 FUNC_2(VAR_8, VAR_5, VAR_12);
 FUNC_2(VAR_8, VAR_3, VAR_11);
}

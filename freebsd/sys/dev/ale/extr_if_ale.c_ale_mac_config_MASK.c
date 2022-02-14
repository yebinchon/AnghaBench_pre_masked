
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_data {int mii_media_active; } ;
struct ale_softc {int ale_miibus; } ;


 int FUNC_0 (struct ale_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct ale_softc*,int ) ;
 int FUNC_2 (struct ale_softc*,int ,int) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct mii_data* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct ale_softc *VAR_10)
{
 struct mii_data *VAR_11;
 uint32_t VAR_12;

 FUNC_0(VAR_10);

 VAR_11 = FUNC_5(VAR_10->ale_miibus);
 VAR_12 = FUNC_1(VAR_10, VAR_0);
 VAR_12 &= ~(VAR_4 | VAR_9 | VAR_5 |
     VAR_8);

 switch (FUNC_4(VAR_11->mii_media_active)) {
 case 128:
 case 129:
  VAR_12 |= VAR_7;
  break;
 case 130:
  VAR_12 |= VAR_6;
  break;
 }
 if ((FUNC_3(VAR_11->mii_media_active) & VAR_3) != 0) {
  VAR_12 |= VAR_4;
  if ((FUNC_3(VAR_11->mii_media_active) & VAR_2) != 0)
   VAR_12 |= VAR_9;
  if ((FUNC_3(VAR_11->mii_media_active) & VAR_1) != 0)
   VAR_12 |= VAR_5;
 }
 FUNC_2(VAR_10, VAR_0, VAR_12);
}

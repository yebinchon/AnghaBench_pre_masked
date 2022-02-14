
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vte_softc {int vte_miibus; } ;
struct mii_data {int mii_media_active; } ;


 int FUNC_0 (struct vte_softc*,int ) ;
 int FUNC_1 (struct vte_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct vte_softc*) ;
 int VAR_5 ;
 struct mii_data* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct vte_softc *VAR_6)
{
 struct mii_data *VAR_7;
 uint16_t VAR_8;

 FUNC_3(VAR_6);

 VAR_7 = FUNC_4(VAR_6->vte_miibus);
 VAR_8 = FUNC_0(VAR_6, VAR_5);
 VAR_8 &= ~(VAR_3 | VAR_4);
 if ((FUNC_2(VAR_7->mii_media_active) & VAR_2) != 0) {
  VAR_8 |= VAR_4;
 }
 FUNC_1(VAR_6, VAR_5, VAR_8);
}

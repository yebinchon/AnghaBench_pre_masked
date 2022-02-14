
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mii_softc {int mii_flags; int mii_capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct mii_softc *VAR_8, int VAR_9)
{
 uint16_t VAR_10;

 VAR_10 = FUNC_0(VAR_8->mii_capabilities) | VAR_0;
 if ((VAR_9 & VAR_4) != 0 || (VAR_8->mii_flags & VAR_5) != 0)
  VAR_10 |= VAR_1;
 FUNC_2(VAR_8, VAR_6, VAR_10);

 VAR_10 = FUNC_1(VAR_8, VAR_6);
 FUNC_2(VAR_8, VAR_7, VAR_2 | VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int mii_flags; int mii_capabilities; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct mii_softc*) ;

__attribute__((used)) static int
FUNC_5(struct mii_softc *VAR_13, int VAR_14)
{
 int VAR_15;

 FUNC_4(VAR_13);
 FUNC_2(VAR_13);

 VAR_15 = FUNC_0(VAR_13->mii_capabilities) | VAR_0;
 if ((VAR_14 & VAR_2) != 0 || (VAR_13->mii_flags & VAR_3) != 0)
  VAR_15 |= VAR_7 | VAR_6;
 FUNC_3(VAR_13, VAR_11, VAR_15);
 FUNC_1(1000);
 FUNC_3(VAR_13, VAR_10,
     VAR_5 | VAR_4);
 FUNC_1(1000);
 FUNC_3(VAR_13, VAR_12,
     VAR_8 | VAR_9);
 FUNC_1(100);

 return (VAR_1);
}

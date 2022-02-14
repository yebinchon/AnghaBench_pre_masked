
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_softc {int mii_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mii_softc*,int ) ;
 int FUNC_1 (struct mii_softc*,int ,int) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_4(struct mii_softc *VAR_5)
{
 uint32_t VAR_6;

 FUNC_3(VAR_5);


 VAR_6 = FUNC_0(VAR_5, VAR_2);
 VAR_6 &= ~(VAR_0 | VAR_1);
 FUNC_1(VAR_5, VAR_4, VAR_6);

 if ((VAR_5->mii_flags & VAR_3) != 0)
  FUNC_2(VAR_5);
}

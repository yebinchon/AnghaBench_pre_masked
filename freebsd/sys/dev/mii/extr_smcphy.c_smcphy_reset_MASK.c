
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct mii_softc {int mii_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mii_softc*,int) ;
 int FUNC_2 (struct mii_softc*,int,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct mii_softc *VAR_2)
{
 u_int VAR_3;
 int VAR_4;

 FUNC_2(VAR_2, VAR_1, VAR_0);

 for (VAR_4 = 2; VAR_4 > 0; VAR_4--) {
  FUNC_0(50000);
  VAR_3 = FUNC_1(VAR_2, VAR_1);
  if ((VAR_3 & VAR_0) == 0)
   break;
 }

 if (VAR_3 & VAR_0)
  FUNC_3(VAR_2->mii_dev, "reset failed\n");

 FUNC_2(VAR_2, VAR_1, 0x3000);


 FUNC_2(VAR_2, 0x1e, 0xffc0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct fxp_softc {int suspended; int dev; int flags; int ifp; } ;
typedef int if_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct fxp_softc*) ;
 int FUNC_1 (struct fxp_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct fxp_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct fxp_softc*,int ) ;
 int FUNC_4 (struct fxp_softc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int*) ;
 int FUNC_8 (int ,scalar_t__,int) ;
 int FUNC_9 (int ,scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_7)
{
 struct fxp_softc *VAR_8 = FUNC_2(VAR_7);
 if_t VAR_9;
 int VAR_10;
 uint16_t VAR_11;

 FUNC_0(VAR_8);

 VAR_9 = VAR_8->ifp;
 if (FUNC_7(VAR_8->dev, VAR_6, &VAR_10) == 0) {
  VAR_11 = FUNC_8(VAR_8->dev, VAR_10 + VAR_5, 2);
  VAR_11 &= ~(VAR_3 | VAR_4);
  if ((FUNC_5(VAR_9) & VAR_1) != 0) {

   VAR_11 |= VAR_3 | VAR_4;
   VAR_8->flags |= VAR_0;

   FUNC_6(VAR_9, 0, VAR_2);
   FUNC_3(VAR_8, 0);
  }
  FUNC_9(VAR_8->dev, VAR_10 + VAR_5, VAR_11, 2);
 }
 FUNC_4(VAR_8);

 VAR_8->suspended = 1;

 FUNC_1(VAR_8);
 return (0);
}

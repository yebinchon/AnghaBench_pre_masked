
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct fxp_softc {int flags; scalar_t__ suspended; int dev; int ifp; } ;
typedef int if_t ;
typedef int device_t ;


 int FUNC_0 (struct fxp_softc*,int ) ;
 int FUNC_1 (struct fxp_softc*,int ,int ) ;
 int FUNC_2 (struct fxp_softc*,int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct fxp_softc*) ;
 int VAR_4 ;
 int FUNC_5 (struct fxp_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct fxp_softc* FUNC_6 (int ) ;
 int FUNC_7 (struct fxp_softc*,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,int*) ;
 int FUNC_10 (int ,scalar_t__,int) ;
 int FUNC_11 (int ,scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_9)
{
 struct fxp_softc *VAR_10 = FUNC_6(VAR_9);
 if_t VAR_11 = VAR_10->ifp;
 int VAR_12;
 uint16_t VAR_13;

 FUNC_4(VAR_10);

 if (FUNC_9(VAR_10->dev, VAR_8, &VAR_12) == 0) {
  VAR_10->flags &= ~VAR_2;
  VAR_13 = FUNC_10(VAR_10->dev, VAR_12 + VAR_7, 2);

  VAR_13 &= ~VAR_6;
  FUNC_11(VAR_10->dev, VAR_12 + VAR_7, VAR_13, 2);
  if ((VAR_10->flags & VAR_3) != 0)
   FUNC_1(VAR_10, VAR_0,
       FUNC_0(VAR_10, VAR_0));
 }

 FUNC_2(VAR_10, VAR_1, VAR_4);
 FUNC_3(10);


 if (FUNC_8(VAR_11) & VAR_5)
  FUNC_7(VAR_10, 1);

 VAR_10->suspended = 0;

 FUNC_5(VAR_10);
 return (0);
}

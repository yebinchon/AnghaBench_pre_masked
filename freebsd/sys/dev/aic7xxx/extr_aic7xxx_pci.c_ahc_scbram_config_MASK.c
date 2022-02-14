
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct ahc_softc {int features; int dev_softc; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ahc_softc*,int ) ;
 int FUNC_1 (struct ahc_softc*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct ahc_softc *VAR_12, int VAR_13, int VAR_14,
    int VAR_15, int VAR_16)
{
 uint32_t VAR_17;

 if (VAR_12->features & VAR_1) {




  FUNC_1(VAR_12, VAR_8, FUNC_2(VAR_12->dev_softc));
 }

 VAR_12->flags &= ~VAR_0;
 if (VAR_16)
  VAR_12->flags |= VAR_0;
 VAR_17 = FUNC_3(VAR_12->dev_softc, VAR_3, 4);
 if ((VAR_12->features & VAR_2) != 0) {
  u_int VAR_18;

  VAR_18 = FUNC_0(VAR_12, VAR_4);
  if (VAR_13)
   VAR_18 &= ~VAR_7;
  else
   VAR_18 |= VAR_7;
  if (VAR_16)
   VAR_18 &= ~VAR_11;
  else
   VAR_18 |= VAR_11;
  FUNC_1(VAR_12, VAR_4, VAR_18);
 } else {
  if (VAR_15)
   VAR_17 &= ~VAR_6;
  else
   VAR_17 |= VAR_6;
  if (VAR_13)
   VAR_17 &= ~VAR_9;
  else
   VAR_17 |= VAR_9;
  if (VAR_16)
   VAR_17 &= ~VAR_10;
  else
   VAR_17 |= VAR_10;
 }
 if (VAR_14)
  VAR_17 |= VAR_5;
 else
  VAR_17 &= ~VAR_5;

 FUNC_4(VAR_12->dev_softc, VAR_3, VAR_17, 4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xae_softc {int dev; } ;
typedef int device_t ;


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
 int FUNC_0 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct xae_softc*,int ) ;
 int FUNC_2 (struct xae_softc*,int ,int) ;
 int VAR_18 ;
 int FUNC_3 (struct xae_softc*,int ) ;
 int FUNC_4 (struct xae_softc*,int ,int) ;
 int VAR_19 ;
 int FUNC_5 (struct xae_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct xae_softc *VAR_20)
{
 uint32_t VAR_21;
 device_t VAR_22;

 VAR_22 = VAR_20->dev;

 do {
  FUNC_5(VAR_20, VAR_15, VAR_19);
  FUNC_4(VAR_20, VAR_14, VAR_18);

  VAR_21 = FUNC_3(VAR_20, VAR_12);
  VAR_21 &= ~VAR_9;
  VAR_21 |= (VAR_8);
  VAR_21 |= VAR_6;
  VAR_21 |= VAR_10;
  VAR_21 |= VAR_7;
  FUNC_4(VAR_20, VAR_12, VAR_21);

  FUNC_5(VAR_20, VAR_13, VAR_11);
  FUNC_4(VAR_20, VAR_16,
      VAR_0 | VAR_1 | VAR_3 | VAR_2);
 } while (FUNC_1(VAR_20, VAR_16) == 0x0ffff);

 do {
  FUNC_2(VAR_20, VAR_16,
      VAR_0 | VAR_1 | VAR_3 | VAR_4);
  FUNC_0(40000);
 } while ((FUNC_1(VAR_20, VAR_17) & VAR_5) == 0);
}

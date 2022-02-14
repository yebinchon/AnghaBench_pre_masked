
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct sis_softc {scalar_t__ sis_type; int sis_dev; struct ifnet* sis_ifp; } ;
struct ifnet {int if_capenable; } ;


 int FUNC_0 (struct sis_softc*,int ) ;
 int FUNC_1 (struct sis_softc*,int ,int) ;
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
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (struct sis_softc*,int ,int ) ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (int ,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_6(struct sis_softc *VAR_21)
{
 struct ifnet *VAR_22;
 uint32_t VAR_23;
 uint16_t VAR_24;
 int VAR_25;

 VAR_22 = VAR_21->sis_ifp;
 if ((VAR_22->if_capenable & VAR_0) == 0)
  return;

 if (VAR_21->sis_type == VAR_20) {

  FUNC_1(VAR_21, VAR_19, 0);


  FUNC_0(VAR_21, VAR_7);
  VAR_23 = 0;
  if ((VAR_22->if_capenable & VAR_3) != 0)
   VAR_23 |= VAR_10;
  if ((VAR_22->if_capenable & VAR_2) != 0)
   VAR_23 |= VAR_9;
  if ((VAR_22->if_capenable & VAR_1) != 0)
   VAR_23 |= VAR_8;
  FUNC_1(VAR_21, VAR_7, VAR_23);

  VAR_23 = FUNC_0(VAR_21, VAR_4);
  VAR_23 |= VAR_5 | VAR_6;
  FUNC_1(VAR_21, VAR_4, VAR_23);

  FUNC_2(VAR_21, VAR_15, VAR_16);
 } else {
  if (FUNC_3(VAR_21->sis_dev, VAR_14, &VAR_25) != 0)
   return;
  VAR_23 = 0;
  if ((VAR_22->if_capenable & VAR_1) != 0)
   VAR_23 |= VAR_18;
  FUNC_1(VAR_21, VAR_17, VAR_23);

  VAR_24 = FUNC_4(VAR_21->sis_dev,
      VAR_25 + VAR_13, 2);
  VAR_24 &= ~(VAR_11 | VAR_12);
  if ((VAR_22->if_capenable & VAR_1) != 0)
   VAR_24 |= VAR_11 | VAR_12;
  FUNC_5(VAR_21->sis_dev,
      VAR_25 + VAR_13, VAR_24, 2);
 }
}

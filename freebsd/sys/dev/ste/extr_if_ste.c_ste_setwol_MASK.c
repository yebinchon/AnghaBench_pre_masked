
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ste_softc {int ste_dev; struct ifnet* ste_ifp; } ;
struct ifnet {int if_capenable; } ;


 int FUNC_0 (struct ste_softc*,int ) ;
 int FUNC_1 (struct ste_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ste_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (int ,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_6(struct ste_softc *VAR_10)
{
 struct ifnet *VAR_11;
 uint16_t VAR_12;
 uint8_t VAR_13;
 int VAR_14;

 FUNC_2(VAR_10);

 if (FUNC_3(VAR_10->ste_dev, VAR_4, &VAR_14) != 0) {

  FUNC_0(VAR_10, VAR_9);
  FUNC_1(VAR_10, VAR_9, 0);
  return;
 }

 VAR_11 = VAR_10->ste_ifp;
 VAR_13 = FUNC_0(VAR_10, VAR_9);
 VAR_13 &= ~(VAR_8 | VAR_6 |
     VAR_5 | VAR_7);
 if ((VAR_11->if_capenable & VAR_0) != 0)
  VAR_13 |= VAR_6 | VAR_7;
 FUNC_1(VAR_10, VAR_9, VAR_13);

 VAR_12 = FUNC_4(VAR_10->ste_dev, VAR_14 + VAR_3, 2);
 VAR_12 &= ~(VAR_1 | VAR_2);
 if ((VAR_11->if_capenable & VAR_0) != 0)
  VAR_12 |= VAR_1 | VAR_2;
 FUNC_5(VAR_10->ste_dev, VAR_14 + VAR_3, VAR_12, 2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct uss820dci_softc {int sc_bus; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct uss820dci_softc*,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (struct uss820dci_softc*,int ,scalar_t__) ;
 int FUNC_4 (struct uss820dci_softc*,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5(struct uss820dci_softc *VAR_17,
    uint8_t VAR_18, uint8_t VAR_19, uint8_t VAR_20)
{
 uint8_t VAR_21;

 if (VAR_19 == VAR_0) {

  return;
 }
 FUNC_0(&VAR_17->sc_bus);


 FUNC_3(VAR_17, VAR_7, VAR_18);


 if (VAR_20 == VAR_1) {
  VAR_21 = 0xFF ^ (VAR_5 |
      VAR_6);
 } else {
  VAR_21 = 0xFF ^ (VAR_3 |
      VAR_4);
 }
 FUNC_4(VAR_17, VAR_2, VAR_21, 0);

 if (VAR_20 == VAR_1) {

  FUNC_3(VAR_17, VAR_15,
      VAR_16);


  VAR_21 = FUNC_2(VAR_17, VAR_13);
  VAR_21 |= VAR_14;
  FUNC_3(VAR_17, VAR_13, VAR_21);
  VAR_21 &= ~VAR_14;
  FUNC_3(VAR_17, VAR_13, VAR_21);
 } else {


  FUNC_4(VAR_17, VAR_11,
      0, VAR_12);


  VAR_21 = FUNC_2(VAR_17, VAR_8);
  VAR_21 |= VAR_9;
  VAR_21 &= ~VAR_10;
  FUNC_3(VAR_17, VAR_8, VAR_21);
  VAR_21 &= ~VAR_9;
  FUNC_3(VAR_17, VAR_8, VAR_21);
 }
 FUNC_1(&VAR_17->sc_bus);
}

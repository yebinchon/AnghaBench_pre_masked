
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct elink_phy* phy; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,scalar_t__,int ,scalar_t__*) ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,scalar_t__,int ,scalar_t__) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void FUNC_2(struct elink_params *VAR_11)
{
 struct bxe_softc *VAR_12 = VAR_11->sc;
 struct elink_phy *VAR_13 = &VAR_11->phy[VAR_0];
 uint16_t VAR_14;
 uint16_t VAR_15;
 uint16_t VAR_16;


 FUNC_0(VAR_12, VAR_13,
     VAR_4,
     VAR_1, &VAR_14);


 VAR_14 = (((VAR_14 & VAR_2) >>
     VAR_3) <<
    VAR_10);

 if (VAR_14 == 0)
  return;

 for (VAR_16 = VAR_5; VAR_16 <= VAR_7;
       VAR_16 += (VAR_6 - VAR_5)) {
  FUNC_0(VAR_12, VAR_13,
      VAR_16,
      VAR_8, &VAR_15);


  if (VAR_14 !=
      (VAR_15 & VAR_9)) {
   VAR_15 &= ~VAR_9;
   VAR_15 |= VAR_14;
   FUNC_1(VAR_12, VAR_13,
       VAR_16,
       VAR_8, VAR_15);
  }
 }
}

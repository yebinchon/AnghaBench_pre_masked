
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,scalar_t__*) ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct bxe_softc*,int ,int ) ;
 int FUNC_5 (struct bxe_softc*,int ) ;

__attribute__((used)) static elink_status_t FUNC_6(struct elink_params *VAR_7,
          struct elink_phy *VAR_8,
          uint8_t VAR_9)
{
 struct bxe_softc *VAR_10 = VAR_7->sc;
 uint16_t VAR_11;
 uint16_t VAR_12;
 FUNC_0(VAR_10, VAR_8,
     VAR_6,
     VAR_4, &VAR_11);


 FUNC_1(VAR_10, VAR_8,
     VAR_6,
     VAR_4,
     (VAR_11 |
      VAR_5));
 if (VAR_9)
  FUNC_5(VAR_10, VAR_7->port);


 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  FUNC_2(5);


  FUNC_0(VAR_10, VAR_8,
      VAR_6,
      VAR_4,
      &VAR_11);

  if (!(VAR_11 & VAR_5)) {
   FUNC_2(5);
   return VAR_3;
  }
 }

 FUNC_4(VAR_10, VAR_0, VAR_7->port);


 FUNC_3(VAR_10, "BUG! XGXS is still in reset!\n");
 return VAR_2;

}

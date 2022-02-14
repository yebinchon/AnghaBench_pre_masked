
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct elink_phy {int * tx_preemphasis; int * rx_preemphasis; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,scalar_t__,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(struct elink_phy *VAR_8,
      struct elink_params *VAR_9)
{

 uint16_t VAR_10, VAR_11 = 0;
 struct bxe_softc *VAR_12 = VAR_9->sc;

 for (VAR_10 = VAR_0, VAR_11 = 0; VAR_10 <= VAR_2;
       VAR_10 += (VAR_1-VAR_0), VAR_11++) {
   FUNC_0(VAR_12, VAR_8,
       VAR_10,
       VAR_6,
       VAR_8->rx_preemphasis[VAR_11]);
 }

 for (VAR_10 = VAR_3, VAR_11 = 0; VAR_10 <= VAR_5;
        VAR_10 += (VAR_4 - VAR_3), VAR_11++) {
   FUNC_0(VAR_12, VAR_8,
       VAR_10,
       VAR_7,
       VAR_8->tx_preemphasis[VAR_11]);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct bwn_softc {int sc_dev; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bwn_mac*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (struct bwn_mac*) ;
 int FUNC_4 (struct bwn_mac*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct bwn_mac*,int) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_8(struct bwn_mac *VAR_6, int VAR_7, uint8_t VAR_8)
{
 struct bwn_softc *VAR_9 = VAR_6->mac_sc;
 int VAR_10;

 if (VAR_8 != 0)
  FUNC_6(VAR_6, VAR_7);

 FUNC_1(VAR_6, VAR_1, FUNC_5(VAR_7));

 if (VAR_7 == 14) {
  uint8_t VAR_11;

  VAR_10 = FUNC_2(VAR_9->sc_dev, VAR_0, &VAR_11);
  if (VAR_10) {
   FUNC_7(VAR_9->sc_dev, "error reading country code "
       "from NVRAM, assuming channel 14 unavailable: %d\n",
       VAR_10);
   VAR_11 = VAR_5;
  }

  if (VAR_11 == VAR_4)
   FUNC_4(VAR_6,
       FUNC_3(VAR_6) & ~VAR_3);
  else
   FUNC_4(VAR_6,
       FUNC_3(VAR_6) | VAR_3);
  FUNC_1(VAR_6, VAR_2,
      FUNC_0(VAR_6, VAR_2) | (1 << 11));
  return;
 }

 FUNC_1(VAR_6, VAR_2,
     FUNC_0(VAR_6, VAR_2) & 0xf7bf);
}

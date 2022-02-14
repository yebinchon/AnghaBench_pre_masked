
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uath_softc {int sc_dev; } ;
struct ieee80211_channel {int dummy; } ;


 int FUNC_0 (struct uath_softc*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct uath_softc*) ;
 int FUNC_3 (struct uath_softc*) ;
 int FUNC_4 (struct uath_softc*,struct ieee80211_channel*) ;
 int FUNC_5 (struct uath_softc*,int ) ;
 int FUNC_6 (struct uath_softc*) ;

__attribute__((used)) static int
FUNC_7(struct uath_softc *VAR_0, struct ieee80211_channel *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0);


 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_0->sc_dev,
      "could not set channel, error %d\n", VAR_2);
  goto failed;
 }

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_0->sc_dev,
      "could not reset Tx queues, error %d\n", VAR_2);
  goto failed;
 }

 VAR_2 = FUNC_6(VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_0->sc_dev,
      "could not init Tx queues, error %d\n", VAR_2);
  goto failed;
 }
 VAR_2 = FUNC_5(VAR_0, 0);
 if (VAR_2) {
  FUNC_1(VAR_0->sc_dev,
      "could not set led state, error %d\n", VAR_2);
  goto failed;
 }
 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_0->sc_dev,
      "could not flush pipes, error %d\n", VAR_2);
  goto failed;
 }
failed:
 return (VAR_2);
}

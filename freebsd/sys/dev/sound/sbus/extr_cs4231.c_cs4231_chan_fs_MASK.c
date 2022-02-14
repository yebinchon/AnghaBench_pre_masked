
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct cs4231_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cs4231_softc*) ;
 int FUNC_1 (struct cs4231_softc*) ;
 int FUNC_2 (struct cs4231_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct cs4231_softc*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct cs4231_softc*,int ,int) ;
 int FUNC_5 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct cs4231_softc*) ;
 int FUNC_7 (struct cs4231_softc*,int ) ;
 int FUNC_8 (struct cs4231_softc*,int) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(struct cs4231_softc *VAR_13, int VAR_14, u_int8_t VAR_15)
{
 int VAR_16, VAR_17;




 FUNC_1(VAR_13);


 VAR_17 = 0;
 FUNC_4(VAR_13, VAR_3, VAR_11 | VAR_5);
 FUNC_4(VAR_13, VAR_4, VAR_15);
 FUNC_3(VAR_13, VAR_4);
 FUNC_3(VAR_13, VAR_4);
 for (VAR_16 = VAR_10;
     VAR_16 && FUNC_3(VAR_13, VAR_3) == VAR_7; VAR_16--)
  FUNC_5(10);
 if (VAR_16 == 0) {
  FUNC_9(VAR_13->sc_dev, "timeout setting playback speed\n");
  VAR_17++;
 }






 if (VAR_14 == VAR_12) {
  FUNC_4(VAR_13, VAR_3, VAR_11 | VAR_8);
  FUNC_4(VAR_13, VAR_4, VAR_15);
  FUNC_3(VAR_13, VAR_4);
  FUNC_3(VAR_13, VAR_4);
  for (VAR_16 = VAR_10;
      VAR_16 && FUNC_3(VAR_13, VAR_3) == VAR_7; VAR_16--)
   FUNC_5(10);
  if (VAR_16 == 0) {
   FUNC_9(VAR_13->sc_dev,
       "timeout setting capture format\n");
   VAR_17++;
  }
 }

 FUNC_4(VAR_13, VAR_3, 0);
 for (VAR_16 = VAR_10;
     VAR_16 && FUNC_3(VAR_13, VAR_3) == VAR_7; VAR_16--)
  FUNC_5(10);
 if (VAR_16 == 0) {
  FUNC_9(VAR_13->sc_dev, "timeout waiting for !MCE\n");
  VAR_17++;
 }
 if (VAR_17) {





  FUNC_9(VAR_13->sc_dev, "trying to hardware reset\n");
  FUNC_6(VAR_13);
  FUNC_7(VAR_13, VAR_2);
  FUNC_2(VAR_13);
  if (FUNC_10(VAR_13->sc_dev) != 0)
   FUNC_9(VAR_13->sc_dev,
       "unable to reinitialize the mixer\n");
  FUNC_0(VAR_13);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct mv_pcib_softc {int sc_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct mv_pcib_softc*,int,int,int,scalar_t__) ;
 int FUNC_1 (struct mv_pcib_softc*,int,int,int) ;
 scalar_t__ FUNC_2 (int ,int,int,int,int ,int) ;
 int FUNC_3 (int ,int,int,int,int ,scalar_t__,int) ;
 int FUNC_4 (struct mv_pcib_softc*,int) ;

__attribute__((used)) static int
FUNC_5(struct mv_pcib_softc *VAR_13, int VAR_14, int VAR_15)
{
 int VAR_16, VAR_17, VAR_18, VAR_19;
 uint8_t VAR_20, VAR_21, VAR_22, VAR_23;

 for (VAR_16 = 0; VAR_16 <= VAR_15; VAR_16++) {
  VAR_18 = 0;
  for (VAR_17 = 0; VAR_17 <= VAR_18; VAR_17++) {
   VAR_20 = FUNC_2(VAR_13->sc_dev, VAR_14, VAR_16,
       VAR_17, VAR_8, 1);

   if ((VAR_20 & VAR_4) > VAR_12)
    continue;

   if (VAR_17 == 0 && (VAR_20 & VAR_5))
    VAR_18 = VAR_11;

   VAR_21 = FUNC_2(VAR_13->sc_dev, VAR_14, VAR_16,
       VAR_17, VAR_7, 1);
   VAR_21 &= ~(VAR_2 | VAR_3);
   FUNC_3(VAR_13->sc_dev, VAR_14, VAR_16, VAR_17,
       VAR_7, VAR_21, 1);

   VAR_19 = FUNC_0(VAR_13, VAR_14, VAR_16, VAR_17,
       VAR_20);

   if (VAR_19)
    return (VAR_19);

   VAR_21 |= VAR_1 | VAR_2 |
       VAR_3;
   FUNC_3(VAR_13->sc_dev, VAR_14, VAR_16, VAR_17,
       VAR_7, VAR_21, 1);


   VAR_22 = FUNC_2(VAR_13->sc_dev, VAR_14, VAR_16,
       VAR_17, VAR_6, 1);
   VAR_23 = FUNC_2(VAR_13->sc_dev, VAR_14, VAR_16,
       VAR_17, VAR_9, 1);

   if (VAR_22 != VAR_0 ||
       VAR_23 != VAR_10)
    continue;

   FUNC_1(VAR_13, VAR_14, VAR_16, VAR_17);
  }
 }


 FUNC_4(VAR_13, (0xF << 24));

 return (0);
}

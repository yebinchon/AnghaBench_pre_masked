
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct ahd_softc {int flags; int dev_softc; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct ahd_softc*,int ) ;
 char* FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*,int ,int) ;
 int FUNC_3 (struct ahd_softc*,int ,int*) ;
 int FUNC_4 (struct ahd_softc*,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int,int) ;
 scalar_t__ VAR_19 ;
 int FUNC_7 (char*,char*,...) ;

__attribute__((used)) static void
FUNC_8(struct ahd_softc *VAR_20, u_int VAR_21)
{
 int VAR_22;
 u_int VAR_23;
 uint8_t VAR_24;
 uint32_t VAR_25;

 VAR_25 = FUNC_5(VAR_20->dev_softc, VAR_9, 4);
 VAR_25 &= ~VAR_17;
 if ((VAR_20->flags & VAR_1) != 0)
  VAR_25 |= VAR_17;
 if (VAR_19)
  FUNC_7("%s: STPWLEVEL is %s\n",
         FUNC_1(VAR_20), (VAR_25 & VAR_17) ? "on" : "off");
 FUNC_6(VAR_20->dev_softc, VAR_9, VAR_25, 4);


 if ((VAR_20->flags & VAR_0) != 0) {
  (void)FUNC_4(VAR_20, VAR_10, 0);
 }




 VAR_22 = FUNC_3(VAR_20, VAR_11, &VAR_24);
 if ((VAR_21 & VAR_3) == 0) {
  if (VAR_19)
   FUNC_7("%s: Manual Primary Termination\n",
          FUNC_1(VAR_20));
  VAR_24 &= ~(VAR_13|VAR_12);
  if ((VAR_21 & VAR_7) != 0)
   VAR_24 |= VAR_13;
  if ((VAR_21 & VAR_8) != 0)
   VAR_24 |= VAR_12;
 } else if (VAR_22 != 0) {
  FUNC_7("%s: Primary Auto-Term Sensing failed! "
         "Using Defaults.\n", FUNC_1(VAR_20));
  VAR_24 = VAR_13|VAR_12;
 }

 if ((VAR_21 & VAR_4) == 0) {
  if (VAR_19)
   FUNC_7("%s: Manual Secondary Termination\n",
          FUNC_1(VAR_20));
  VAR_24 &= ~(VAR_15|VAR_14);
  if ((VAR_21 & VAR_6) != 0)
   VAR_24 |= VAR_15;
  if ((VAR_21 & VAR_5) != 0)
   VAR_24 |= VAR_14;
 } else if (VAR_22 != 0) {
  FUNC_7("%s: Secondary Auto-Term Sensing failed! "
         "Using Defaults.\n", FUNC_1(VAR_20));
  VAR_24 |= VAR_15|VAR_14;
 }




 VAR_23 = FUNC_0(VAR_20, VAR_18) & ~VAR_16;
 VAR_20->flags &= ~VAR_2;
 if ((VAR_24 & VAR_13) != 0) {
  VAR_20->flags |= VAR_2;
  VAR_23 |= VAR_16;
 }

 FUNC_2(VAR_20, VAR_18, VAR_23|VAR_16);
 FUNC_2(VAR_20, VAR_18, VAR_23);

 VAR_22 = FUNC_4(VAR_20, VAR_11, VAR_24);
 if (VAR_22 != 0) {
  FUNC_7("%s: Unable to set termination settings!\n",
         FUNC_1(VAR_20));
 } else if (VAR_19) {
  FUNC_7("%s: Primary High byte termination %sabled\n",
         FUNC_1(VAR_20),
         (VAR_24 & VAR_12) ? "En" : "Dis");

  FUNC_7("%s: Primary Low byte termination %sabled\n",
         FUNC_1(VAR_20),
         (VAR_24 & VAR_13) ? "En" : "Dis");

  FUNC_7("%s: Secondary High byte termination %sabled\n",
         FUNC_1(VAR_20),
         (VAR_24 & VAR_14) ? "En" : "Dis");

  FUNC_7("%s: Secondary Low byte termination %sabled\n",
         FUNC_1(VAR_20),
         (VAR_24 & VAR_15) ? "En" : "Dis");
 }
 return;
}

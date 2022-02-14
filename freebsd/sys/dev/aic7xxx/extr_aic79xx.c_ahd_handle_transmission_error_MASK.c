
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct scb {int flags; } ;
struct ahd_softc {int bugs; int send_msg_perror; } ;
struct TYPE_2__ {char* phasemsg; } ;


 int FUNC_0 (struct ahd_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ahd_softc*) ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ FUNC_2 (struct scb*) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_3 (struct ahd_softc*) ;
 int FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_softc*,int ) ;
 int FUNC_6 (int,int*,int) ;
 TYPE_1__* FUNC_7 (int) ;
 struct scb* FUNC_8 (struct ahd_softc*,int) ;
 int FUNC_9 (int,int*,int) ;
 char* FUNC_10 (struct ahd_softc*) ;
 int FUNC_11 (struct ahd_softc*,int ,int) ;
 int FUNC_12 (int,int*,int) ;
 int FUNC_13 (struct ahd_softc*,char,int) ;
 int FUNC_14 (int,int*,int) ;
 int FUNC_15 (struct ahd_softc*) ;
 int FUNC_16 (struct ahd_softc*,int ,int ) ;
 int FUNC_17 (struct ahd_softc*) ;
 int FUNC_18 (char*,...) ;

__attribute__((used)) static void
FUNC_19(struct ahd_softc *VAR_38)
{
 struct scb *VAR_39;
 u_int VAR_40;
 u_int VAR_41;
 u_int VAR_42;
 u_int VAR_43;
 u_int VAR_44;
 u_int VAR_45;
 u_int VAR_46;
 int VAR_47;

 VAR_39 = ((void*)0);
 FUNC_16(VAR_38, VAR_1, VAR_1);
 VAR_41 = FUNC_5(VAR_38, VAR_21) & ~(VAR_18|VAR_19);
 FUNC_5(VAR_38, VAR_22);
 if ((VAR_41 & (VAR_15|VAR_14)) == 0
  && (VAR_38->bugs & VAR_2) != 0) {
  u_int VAR_48;

  FUNC_16(VAR_38, VAR_0, VAR_0);
  VAR_48 = FUNC_5(VAR_38, VAR_23);
  if ((VAR_48 >= 0x1E && VAR_48 <= 0x24)
   || (VAR_48 == 0x29)) {






   VAR_41 |= VAR_15;
  }
  FUNC_16(VAR_38, VAR_1, VAR_1);
 }

 FUNC_11(VAR_38, VAR_5, VAR_41);
 VAR_44 = FUNC_5(VAR_38, VAR_11);
 VAR_43 = FUNC_5(VAR_38, VAR_35) & VAR_29;
 VAR_45 = FUNC_5(VAR_38, VAR_28);
 VAR_42 = VAR_24;
 FUNC_11(VAR_38, VAR_8, VAR_7);




 VAR_47 = VAR_9;
 if (VAR_41 == 0
  || (VAR_41 & VAR_15) != 0) {
   if ((VAR_41 & (VAR_15|VAR_17)) != 0)
   FUNC_15(VAR_38);
  VAR_40 = FUNC_4(VAR_38);
  VAR_39 = FUNC_8(VAR_38, VAR_40);
  if (VAR_39 != ((void*)0) && FUNC_2(VAR_39))
   VAR_47 = VAR_36;
 }

 VAR_46 = 0;
 if (VAR_47 == VAR_9) {
  FUNC_18("%s: Transmission error detected\n", FUNC_10(VAR_38));
  FUNC_9(VAR_41, &VAR_46, 50);
  FUNC_6(VAR_44, &VAR_46, 50);
  FUNC_14(VAR_43, &VAR_46, 50);
  FUNC_12(VAR_45, &VAR_46, 50);
  FUNC_18("\n");
  FUNC_0(VAR_38);
  FUNC_3(VAR_38);
 }

 if ((VAR_41 & (VAR_16|VAR_17)) != 0) {
  if (VAR_47 == VAR_9) {
   FUNC_18("%s: Gross protocol error during incoming "
          "packet.  lqistat1 == 0x%x.  Resetting bus.\n",
          FUNC_10(VAR_38), VAR_41);
   FUNC_1(VAR_38);
  }
  FUNC_13(VAR_38, 'A', VAR_36);
  return;
 } else if ((VAR_41 & VAR_14) != 0) {
  FUNC_11(VAR_38, VAR_12, VAR_20);
  FUNC_18("LQIRetry for LQICRCI_LQ to release ACK\n");
  FUNC_0(VAR_38);
 } else if ((VAR_41 & VAR_15) != 0) {
  if (VAR_47 == VAR_9)
   FUNC_18("LQICRC_NLQ\n");
  if (VAR_39 == ((void*)0)) {
   FUNC_18("%s: No SCB valid for LQICRC_NLQ.  "
          "Resetting bus\n", FUNC_10(VAR_38));
   FUNC_1(VAR_38);
   FUNC_13(VAR_38, 'A', VAR_36);
   return;
  }
 } else if ((VAR_41 & VAR_13) != 0) {
  FUNC_18("Need to handle BADLQI!\n");
  FUNC_13(VAR_38, 'A', VAR_36);
  return;
 } else if ((VAR_45 & (VAR_27|VAR_30)) == VAR_27) {
  if ((VAR_43 & ~VAR_31) != 0) {

   if (VAR_47 == VAR_9)
    FUNC_18("Acking %s to clear perror\n",
        FUNC_7(VAR_43)->phasemsg);
   FUNC_5(VAR_38, VAR_34);
  }

  if (VAR_43 == VAR_32)
   VAR_42 = VAR_26;
 }
 VAR_38->send_msg_perror = VAR_42;
 if (VAR_39 != ((void*)0) && VAR_42 == VAR_24)
  VAR_39->flags |= VAR_33;
 FUNC_11(VAR_38, VAR_25, VAR_10);
 FUNC_11(VAR_38, VAR_4, VAR_6);
 FUNC_17(VAR_38);
}

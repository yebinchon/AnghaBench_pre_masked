
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int ib_portid_t ;
typedef int buf ;
struct TYPE_2__ {int counterselect; int portxmitdata; int portrcvdata; int portxmitpkts; int portrcvpkts; int portunicastxmitpkts; int portunicastrcvpkts; int portmulticastxmitpkits; int portmulticastrcvpkts; int counterSelect2; int symbolErrorCounter; int linkErrorRecoveryCounter; int linkDownedCounter; int portRcvErrors; int portRcvRemotePhysicalErrors; int portRcvSwitchRelayErrors; int portXmitDiscards; int portXmitConstraintErrors; int portRcvConstraintErrors; int localLinkIntegrityErrors; int excessiveBufferOverrunErrors; int VL15Dropped; int portXmitWait; int QP1Dropped; } ;


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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int ,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int) ;
 int VAR_28 ;
 TYPE_1__ VAR_29 ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int,int,int,char*) ;

__attribute__((used)) static void FUNC_7(ib_portid_t * VAR_30,
           uint16_t VAR_31, uint32_t VAR_32)
{
 char VAR_33[1536];
 uint32_t VAR_34 = VAR_0;

 FUNC_3(VAR_33, 0, sizeof(VAR_33));


 FUNC_2(VAR_28, VAR_13, &VAR_34);
 FUNC_2(VAR_28, VAR_2,
    &VAR_29.counterselect);
 FUNC_2(VAR_28, VAR_20,
    &VAR_29.portxmitdata);
 FUNC_2(VAR_28, VAR_15,
    &VAR_29.portrcvdata);
 FUNC_2(VAR_28, VAR_23,
    &VAR_29.portxmitpkts);
 FUNC_2(VAR_28, VAR_17, &VAR_29.portrcvpkts);

 if (VAR_31 & VAR_26) {
  FUNC_2(VAR_28, VAR_24,
     &VAR_29.portunicastxmitpkts);
  FUNC_2(VAR_28, VAR_18,
     &VAR_29.portunicastrcvpkts);
  FUNC_2(VAR_28, VAR_22,
     &VAR_29.portmulticastxmitpkits);
  FUNC_2(VAR_28, VAR_16,
     &VAR_29.portmulticastrcvpkts);
 }

 if (FUNC_0(VAR_32) & VAR_27) {
  FUNC_2(VAR_28, VAR_1,
     &VAR_29.counterSelect2);
  FUNC_2(VAR_28, VAR_9,
     &VAR_29.symbolErrorCounter);
  FUNC_2(VAR_28, VAR_12,
     &VAR_29.linkErrorRecoveryCounter);
  FUNC_2(VAR_28, VAR_11,
     &VAR_29.linkDownedCounter);
  FUNC_2(VAR_28, VAR_7,
     &VAR_29.portRcvErrors);
  FUNC_2(VAR_28, VAR_5,
     &VAR_29.portRcvRemotePhysicalErrors);
  FUNC_2(VAR_28, VAR_8,
     &VAR_29.portRcvSwitchRelayErrors);
  FUNC_2(VAR_28, VAR_21,
     &VAR_29.portXmitDiscards);
  FUNC_2(VAR_28, VAR_10,
     &VAR_29.portXmitConstraintErrors);
  FUNC_2(VAR_28, VAR_6,
     &VAR_29.portRcvConstraintErrors);
  FUNC_2(VAR_28, VAR_4,
     &VAR_29.localLinkIntegrityErrors);
  FUNC_2(VAR_28, VAR_3,
     &VAR_29.excessiveBufferOverrunErrors);
  FUNC_2(VAR_28, VAR_19,
     &VAR_29.VL15Dropped);
  FUNC_2(VAR_28, VAR_25,
     &VAR_29.portXmitWait);
  FUNC_2(VAR_28, VAR_14,
     &VAR_29.QP1Dropped);
 }

 FUNC_1(VAR_33, sizeof VAR_33, VAR_28, sizeof VAR_28);

 FUNC_6("# Port extended counters: %s port %d (CapMask: 0x%02X CapMask2: 0x%07X)\n%s",
        FUNC_5(VAR_30), VAR_0, FUNC_4(VAR_31), VAR_32, VAR_33);
}

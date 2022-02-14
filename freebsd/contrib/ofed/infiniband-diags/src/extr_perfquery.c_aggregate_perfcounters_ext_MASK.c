
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint64_t ;
typedef void* uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int QP1Dropped; int portXmitWait; int VL15Dropped; int excessiveBufferOverrunErrors; int localLinkIntegrityErrors; int portRcvConstraintErrors; int portXmitConstraintErrors; int portXmitDiscards; int portRcvSwitchRelayErrors; int portRcvRemotePhysicalErrors; int portRcvErrors; int linkDownedCounter; int linkErrorRecoveryCounter; int symbolErrorCounter; void* counterSelect2; int portmulticastrcvpkts; int portmulticastxmitpkits; int portunicastrcvpkts; int portunicastxmitpkts; int portrcvpkts; int portxmitpkts; int portrcvdata; int portxmitdata; void* counterselect; void* portselect; } ;


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
 int FUNC_0 (int *,void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int ,void**) ;
 int VAR_27 ;
 TYPE_1__ VAR_28 ;

__attribute__((used)) static void FUNC_3(uint16_t VAR_29, uint32_t VAR_30)
{
 uint32_t VAR_31;
 uint64_t VAR_32;

 FUNC_2(VAR_27, VAR_12, &VAR_31);
 VAR_28.portselect = VAR_31;
 FUNC_2(VAR_27, VAR_1, &VAR_31);
 VAR_28.counterselect = VAR_31;
 FUNC_2(VAR_27, VAR_19, &VAR_32);
 FUNC_0(&VAR_28.portxmitdata, VAR_32);
 FUNC_2(VAR_27, VAR_14, &VAR_32);
 FUNC_0(&VAR_28.portrcvdata, VAR_32);
 FUNC_2(VAR_27, VAR_22, &VAR_32);
 FUNC_0(&VAR_28.portxmitpkts, VAR_32);
 FUNC_2(VAR_27, VAR_16, &VAR_32);
 FUNC_0(&VAR_28.portrcvpkts, VAR_32);

 if (VAR_29 & VAR_25) {
  FUNC_2(VAR_27, VAR_23, &VAR_32);
  FUNC_0(&VAR_28.portunicastxmitpkts, VAR_32);
  FUNC_2(VAR_27, VAR_17, &VAR_32);
  FUNC_0(&VAR_28.portunicastrcvpkts, VAR_32);
  FUNC_2(VAR_27, VAR_21, &VAR_32);
  FUNC_0(&VAR_28.portmulticastxmitpkits, VAR_32);
  FUNC_2(VAR_27, VAR_15, &VAR_32);
  FUNC_0(&VAR_28.portmulticastrcvpkts, VAR_32);
 }

 if (FUNC_1(VAR_30) & VAR_26) {
  FUNC_2(VAR_27, VAR_0, &VAR_31);
  VAR_28.counterSelect2 = VAR_31;
  FUNC_2(VAR_27, VAR_8, &VAR_32);
  FUNC_0(&VAR_28.symbolErrorCounter, VAR_32);
  FUNC_2(VAR_27, VAR_11, &VAR_32);
  FUNC_0(&VAR_28.linkErrorRecoveryCounter, VAR_32);
  FUNC_2(VAR_27, VAR_10, &VAR_32);
  FUNC_0(&VAR_28.linkDownedCounter, VAR_32);
  FUNC_2(VAR_27, VAR_6, &VAR_32);
  FUNC_0(&VAR_28.portRcvErrors, VAR_32);
  FUNC_2(VAR_27, VAR_4, &VAR_32);
  FUNC_0(&VAR_28.portRcvRemotePhysicalErrors, VAR_32);
  FUNC_2(VAR_27, VAR_7, &VAR_32);
  FUNC_0(&VAR_28.portRcvSwitchRelayErrors, VAR_32);
  FUNC_2(VAR_27, VAR_20, &VAR_32);
  FUNC_0(&VAR_28.portXmitDiscards, VAR_32);
  FUNC_2(VAR_27, VAR_9, &VAR_32);
  FUNC_0(&VAR_28.portXmitConstraintErrors, VAR_32);
  FUNC_2(VAR_27, VAR_5, &VAR_32);
  FUNC_0(&VAR_28.portRcvConstraintErrors, VAR_32);
  FUNC_2(VAR_27, VAR_3, &VAR_32);
  FUNC_0(&VAR_28.localLinkIntegrityErrors, VAR_32);
  FUNC_2(VAR_27, VAR_2, &VAR_32);
  FUNC_0(&VAR_28.excessiveBufferOverrunErrors, VAR_32);
  FUNC_2(VAR_27, VAR_18, &VAR_32);
  FUNC_0(&VAR_28.VL15Dropped, VAR_32);
  FUNC_2(VAR_27, VAR_24, &VAR_32);
  FUNC_0(&VAR_28.portXmitWait, VAR_32);
  FUNC_2(VAR_27, VAR_13, &VAR_32);
  FUNC_0(&VAR_28.QP1Dropped, VAR_32);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int ue_dev; int ue_udev; int ue_eaddr; } ;
struct smsc_softc {int sc_rev_id; int sc_mac_csr; TYPE_1__ sc_ue; int sc_mtx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_0 (struct smsc_softc*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (struct smsc_softc*) ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct smsc_softc*,char*,int) ;
 int FUNC_5 (struct smsc_softc*) ;
 int FUNC_6 (struct smsc_softc*,int ,int*) ;
 int FUNC_7 (struct smsc_softc*,int ) ;
 int FUNC_8 (struct smsc_softc*,int ,int) ;
 int FUNC_9 (struct smsc_softc*,char*,...) ;
 int FUNC_10 (struct smsc_softc*,int ,int) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(struct smsc_softc *VAR_30)
{
 int VAR_31;
 int VAR_32;
 uint32_t VAR_33;
 int VAR_34;

 VAR_32 = FUNC_3(&VAR_30->sc_mtx);
 if (!VAR_32)
  FUNC_0(VAR_30);


 FUNC_10(VAR_30, VAR_7, VAR_10);

 if ((VAR_31 = FUNC_8(VAR_30, VAR_7, VAR_10)) != 0) {
  FUNC_9(VAR_30, "timed-out waiting for reset to complete\n");
  goto init_failed;
 }


 FUNC_10(VAR_30, VAR_24, VAR_25);

 if ((VAR_31 = FUNC_8(VAR_30, VAR_24, VAR_25)) != 0) {
  FUNC_9(VAR_30, "timed-out waiting for phy reset to complete\n");
  goto init_failed;
 }


 if ((VAR_31 = FUNC_7(VAR_30, VAR_30->sc_ue.ue_eaddr)) != 0) {
  FUNC_9(VAR_30, "failed to set the MAC address\n");
  goto init_failed;
 }




 if ((VAR_31 = FUNC_6(VAR_30, VAR_7, &VAR_33)) != 0) {
  FUNC_9(VAR_30, "failed to read HW_CFG: %d\n", VAR_31);
  goto init_failed;
 }
 VAR_33 |= VAR_9;
 FUNC_10(VAR_30, VAR_7, VAR_33);
 if (FUNC_11(VAR_30->sc_ue.ue_udev) == VAR_29)
  VAR_34 = 37;
 else
  VAR_34 = 128;

 FUNC_10(VAR_30, VAR_5, VAR_34);


 FUNC_10(VAR_30, VAR_4, 0x00002000);






 if ((VAR_31 = FUNC_6(VAR_30, VAR_7, &VAR_33)) < 0) {
  FUNC_9(VAR_30, "failed to read HW_CFG: (err = %d)\n", VAR_31);
  goto init_failed;
 }




 VAR_33 &= ~VAR_12;
 VAR_33 |= (VAR_2 << 9) & VAR_12;




 VAR_33 |= (VAR_11 | VAR_8);

 FUNC_10(VAR_30, VAR_7, VAR_33);


 FUNC_10(VAR_30, VAR_16, 0xffffffff);


 if ((VAR_31 = FUNC_6(VAR_30, VAR_13, &VAR_30->sc_rev_id)) < 0) {
  FUNC_9(VAR_30, "failed to read ID_REV (err = %d)\n", VAR_31);
  goto init_failed;
 }

 FUNC_2(VAR_30->sc_ue.ue_dev, "chip 0x%04lx, rev. %04lx\n",
     (VAR_30->sc_rev_id & VAR_14) >> 16,
     (VAR_30->sc_rev_id & VAR_15));


 VAR_33 = VAR_20 | VAR_19 |
           VAR_18;
 FUNC_10(VAR_30, VAR_17, VAR_33);




 FUNC_10(VAR_30, VAR_6, 0);

 FUNC_10(VAR_30, VAR_3, VAR_0);


 if ((VAR_31 = FUNC_6(VAR_30, VAR_21, &VAR_30->sc_mac_csr)) < 0) {
  FUNC_9(VAR_30, "failed to read MAC_CSR (err=%d)\n", VAR_31);
  goto init_failed;
 }


 FUNC_10(VAR_30, VAR_28, (uint32_t)VAR_1);




 if ((VAR_31 = FUNC_5(VAR_30)) != 0)
  goto init_failed;





 VAR_30->sc_mac_csr |= VAR_23;
 FUNC_10(VAR_30, VAR_21, VAR_30->sc_mac_csr);
 FUNC_10(VAR_30, VAR_26, VAR_27);




 VAR_30->sc_mac_csr |= VAR_22;
 FUNC_10(VAR_30, VAR_21, VAR_30->sc_mac_csr);

 if (!VAR_32)
  FUNC_1(VAR_30);

 return (0);

init_failed:
 if (!VAR_32)
  FUNC_1(VAR_30);

 FUNC_4(VAR_30, "smsc_chip_init failed (err=%d)\n", VAR_31);
 return (VAR_31);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncr53c9x_softc {int sc_id; int sc_cfg1; int sc_cfg2; int sc_cfg3; int sc_cfg4; int sc_features; int sc_freq; int sc_minsync; int sc_maxoffset; int sc_extended_geom; int sc_dev; int sc_lock; int sc_maxxfer; int sc_cfg3_fscsi; int sc_rev; int * sc_glue; } ;
struct esp_pci_softc {int * sc_res; int sc_pdmat; int sc_xferdmat; int sc_xferdmam; int sc_ih; int sc_dev; struct ncr53c9x_softc sc_ncr53c9x; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
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
 int FUNC_0 (struct ncr53c9x_softc*) ;
 int FUNC_1 (struct ncr53c9x_softc*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ,int,int *,int ,struct ncr53c9x_softc*,int *) ;
 int FUNC_10 (int ,int ,int ) ;
 int * VAR_22 ;
 struct esp_pci_softc* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_13 (struct ncr53c9x_softc*) ;
 int VAR_25 ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_26)
{
 struct esp_pci_softc *VAR_27;
 struct ncr53c9x_softc *VAR_28;
 int VAR_29;

 VAR_27 = FUNC_11(VAR_26);
 VAR_28 = &VAR_27->sc_ncr53c9x;

 FUNC_1(VAR_28);

 VAR_27->sc_dev = VAR_26;
 VAR_28->sc_glue = &VAR_23;

 FUNC_14(VAR_26);

 VAR_29 = FUNC_2(VAR_26, VAR_24, VAR_27->sc_res);
 if (VAR_29 != 0) {
  FUNC_12(VAR_26, "failed to allocate resources\n");
  FUNC_8(VAR_26, VAR_24, VAR_27->sc_res);
  return (VAR_29);
 }

 VAR_29 = FUNC_3(FUNC_7(VAR_26), 1, 0,
     VAR_2, VAR_1, ((void*)0), ((void*)0),
     VAR_3, VAR_4,
     VAR_3, 0, ((void*)0), ((void*)0), &VAR_27->sc_pdmat);
 if (VAR_29 != 0) {
  FUNC_12(VAR_26, "cannot create parent DMA tag\n");
  goto fail_res;
 }
 VAR_28->sc_id = 7;
 VAR_28->sc_cfg1 = VAR_28->sc_id | VAR_15;
 VAR_28->sc_cfg2 = VAR_17 | VAR_16;
 VAR_28->sc_cfg3 = VAR_12 | VAR_10;
 VAR_28->sc_cfg4 = VAR_13 | VAR_14;
 VAR_28->sc_rev = VAR_20;
 VAR_28->sc_features = VAR_19 | VAR_18;
 VAR_28->sc_cfg3_fscsi = VAR_11;
 VAR_28->sc_freq = 40;
 VAR_28->sc_minsync = 1000 / VAR_28->sc_freq;

 VAR_28->sc_maxxfer = VAR_5;
 VAR_28->sc_maxoffset = 15;
 VAR_28->sc_extended_geom = 1;
 VAR_29 = FUNC_3(VAR_27->sc_pdmat, VAR_21, 0,
     VAR_2, VAR_1, ((void*)0), ((void*)0),
     0x1000, 1, 0x1000, VAR_0,
     VAR_22, &VAR_28->sc_lock, &VAR_27->sc_xferdmat);
 if (VAR_29 != 0) {
  FUNC_12(VAR_26, "cannot create transfer DMA tag\n");
  goto fail_pdmat;
 }
 VAR_29 = FUNC_5(VAR_27->sc_xferdmat, 0, &VAR_27->sc_xferdmam);
 if (VAR_29 != 0) {
  FUNC_12(VAR_26, "cannot create transfer DMA map\n");
  goto fail_xferdmat;
 }

 VAR_29 = FUNC_9(VAR_26, VAR_27->sc_res[VAR_6],
     VAR_7 | VAR_8, ((void*)0), VAR_25, VAR_28,
     &VAR_27->sc_ih);
 if (VAR_29 != 0) {
  FUNC_12(VAR_26, "cannot set up interrupt\n");
  goto fail_xferdmam;
 }


 VAR_28->sc_dev = VAR_27->sc_dev;
 VAR_29 = FUNC_13(VAR_28);
 if (VAR_29 != 0) {
  FUNC_12(VAR_27->sc_dev, "ncr53c9x_attach failed\n");
  goto fail_intr;
 }

 return (0);

 fail_intr:
  FUNC_10(VAR_27->sc_dev, VAR_27->sc_res[VAR_6],
     VAR_27->sc_ih);
 fail_xferdmam:
 FUNC_6(VAR_27->sc_xferdmat, VAR_27->sc_xferdmam);
 fail_xferdmat:
 FUNC_4(VAR_27->sc_xferdmat);
 fail_pdmat:
 FUNC_4(VAR_27->sc_pdmat);
 fail_res:
 FUNC_8(VAR_26, VAR_24, VAR_27->sc_res);
 FUNC_0(VAR_28);

 return (VAR_29);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct hme_softc {int sc_burst; int sc_lock; int sc_enaddr; int sc_mifh; int sc_mach; int sc_erxh; int sc_etxh; int sc_sebh; int sc_mift; int sc_mact; int sc_erxt; int sc_etxt; int sc_sebt; int sc_flags; int * sc_dev; } ;
struct hme_pci_softc {struct resource* hsc_sres; struct resource* hsc_ires; int hsc_ih; struct hme_softc hsc_hme; } ;
typedef int * device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 void* FUNC_7 (int *,int ,int*,int) ;
 int FUNC_8 (int *,int ,int ,struct resource*) ;
 int FUNC_9 (int *,struct resource*,int,int *,int ,struct hme_softc*,int *) ;
 int FUNC_10 (int ,int ,scalar_t__,int ,int) ;
 int FUNC_11 (int ,int ,int,int,int *) ;
 scalar_t__ FUNC_12 (int ,int ***,int*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct hme_pci_softc* FUNC_15 (int *) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (int **,int ) ;
 int FUNC_18 (struct hme_softc*) ;
 int FUNC_19 (struct hme_softc*) ;
 int VAR_35 ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ,int ,int ) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *,int) ;
 int FUNC_29 (struct resource*) ;
 int FUNC_30 (struct resource*) ;
 int FUNC_31 (struct resource*) ;

int
FUNC_32(device_t VAR_36)
{
 struct hme_pci_softc *VAR_37;
 struct hme_softc *VAR_38;
 bus_space_tag_t VAR_39;
 bus_space_handle_t VAR_40;
 int VAR_41, VAR_42 = 0;

 device_t *VAR_43, VAR_44;
 struct resource *VAR_45;
 int VAR_46, VAR_47;


 FUNC_22(VAR_36);




 if (FUNC_25(VAR_36) == 0)
  FUNC_28(VAR_36, 1);

 VAR_37 = FUNC_15(VAR_36);
 VAR_38 = &VAR_37->hsc_hme;
 VAR_38->sc_dev = VAR_36;
 VAR_38->sc_flags |= VAR_2;
 FUNC_21(&VAR_38->sc_lock, FUNC_13(VAR_36), VAR_6,
     VAR_5);
 VAR_41 = FUNC_4(0);
 VAR_37->hsc_sres = FUNC_7(VAR_36, VAR_34,
     &VAR_41, VAR_31);
 if (VAR_37->hsc_sres == ((void*)0)) {
  FUNC_16(VAR_36, "could not map device registers\n");
  VAR_42 = VAR_0;
  goto fail_mtx;
 }
 VAR_41 = 0;
 VAR_37->hsc_ires = FUNC_7(VAR_36, VAR_33,
     &VAR_41, VAR_32 | VAR_31);
 if (VAR_37->hsc_ires == ((void*)0)) {
  FUNC_16(VAR_36, "could not allocate interrupt\n");
  VAR_42 = VAR_0;
  goto fail_sres;
 }
 VAR_39 = FUNC_30(VAR_37->hsc_sres);
 VAR_40 = FUNC_29(VAR_37->hsc_sres);
 VAR_38->sc_sebt = VAR_38->sc_etxt = VAR_38->sc_erxt = VAR_38->sc_mact = VAR_38->sc_mift =
     VAR_39;
 FUNC_11(VAR_39, VAR_40, 0x0000, 0x1000, &VAR_38->sc_sebh);
 FUNC_11(VAR_39, VAR_40, 0x2000, 0x1000, &VAR_38->sc_etxh);
 FUNC_11(VAR_39, VAR_40, 0x4000, 0x1000, &VAR_38->sc_erxh);
 FUNC_11(VAR_39, VAR_40, 0x6000, 0x1000, &VAR_38->sc_mach);
 FUNC_11(VAR_39, VAR_40, 0x7000, 0x1000, &VAR_38->sc_mifh);
 VAR_47 = FUNC_26(VAR_36);
 if (FUNC_12(FUNC_14(VAR_36), &VAR_43, &VAR_41) != 0) {
  FUNC_16(VAR_36, "could not get children\n");
  VAR_42 = VAR_0;
  goto fail_sres;
 }
 VAR_44 = ((void*)0);
 for (VAR_46 = 0; VAR_46 < VAR_41; VAR_46++) {
  if (FUNC_23(VAR_43[VAR_46]) == VAR_8 &&
      FUNC_27(VAR_43[VAR_46]) == VAR_20 &&
      FUNC_24(VAR_43[VAR_46]) == VAR_9 &&
      FUNC_26(VAR_43[VAR_46]) == VAR_47) {
   VAR_44 = VAR_43[VAR_46];
   break;
  }
 }
 if (VAR_44 == ((void*)0)) {
  FUNC_16(VAR_36, "could not find EBus bridge\n");
  VAR_42 = VAR_0;
  goto fail_children;
 }


 VAR_41 = FUNC_4(0);
 if ((VAR_45 = FUNC_7(VAR_44, VAR_34,
     &VAR_41, VAR_31)) == ((void*)0)) {
  FUNC_16(VAR_36, "could not map PROM registers\n");
  VAR_42 = VAR_0;
  goto fail_children;
 }
 VAR_39 = FUNC_30(VAR_45);
 VAR_40 = FUNC_29(VAR_45);


 if (FUNC_0 (VAR_39, VAR_40, ((0x00))) != 0xaa55 ||
     (VAR_41 = FUNC_0 (VAR_39, VAR_40, ((0x18)))) < 0x1c) {
  FUNC_16(VAR_36, "unexpected PCI Expansion ROM header\n");
  VAR_42 = VAR_0;
  goto fail_rres;
 }


 if (FUNC_0 (VAR_39, VAR_40, ((VAR_41 + 0x00))) != 0x52494350 ||
     FUNC_0 (VAR_39, VAR_40, ((VAR_41 + 0x04))) != FUNC_27(VAR_36) ||
     FUNC_0 (VAR_39, VAR_40, ((VAR_41 + 0x06))) != FUNC_24(VAR_36) ||
     (VAR_46 = FUNC_0 (VAR_39, VAR_40, ((VAR_41 + 0x08)))) < VAR_41 + 0x18) {
  FUNC_16(VAR_36, "unexpected PCI Expansion ROM data\n");
  VAR_42 = VAR_0;
  goto fail_rres;
 }
 if (FUNC_0 (VAR_39, VAR_40, ((VAR_46 + 0x03 + 0x03 + VAR_1))) != 0x79 &&

     FUNC_0 (VAR_39, VAR_40, ((VAR_46 + 4 * (0x03 + 0x03 + VAR_1)))) == 0x79)


  VAR_46 += VAR_47 * (0x03 + 0x03 +
      VAR_1);
 if (((FUNC_0 (VAR_39, VAR_40, ((VAR_46 + 0x00)))) & 0x80) == 0 ||
     ((FUNC_0 (VAR_39, VAR_40, ((VAR_46 + 0x00)))) & 0x7f) !=
     0x10 ||
     (FUNC_0 (VAR_39, VAR_40, ((VAR_46 + 0x01))) << 8 |
     FUNC_0 (VAR_39, VAR_40, ((VAR_46 + 0x02)))) !=
     0x03 + VAR_1 ||
     FUNC_0 (VAR_39, VAR_40, ((VAR_46 + 0x03 + 0x00))) !=
     0x4e ||
     FUNC_0 (VAR_39, VAR_40, ((VAR_46 + 0x03 + 0x01))) !=
     0x41 ||
     FUNC_0 (VAR_39, VAR_40, ((VAR_46 + 0x03 + 0x02))) !=
     VAR_1) {
  FUNC_16(VAR_36, "unexpected PCI VPD\n");
  VAR_42 = VAR_0;
  goto fail_rres;
 }
 FUNC_10(VAR_39, VAR_40, VAR_46 + 0x03 +
     0x03, VAR_38->sc_enaddr, VAR_1);

fail_rres:
 FUNC_8(VAR_44, VAR_34,
     FUNC_31(VAR_45), VAR_45);
fail_children:
 FUNC_17(VAR_43, VAR_7);
 if (VAR_42 != 0)
  goto fail_sres;


 VAR_38->sc_burst = 64;




 if ((VAR_42 = FUNC_18(VAR_38)) != 0) {
  FUNC_16(VAR_36, "could not be configured\n");
  goto fail_ires;
 }

 if ((VAR_42 = FUNC_9(VAR_36, VAR_37->hsc_ires, VAR_4 |
     VAR_3, ((void*)0), VAR_35, VAR_38, &VAR_37->hsc_ih)) != 0) {
  FUNC_16(VAR_36, "couldn't establish interrupt\n");
  FUNC_19(VAR_38);
  goto fail_ires;
 }
 return (0);

fail_ires:
 FUNC_8(VAR_36, VAR_33,
     FUNC_31(VAR_37->hsc_ires), VAR_37->hsc_ires);
fail_sres:
 FUNC_8(VAR_36, VAR_34,
     FUNC_31(VAR_37->hsc_sres), VAR_37->hsc_sres);
fail_mtx:
 FUNC_20(&VAR_38->sc_lock);
 return (VAR_42);
}

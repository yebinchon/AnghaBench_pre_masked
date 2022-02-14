
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mv_pcib_softc {int ap_segment; int sc_skip_enable_procedure; int sc_enable_find_root_slot; scalar_t__ sc_mode; int sc_busnr; int sc_devnr; int sc_io_rman; int sc_mem_rman; int sc_msi_mtx; int sc_bsh; int sc_bst; int sc_dev; int sc_pci_iinfo; int * sc_res; scalar_t__ sc_rid; int sc_io_win_attr; int sc_mem_win_attr; int sc_win_target; void* sc_type; } ;
typedef int port_id ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int ,char*,int*,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * FUNC_9 (int ,int ,scalar_t__*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ,int) ;
 int FUNC_13 (int ,char*,int) ;
 struct mv_pcib_softc* FUNC_14 (int ) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_17 (int ,struct mv_pcib_softc*) ;
 int FUNC_18 (struct mv_pcib_softc*,int) ;
 int FUNC_19 () ;
 int FUNC_20 (struct mv_pcib_softc*,int,int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct mv_pcib_softc*) ;
 int FUNC_23 (int ,int,int,int,int,int) ;
 int FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (int ,char*) ;
 int FUNC_26 (int ,int *,int) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static int
FUNC_30(device_t VAR_16)
{
 struct mv_pcib_softc *VAR_17;
 phandle_t VAR_18, VAR_19;
 uint32_t VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_17 = FUNC_14(VAR_16);
 VAR_17->sc_dev = VAR_16;

 VAR_18 = FUNC_24(VAR_16);
 VAR_19 = FUNC_8(VAR_18);

 if (FUNC_6(VAR_18, "marvell,pcie-port", &(VAR_25),
     sizeof(VAR_25)) <= 0) {

  if (!FUNC_7(VAR_18, "marvell,pcie-port"))
   VAR_25 = 0;
  else
   return(VAR_0);
 }

 VAR_17->ap_segment = VAR_25;

 if (FUNC_25(VAR_18, "mrvl,pcie")) {
  VAR_17->sc_type = VAR_5;
  VAR_17->sc_win_target = FUNC_4(VAR_25);
  VAR_17->sc_mem_win_attr = FUNC_2(VAR_25);
  VAR_17->sc_io_win_attr = FUNC_0(VAR_25);



 } else if (FUNC_25(VAR_19, "marvell,armada-370-pcie")) {
  VAR_17->sc_type = VAR_5;
  VAR_17->sc_win_target = FUNC_5(VAR_25);
  VAR_17->sc_mem_win_attr = FUNC_3(VAR_25);
  VAR_17->sc_io_win_attr = FUNC_1(VAR_25);
  VAR_17->sc_enable_find_root_slot = 1;
 } else if (FUNC_25(VAR_18, "mrvl,pci")) {
  VAR_17->sc_type = VAR_4;
  VAR_17->sc_win_target = VAR_8;
  VAR_17->sc_mem_win_attr = VAR_7;
  VAR_17->sc_io_win_attr = VAR_6;
 } else
  return (VAR_0);




 VAR_17->sc_rid = 0;
 VAR_17->sc_res = FUNC_9(VAR_16, VAR_15, &VAR_17->sc_rid,
     VAR_14);
 if (VAR_17->sc_res == ((void*)0)) {
  FUNC_15(VAR_16, "could not map memory\n");
  return (VAR_0);
 }
 VAR_17->sc_bst = FUNC_29(VAR_17->sc_res);
 VAR_17->sc_bsh = FUNC_28(VAR_17->sc_res);

 VAR_20 = FUNC_11(VAR_17->sc_bst, VAR_17->sc_bsh, VAR_10);
 VAR_17->sc_mode = (VAR_20 & VAR_9 ? VAR_3 :
     VAR_2);




 if (VAR_17->sc_mode == VAR_3)
  FUNC_26(VAR_18, &VAR_17->sc_pci_iinfo, sizeof(pcell_t));




 if (FUNC_17(VAR_18, VAR_17) != 0)
  return (VAR_0);

 FUNC_19();




 FUNC_18(VAR_17, VAR_25);




 VAR_22 = FUNC_22(VAR_17);
 if (VAR_22)
  return (VAR_22);





 for (VAR_23 = 0; VAR_23 < VAR_13; VAR_23++) {
  for (VAR_24 = 0; VAR_24 < FUNC_21(VAR_16); VAR_24++) {
   VAR_21 = FUNC_23(VAR_16, VAR_23, VAR_24, VAR_24 & 0x7, 0x0, 4);
   if (VAR_21 == (~0U))
    continue;
   else {
    VAR_17->sc_busnr = VAR_23;
    break;
   }
  }
 }

 if (VAR_17->sc_mode == VAR_3) {
  VAR_22 = FUNC_20(VAR_17, VAR_17->sc_busnr,
      FUNC_21(VAR_17->sc_dev));
  if (VAR_22)
   goto error;

  FUNC_13(VAR_16, "pci", -1);
 } else {
  VAR_17->sc_devnr = 1;
  FUNC_12(VAR_17->sc_bst, VAR_17->sc_bsh,
      VAR_11, 1 << VAR_12);
  FUNC_13(VAR_16, "pci_ep", -1);
 }

 FUNC_16(&VAR_17->sc_msi_mtx, "msi_mtx", ((void*)0), VAR_1);
 return (FUNC_10(VAR_16));

error:

 FUNC_27(&VAR_17->sc_mem_rman);
 FUNC_27(&VAR_17->sc_io_rman);

 return (VAR_22);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint32_t ;
struct usb_page_search {int physaddr; } ;
struct TYPE_9__ {int bulk_start_pc; int ctrl_start_pc; int hcca_pc; } ;
struct TYPE_8__ {int bdev; } ;
struct TYPE_10__ {int sc_eintrs; scalar_t__ sc_noport; TYPE_2__ sc_hw; TYPE_1__ sc_bus; } ;
typedef TYPE_3__ ohci_softc_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
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
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
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
 int FUNC_5 (int) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int VAR_35 ;
 int FUNC_11 (TYPE_3__*) ;
 int VAR_36 ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int ,struct usb_page_search*) ;

__attribute__((used)) static usb_error_t
FUNC_14(ohci_softc_t *VAR_37, int VAR_38)
{
 struct usb_page_search VAR_39;
 uint32_t VAR_40;
 uint32_t VAR_41;
 uint32_t VAR_42;
 uint32_t VAR_43;
 uint32_t VAR_44;
 uint32_t VAR_45;
 uint32_t VAR_46;


 VAR_41 = FUNC_6(VAR_37, VAR_6);
 if (VAR_41 & VAR_20) {

  FUNC_1("SMM active, request owner change\n");
  FUNC_7(VAR_37, VAR_5, VAR_25);
  for (VAR_40 = 0; (VAR_40 < 100) && (VAR_41 & VAR_20); VAR_40++) {
   FUNC_12(((void*)0), VAR_35 / 1000);
   VAR_41 = FUNC_6(VAR_37, VAR_6);
  }
  if (VAR_41 & VAR_20) {
   FUNC_10(VAR_37->sc_bus.bdev,
       "SMM does not respond, resetting\n");
   FUNC_7(VAR_37, VAR_6, VAR_14);
   goto reset;
  }
 } else {
  FUNC_1("cold started\n");
reset:

  FUNC_12(((void*)0),
      FUNC_8(VAR_32));
 }





 FUNC_1("%s: resetting\n", FUNC_9(VAR_37->sc_bus.bdev));
 FUNC_7(VAR_37, VAR_6, VAR_14);

 FUNC_12(((void*)0),
     FUNC_8(VAR_32));


 VAR_42 = FUNC_3(FUNC_6(VAR_37, VAR_10));

 FUNC_7(VAR_37, VAR_5, VAR_16);

 for (VAR_40 = 0; VAR_40 < 10; VAR_40++) {
  FUNC_0(10);
  VAR_43 = FUNC_6(VAR_37, VAR_5) & VAR_16;
  if (!VAR_43) {
   break;
  }
 }
 if (VAR_43) {
  FUNC_10(VAR_37->sc_bus.bdev, "reset timeout\n");
  return (VAR_33);
 }






 if (VAR_38) {
  FUNC_7(VAR_37, VAR_6, VAR_15);
  return (VAR_34);
 }




 FUNC_13(&VAR_37->sc_hw.hcca_pc, 0, &VAR_39);
 FUNC_7(VAR_37, VAR_11, VAR_39.physaddr);

 FUNC_13(&VAR_37->sc_hw.ctrl_start_pc, 0, &VAR_39);
 FUNC_7(VAR_37, VAR_7, VAR_39.physaddr);

 FUNC_13(&VAR_37->sc_hw.bulk_start_pc, 0, &VAR_39);
 FUNC_7(VAR_37, VAR_2, VAR_39.physaddr);


 FUNC_7(VAR_37, VAR_18, VAR_0);
 FUNC_7(VAR_37, VAR_19, VAR_37->sc_eintrs | VAR_23);

 VAR_41 = FUNC_6(VAR_37, VAR_6);
 VAR_41 &= ~(VAR_3 | VAR_21 | VAR_12 | VAR_20);
 VAR_41 |= VAR_27 | VAR_17 | VAR_4 | VAR_1 |
     VAR_28 | VAR_13;

 FUNC_7(VAR_37, VAR_6, VAR_41);






 VAR_44 = (FUNC_6(VAR_37, VAR_10) & VAR_9) ^ VAR_9;
 VAR_44 |= FUNC_2(VAR_42) | VAR_42;
 FUNC_7(VAR_37, VAR_10, VAR_44);
 VAR_45 = FUNC_5(VAR_42);
 FUNC_7(VAR_37, VAR_26, VAR_45);


 VAR_46 = FUNC_6(VAR_37, VAR_30);
 FUNC_7(VAR_37, VAR_30, VAR_46 | VAR_24);
 FUNC_7(VAR_37, VAR_31, VAR_22);
 FUNC_12(((void*)0),
     FUNC_8(VAR_8));
 FUNC_7(VAR_37, VAR_30, VAR_46);





 VAR_37->sc_noport = 0;
 for (VAR_40 = 0; (VAR_40 < 10) && (VAR_37->sc_noport == 0); VAR_40++) {
  FUNC_12(((void*)0),
      FUNC_8(VAR_29));
  VAR_37->sc_noport = FUNC_4(FUNC_6(VAR_37, VAR_30));
 }






 return (VAR_34);
}

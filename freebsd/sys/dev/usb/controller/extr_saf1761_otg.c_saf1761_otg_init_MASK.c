
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint32_t ;
struct usb_hw_ep_profile {unsigned int max_in_frame_size; unsigned int max_out_frame_size; } ;
struct TYPE_4__ {int bus_mtx; int * methods; int usbrev; } ;
struct saf1761_otg_softc {int sc_hw_mode; int sc_interrupt_cfg; int sc_intr_enable; TYPE_1__ sc_bus; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 unsigned int FUNC_2 (struct saf1761_otg_softc*,int) ;
 int FUNC_3 (struct saf1761_otg_softc*,int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_4 (int) ;
 int VAR_8 ;
 unsigned int FUNC_5 (int) ;
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
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 unsigned int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 unsigned int FUNC_6 (int) ;
 unsigned int FUNC_7 (int) ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 unsigned int VAR_53 ;
 unsigned int VAR_54 ;
 unsigned int VAR_55 ;
 unsigned int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 unsigned int VAR_60 ;
 unsigned int VAR_61 ;
 int VAR_62 ;
 unsigned int VAR_63 ;
 int VAR_64 ;
 unsigned int VAR_65 ;
 unsigned int VAR_66 ;
 int VAR_67 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *,struct usb_hw_ep_profile const**,int) ;
 int FUNC_12 (struct saf1761_otg_softc*) ;
 int FUNC_13 (struct saf1761_otg_softc*) ;
 int FUNC_14 (int *,int) ;

usb_error_t
FUNC_15(struct saf1761_otg_softc *VAR_71)
{
 const struct usb_hw_ep_profile *VAR_72;
 uint32_t VAR_73;

 FUNC_1("\n");


 VAR_71->sc_bus.usbrev = VAR_68;
 VAR_71->sc_bus.methods = &VAR_70;

 FUNC_8(&VAR_71->sc_bus);


 FUNC_3(VAR_71, VAR_59, VAR_60);

 FUNC_0(1000);


 FUNC_3(VAR_71, VAR_59, VAR_61);


 FUNC_0(1000);

 FUNC_3(VAR_71, VAR_59, 0);


 FUNC_0(1000);


 VAR_71->sc_hw_mode |= VAR_36 |
     VAR_35;


 FUNC_3(VAR_71, VAR_62, VAR_63);





 FUNC_3(VAR_71, VAR_33, VAR_71->sc_hw_mode);
 FUNC_3(VAR_71, VAR_33, VAR_71->sc_hw_mode);

 FUNC_3(VAR_71, VAR_17, 0xdeadbeef);
 FUNC_3(VAR_71, VAR_32, 0xdeadbeef);

 FUNC_1("DCID=0x%08x VEND_PROD=0x%08x HWMODE=0x%08x SCRATCH=0x%08x,0x%08x\n",
     FUNC_2(VAR_71, VAR_12),
     FUNC_2(VAR_71, VAR_67),
     FUNC_2(VAR_71, VAR_33),
     FUNC_2(VAR_71, VAR_17),
     FUNC_2(VAR_71, VAR_32));


 FUNC_3(VAR_71, VAR_52, VAR_55);
 FUNC_3(VAR_71, VAR_52, 0);


 FUNC_0(1000);


 FUNC_3(VAR_71, VAR_64, VAR_65);


 for (VAR_73 = 0; VAR_73 != 10; VAR_73++) {
  if ((FUNC_2(VAR_71, VAR_64) & VAR_65) == 0)
   break;
  FUNC_14(&VAR_71->sc_bus.bus_mtx, VAR_69 / 10);
 }

 FUNC_3(VAR_71, VAR_33, VAR_71->sc_hw_mode |
     VAR_34);


 FUNC_0(1000);

 FUNC_3(VAR_71, VAR_33, VAR_71->sc_hw_mode);


 FUNC_0(1000);


 FUNC_12(VAR_71);


 FUNC_14(&VAR_71->sc_bus.bus_mtx, VAR_69 / 100);

 for (VAR_73 = 1;; VAR_73++) {

  FUNC_11(((void*)0), &VAR_72, VAR_73);
  if (VAR_72 == ((void*)0))
   break;


  FUNC_3(VAR_71, VAR_18,
      (VAR_73 << VAR_21) |
      VAR_19);


  FUNC_3(VAR_71, VAR_22, VAR_72->max_in_frame_size);


  FUNC_3(VAR_71, VAR_18,
      (VAR_73 << VAR_21) |
      VAR_20);


  FUNC_3(VAR_71, VAR_22, VAR_72->max_out_frame_size);
 }


 FUNC_3(VAR_71, VAR_52, VAR_54 |
     VAR_53 | VAR_56);

 VAR_71->sc_interrupt_cfg |=
     VAR_38 |
     VAR_39 |
     VAR_40;


 FUNC_3(VAR_71, VAR_37, VAR_71->sc_interrupt_cfg);


 FUNC_3(VAR_71, VAR_45,
     FUNC_6(0xFFFF));
 FUNC_3(VAR_71, VAR_45,
     FUNC_7(VAR_46 | VAR_47));


 VAR_71->sc_intr_enable = VAR_16 |
     VAR_14 | VAR_15;
 FUNC_3(VAR_71, VAR_13, VAR_71->sc_intr_enable);





 FUNC_3(VAR_71, VAR_9,
     FUNC_4(0xFFFF));




 FUNC_3(VAR_71, VAR_9,
     FUNC_5(VAR_10 |
     VAR_7 | VAR_8 |
     VAR_11));


 FUNC_3(VAR_71, VAR_0, 0);


 VAR_73 = FUNC_2(VAR_71, VAR_57);
 FUNC_3(VAR_71, VAR_57, VAR_73 | VAR_58);


 FUNC_14(&VAR_71->sc_bus.bus_mtx, VAR_69 / 100);


 FUNC_3(VAR_71, VAR_5, VAR_6);


 for (VAR_73 = 0x400; VAR_73 != 0x10000; VAR_73 += 4)
  FUNC_3(VAR_71, VAR_73, 0);


 FUNC_3(VAR_71, VAR_64, VAR_66);

 FUNC_1("USBCMD=0x%08x\n", FUNC_2(VAR_71, VAR_64));


 FUNC_3(VAR_71, VAR_3, (1 << 31));
 FUNC_3(VAR_71, VAR_43, (1 << 31));
 FUNC_3(VAR_71, VAR_50, (1 << 31));


 FUNC_3(VAR_71, VAR_4, -1U);
 FUNC_3(VAR_71, VAR_44, -1U);
 FUNC_3(VAR_71, VAR_51, -1U);


 FUNC_3(VAR_71, VAR_23,
     VAR_26 |
     VAR_25 |
     VAR_24);


 FUNC_3(VAR_71, VAR_48, 0);
 FUNC_3(VAR_71, VAR_41, 0);
 FUNC_3(VAR_71, VAR_1, 0);


 FUNC_3(VAR_71, VAR_49, -1U);
 FUNC_3(VAR_71, VAR_42, -1U);
 FUNC_3(VAR_71, VAR_2, -1U);


 FUNC_3(VAR_71, VAR_28,
     VAR_31 |
     VAR_30 |
     VAR_27 |
     VAR_29);


 FUNC_13(VAR_71);

 FUNC_9(&VAR_71->sc_bus);



 FUNC_10(&VAR_71->sc_bus);

 return (0);
}

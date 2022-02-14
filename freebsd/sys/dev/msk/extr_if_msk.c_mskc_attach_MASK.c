
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msk_softc {scalar_t__ msk_res_spec; scalar_t__ msk_irq_spec; int msk_hw_id; int msk_hw_rev; int msk_pmd; int msk_num_port; int msk_expcap; int msk_pcixcap; int msk_clock; int msk_pflags; int msk_intrmask; int msk_intrhwemask; int msk_intrhand; int * msk_irq; int ** msk_devs; int msk_bustype; int msk_dev; void* msk_int_holdoff; void* msk_process_limit; int msk_mtx; int * msk_res; } ;
struct msk_mii_data {size_t port; int pmd; int mii_flags; } ;
typedef int device_t ;


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
 int FUNC_0 (struct msk_softc*,int ,int ) ;
 int FUNC_1 (struct msk_softc*,int ) ;
 int FUNC_2 (struct msk_softc*,int ,int ) ;
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
 void* VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 void* VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_3 (int ,int ,int ,char*,int,void**,int ,char*) ;
 int FUNC_4 (int ,int ,int ,char*,int,void**,int ,int ,char*,char*) ;
 int FUNC_5 (int ) ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 scalar_t__ VAR_55 ;
 int FUNC_6 (int ,scalar_t__,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int,int *,int ,struct msk_softc*,int *) ;
 void* FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct msk_softc* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (int *,struct msk_mii_data*) ;
 scalar_t__ VAR_56 ;
 struct msk_mii_data* FUNC_18 (int,int ,int) ;
 int VAR_57 ;
 int VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 void* VAR_61 ;
 scalar_t__ VAR_62 ;
 int FUNC_19 (struct msk_softc*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct msk_softc*) ;
 int FUNC_22 (struct msk_softc*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_25 (int ,int*) ;
 int FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int ,int ,int*) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ,int ,char*,void**) ;
 int VAR_63 ;

__attribute__((used)) static int
FUNC_31(device_t VAR_64)
{
 struct msk_softc *VAR_65;
 struct msk_mii_data *VAR_66;
 int VAR_67, VAR_68, VAR_69, VAR_70;

 VAR_65 = FUNC_12(VAR_64);
 VAR_65->msk_dev = VAR_64;
 FUNC_24(&VAR_65->msk_mtx, FUNC_11(VAR_64), VAR_39,
     VAR_38);




 FUNC_26(VAR_64);





 VAR_65->msk_res_spec = VAR_62;

 VAR_65->msk_irq_spec = VAR_59;
 VAR_67 = FUNC_6(VAR_64, VAR_65->msk_res_spec, VAR_65->msk_res);
 if (VAR_67) {
  if (VAR_65->msk_res_spec == VAR_62)
   VAR_65->msk_res_spec = VAR_61;
  else
   VAR_65->msk_res_spec = VAR_62;
  VAR_67 = FUNC_6(VAR_64, VAR_65->msk_res_spec, VAR_65->msk_res);
  if (VAR_67) {
   FUNC_16(VAR_64, "couldn't allocate %s resources\n",
       VAR_65->msk_res_spec == VAR_62 ? "memory" :
       "I/O");
   FUNC_23(&VAR_65->msk_mtx);
   return (VAR_14);
  }
 }


 FUNC_0(VAR_65, VAR_46, 0);

 FUNC_2(VAR_65, VAR_0, VAR_11);
 VAR_65->msk_hw_id = FUNC_1(VAR_65, VAR_1);
 VAR_65->msk_hw_rev = (FUNC_1(VAR_65, VAR_2) >> 4) & 0x0f;

 if (VAR_65->msk_hw_id < 128 ||
     VAR_65->msk_hw_id > 131 ||
     VAR_65->msk_hw_id == VAR_7) {
  FUNC_16(VAR_64, "unknown device: id=0x%02x, rev=0x%02x\n",
      VAR_65->msk_hw_id, VAR_65->msk_hw_rev);
  FUNC_23(&VAR_65->msk_mtx);
  return (VAR_14);
 }

 FUNC_4(FUNC_13(VAR_64),
     FUNC_5(FUNC_14(VAR_64)),
     VAR_43, "process_limit", VAR_13 | VAR_12,
     &VAR_65->msk_process_limit, 0, VAR_63, "I",
     "max number of Rx events to process");

 VAR_65->msk_process_limit = VAR_35;
 VAR_67 = FUNC_30(FUNC_10(VAR_64), FUNC_15(VAR_64),
     "process_limit", &VAR_65->msk_process_limit);
 if (VAR_67 == 0) {
  if (VAR_65->msk_process_limit < VAR_37 ||
      VAR_65->msk_process_limit > VAR_36) {
   FUNC_16(VAR_64, "process_limit value out of range; "
       "using default: %d\n", VAR_35);
   VAR_65->msk_process_limit = VAR_35;
  }
 }

 VAR_65->msk_int_holdoff = VAR_29;
 FUNC_3(FUNC_13(VAR_64),
     FUNC_5(FUNC_14(VAR_64)), VAR_43,
     "int_holdoff", VAR_12, &VAR_65->msk_int_holdoff, 0,
     "Maximum number of time to delay interrupts");
 FUNC_30(FUNC_10(VAR_64), FUNC_15(VAR_64),
     "int_holdoff", &VAR_65->msk_int_holdoff);

 VAR_65->msk_pmd = FUNC_1(VAR_65, VAR_3);

 VAR_65->msk_num_port = 1;
 if ((FUNC_1(VAR_65, VAR_5) & VAR_6) ==
     VAR_6) {
  if (!(FUNC_1(VAR_65, VAR_4) & VAR_54))
   VAR_65->msk_num_port++;
 }


 if (FUNC_27(VAR_65->msk_dev, VAR_44, &VAR_70) == 0) {
  VAR_65->msk_bustype = VAR_32;
  VAR_65->msk_expcap = VAR_70;
 } else if (FUNC_27(VAR_65->msk_dev, VAR_45, &VAR_70) == 0) {
  VAR_65->msk_bustype = VAR_30;
  VAR_65->msk_pcixcap = VAR_70;
 } else
  VAR_65->msk_bustype = VAR_31;

 switch (VAR_65->msk_hw_id) {
 case 136:
  VAR_65->msk_clock = 125;
  VAR_65->msk_pflags |= VAR_23;
  break;
 case 135:
  VAR_65->msk_clock = 125;
  VAR_65->msk_pflags |= VAR_23 | VAR_24;
  break;
 case 134:
  VAR_65->msk_clock = 125;
  VAR_65->msk_pflags |= VAR_23 | VAR_21 |
      VAR_20;




  if (VAR_65->msk_hw_rev == VAR_9)
   VAR_65->msk_pflags &= ~VAR_20;





  if (VAR_65->msk_hw_rev == VAR_8)
   VAR_65->msk_pflags |= VAR_24;
  break;
 case 133:
  VAR_65->msk_clock = 100;
  VAR_65->msk_pflags |= VAR_22;
  break;
 case 132:
  VAR_65->msk_clock = 50;
  VAR_65->msk_pflags |= VAR_22 | VAR_21 |
      VAR_20;
  if (VAR_65->msk_hw_rev == VAR_10) {
   VAR_65->msk_pflags |= VAR_26 |
       VAR_27 | VAR_28;
  }
  break;
 case 128:
  VAR_65->msk_clock = 156;
  VAR_65->msk_pflags |= VAR_23;
  break;
 case 130:
  VAR_65->msk_clock = 125;
  VAR_65->msk_pflags |= VAR_23 | VAR_21 |
      VAR_20;
  break;
 case 129:
  VAR_65->msk_clock = 125;
  VAR_65->msk_pflags |= VAR_23;
  break;
 case 131:
  VAR_65->msk_clock = 125;
  VAR_65->msk_pflags |= VAR_23 | VAR_21;
  break;
 default:
  VAR_65->msk_clock = 156;
  break;
 }


 VAR_68 = FUNC_28(VAR_64);
 if (VAR_55)
  FUNC_16(VAR_64, "MSI count : %d\n", VAR_68);
 if (VAR_56 != 0)
  VAR_57 = 1;
 if (VAR_57 == 0 && VAR_68 > 0) {
  VAR_69 = 1;
  if (FUNC_25(VAR_64, &VAR_69) == 0) {
   if (VAR_69 == 1) {
    VAR_65->msk_pflags |= VAR_25;
    VAR_65->msk_irq_spec = VAR_60;
   } else
    FUNC_29(VAR_64);
  }
 }

 VAR_67 = FUNC_6(VAR_64, VAR_65->msk_irq_spec, VAR_65->msk_irq);
 if (VAR_67) {
  FUNC_16(VAR_64, "couldn't allocate IRQ resources\n");
  goto fail;
 }

 if ((VAR_67 = FUNC_19(VAR_65)) != 0)
  goto fail;


 VAR_65->msk_intrmask = VAR_47 | VAR_52;
 VAR_65->msk_intrhwemask = VAR_53 | VAR_49 |
     VAR_48 | VAR_50 | VAR_51;


 FUNC_21(VAR_65);

 if ((VAR_67 = FUNC_22(VAR_65)) != 0)
  goto fail;

 VAR_65->msk_devs[VAR_33] = FUNC_9(VAR_64, "msk", -1);
 if (VAR_65->msk_devs[VAR_33] == ((void*)0)) {
  FUNC_16(VAR_64, "failed to add child for PORT_A\n");
  VAR_67 = VAR_14;
  goto fail;
 }
 VAR_66 = FUNC_18(sizeof(struct msk_mii_data), VAR_40, VAR_41 | VAR_42);
 VAR_66->port = VAR_33;
 VAR_66->pmd = VAR_65->msk_pmd;
 VAR_66->mii_flags |= VAR_17;
 if (VAR_65->msk_pmd == 'L' || VAR_65->msk_pmd == 'S')
  VAR_66->mii_flags |= VAR_18;
 if (VAR_65->msk_pmd == 'P')
  VAR_66->mii_flags |= VAR_18 | VAR_19;
 FUNC_17(VAR_65->msk_devs[VAR_33], VAR_66);

 if (VAR_65->msk_num_port > 1) {
  VAR_65->msk_devs[VAR_34] = FUNC_9(VAR_64, "msk", -1);
  if (VAR_65->msk_devs[VAR_34] == ((void*)0)) {
   FUNC_16(VAR_64, "failed to add child for PORT_B\n");
   VAR_67 = VAR_14;
   goto fail;
  }
  VAR_66 = FUNC_18(sizeof(struct msk_mii_data), VAR_40, VAR_41 |
      VAR_42);
  VAR_66->port = VAR_34;
  VAR_66->pmd = VAR_65->msk_pmd;
  if (VAR_65->msk_pmd == 'L' || VAR_65->msk_pmd == 'S')
   VAR_66->mii_flags |= VAR_18;
  if (VAR_65->msk_pmd == 'P')
   VAR_66->mii_flags |= VAR_18 | VAR_19;
  FUNC_17(VAR_65->msk_devs[VAR_34], VAR_66);
 }

 VAR_67 = FUNC_7(VAR_64);
 if (VAR_67) {
  FUNC_16(VAR_64, "failed to attach port(s)\n");
  goto fail;
 }


 VAR_67 = FUNC_8(VAR_64, VAR_65->msk_irq[0], VAR_16 |
     VAR_15, ((void*)0), VAR_58, VAR_65, &VAR_65->msk_intrhand);
 if (VAR_67 != 0) {
  FUNC_16(VAR_64, "couldn't set up interrupt handler\n");
  goto fail;
 }
fail:
 if (VAR_67 != 0)
  FUNC_20(VAR_64);

 return (VAR_67);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int f_max; int host_ocr; int caps; int f_min; } ;
struct sdhci_slot {int num; int version; int quirks; int caps; int caps2; int opt; int max_clk; int timeout_clk; int retune_mode; int retune_count; int timeout; int card_poll_callout; int mtx; int retune_callout; int timeout_callout; int card_delayed_task; int card_task; scalar_t__ bus; void* tune_data; void* tune_cmd; void* tune_req; TYPE_2__ host; } ;
typedef scalar_t__ kobjop_t ;
typedef TYPE_3__* kobjop_desc_t ;
typedef TYPE_4__* kobj_t ;
struct TYPE_16__ {scalar_t__ func; } ;
typedef TYPE_5__ kobj_method_t ;
typedef scalar_t__ device_t ;
struct TYPE_15__ {TYPE_1__* ops; } ;
struct TYPE_14__ {TYPE_5__ deflt; } ;
struct TYPE_12__ {int cls; } ;


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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (struct sdhci_slot*,int ) ;
 int FUNC_1 (struct sdhci_slot*,int ) ;
 int VAR_33 ;
 int VAR_34 ;
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
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_2 (int) ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int FUNC_3 (struct sdhci_slot*) ;
 int FUNC_4 (struct sdhci_slot*) ;
 int FUNC_5 (scalar_t__,struct sdhci_slot*) ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int FUNC_6 (int ,int ,int ,char*,int ,int*,int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ,struct sdhci_slot*) ;
 int FUNC_9 (int ,int *,int ,int ,struct sdhci_slot*) ;
 scalar_t__ VAR_90 ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int *,int ,int ,struct sdhci_slot*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (void*,int ) ;
 TYPE_5__* FUNC_16 (int ,int *,TYPE_3__*) ;
 void* FUNC_17 (int,int ,int ) ;
 TYPE_3__ VAR_91 ;
 TYPE_3__ VAR_92 ;
 TYPE_3__ VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 scalar_t__ VAR_96 ;
 int FUNC_18 (struct sdhci_slot*) ;
 int FUNC_19 (struct sdhci_slot*) ;
 scalar_t__ VAR_97 ;
 int FUNC_20 (struct sdhci_slot*) ;
 TYPE_3__ VAR_98 ;
 int FUNC_21 (struct sdhci_slot*,char*,...) ;
 int VAR_99 ;

int
FUNC_22(device_t VAR_100, struct sdhci_slot *VAR_101, int VAR_102)
{
 kobjop_desc_t VAR_103;
 kobj_method_t *VAR_104;
 uint32_t VAR_105, VAR_106, VAR_107, VAR_108;
 int VAR_109;

 FUNC_4(VAR_101);

 VAR_101->num = VAR_102;
 VAR_101->bus = VAR_100;

 VAR_101->version = (FUNC_0(VAR_101, VAR_54)
  >> VAR_84) & VAR_83;
 if (VAR_101->quirks & VAR_67) {
  VAR_105 = VAR_101->caps;
  VAR_106 = VAR_101->caps2;
 } else {
  VAR_105 = FUNC_1(VAR_101, VAR_46);
  if (VAR_101->version >= VAR_82)
   VAR_106 = FUNC_1(VAR_101, VAR_47);
  else
   VAR_106 = 0;
 }
 if (VAR_101->version >= VAR_82) {
  if ((VAR_105 & VAR_79) != VAR_80 &&
      (VAR_105 & VAR_79) != VAR_78) {
   FUNC_21(VAR_101,
       "Driver doesn't support shared bus slots\n");
   FUNC_3(VAR_101);
   return (VAR_1);
  } else if ((VAR_105 & VAR_79) ==
      VAR_78) {
   VAR_101->opt |= VAR_81 | VAR_55;
  }
 }

 if (VAR_101->version >= VAR_82)
  VAR_107 = (VAR_105 & VAR_51) >>
      VAR_50;
 else
  VAR_107 = (VAR_105 & VAR_49) >>
      VAR_50;
 if (VAR_107 != 0)
  VAR_101->max_clk = VAR_107 * 1000000;





 if (VAR_101->max_clk == 0) {
  VAR_101->max_clk = VAR_52 * 1000000;
  FUNC_21(VAR_101, "Hardware doesn't specify base clock "
      "frequency, using %dMHz as default.\n",
      VAR_52);
 }

 if (VAR_101->quirks & VAR_65) {
  VAR_101->timeout_clk = VAR_101->max_clk / 1000;
 } else if (VAR_101->quirks & VAR_64) {
  VAR_101->timeout_clk = 1000;
 } else {
  VAR_101->timeout_clk = (VAR_105 & VAR_85) >>
      VAR_86;
  if (VAR_105 & VAR_87)
   VAR_101->timeout_clk *= 1000;
 }





 if (VAR_101->timeout_clk == 0) {
  FUNC_21(VAR_101, "Hardware doesn't specify timeout clock "
      "frequency, setting BROKEN_TIMEOUT quirk.\n");
  VAR_101->quirks |= VAR_61;
 }

 VAR_101->host.f_min = FUNC_5(VAR_101->bus, VAR_101);
 VAR_101->host.f_max = VAR_101->max_clk;
 VAR_101->host.host_ocr = 0;
 if (VAR_105 & VAR_45)
     VAR_101->host.host_ocr |= VAR_27 | VAR_28;
 if (VAR_105 & VAR_44)
     VAR_101->host.host_ocr |= VAR_25 | VAR_26;





 if ((VAR_105 & VAR_43) && (VAR_101->version < VAR_82 ||
     (VAR_101->opt & VAR_81)))
     VAR_101->host.host_ocr |= VAR_29;
 if (VAR_101->host.host_ocr == 0) {
  FUNC_21(VAR_101, "Hardware doesn't report any "
      "support voltages.\n");
 }

 VAR_108 = VAR_2;
 if (VAR_105 & VAR_34)
  VAR_108 |= VAR_3;
 if (VAR_105 & VAR_36)
  VAR_108 |= VAR_8;
 if (VAR_101->quirks & VAR_58)
  VAR_108 |= VAR_4;
 if (VAR_101->quirks & VAR_71)
  VAR_108 |= VAR_24;


 if (VAR_106 & (VAR_42 | VAR_41 | VAR_33))
  VAR_108 |= VAR_21 | VAR_22;
 if (VAR_106 & VAR_41) {
  VAR_108 |= VAR_20 | VAR_23;
  if (!(VAR_101->quirks & VAR_60))
   VAR_108 |= VAR_12;
 } else if (VAR_106 & VAR_42)
  VAR_108 |= VAR_23;
 if (VAR_106 & VAR_33 &&
     !(VAR_101->quirks & VAR_62))
  VAR_108 |= VAR_19;
 if (VAR_101->quirks & VAR_68)
  VAR_108 |= VAR_9;
 if (VAR_101->quirks & VAR_63 &&
     VAR_106 & VAR_40)
  VAR_108 |= VAR_14;
 if (VAR_101->quirks & VAR_69 &&
     VAR_106 & VAR_41)
  VAR_108 |= VAR_14;





 VAR_103 = &VAR_98;
 VAR_104 = FUNC_16(((kobj_t)VAR_100)->ops->cls, ((void*)0),
     VAR_103);
 if (VAR_104 == &VAR_103->deflt)
  VAR_108 &= ~(VAR_21 | VAR_22 |
      VAR_23 | VAR_19 | VAR_20 |
      VAR_9 | VAR_12 | VAR_14);
 VAR_103 = &VAR_93;
 VAR_104 = FUNC_16(((kobj_t)VAR_100)->ops->cls, ((void*)0),
     VAR_103);
 if (VAR_104 == &VAR_103->deflt)
  goto no_tuning;
 VAR_103 = &VAR_91;
 VAR_104 = FUNC_16(((kobj_t)VAR_100)->ops->cls, ((void*)0),
     VAR_103);
 if (VAR_104 == &VAR_103->deflt) {
no_tuning:
  VAR_108 &= ~((((VAR_106) & VAR_88 ? VAR_23 : 0) | VAR_19 | VAR_20 | VAR_12 | VAR_14));
 }


 if (VAR_108 & (((VAR_106) & VAR_88 ? VAR_23 : 0) | VAR_19 | VAR_20 | VAR_12 | VAR_14)) {
  VAR_101->opt |= VAR_89;
  VAR_101->tune_req = FUNC_17(sizeof(*VAR_101->tune_req), VAR_30,
      VAR_31);
  VAR_101->tune_cmd = FUNC_17(sizeof(*VAR_101->tune_cmd), VAR_30,
      VAR_31);
  VAR_101->tune_data = FUNC_17(sizeof(*VAR_101->tune_data), VAR_30,
      VAR_31);
  if (VAR_106 & VAR_88)
   VAR_101->opt |= VAR_77;
  VAR_101->retune_mode = (VAR_106 & VAR_74) >>
      VAR_75;
  if (VAR_101->retune_mode == VAR_76) {
   VAR_101->retune_count = (VAR_106 & VAR_72) >>
       VAR_73;
   if (VAR_101->retune_count > 0xb) {
    FUNC_21(VAR_101, "Unknown re-tuning count "
        "%x, using 1 sec\n", VAR_101->retune_count);
    VAR_101->retune_count = 1;
   } else if (VAR_101->retune_count != 0)
    VAR_101->retune_count =
        1 << (VAR_101->retune_count - 1);
  }
 }




 VAR_108 |= VAR_18;
 if (VAR_108 & (VAR_21 | VAR_22 |
     VAR_23 | VAR_19 | VAR_20 |
     VAR_10 | VAR_13 |
     VAR_15))
  VAR_108 |= VAR_16 | VAR_17;






 VAR_103 = &VAR_92;
 VAR_104 = FUNC_16(((kobj_t)VAR_100)->ops->cls, ((void*)0),
     VAR_103);
 if (VAR_104 == &VAR_103->deflt)
  VAR_108 &= ~(VAR_16 | VAR_17);
 else if (VAR_104->func == (kobjop_t)VAR_97)
  VAR_108 &= ~VAR_16;


 if (VAR_106 & VAR_37)
  VAR_108 |= VAR_5;
 if (VAR_106 & VAR_38)
  VAR_108 |= VAR_6;
 if (VAR_106 & VAR_39)
  VAR_108 |= VAR_7;
 VAR_101->host.caps = VAR_108;


 if (VAR_105 & VAR_35)
  VAR_101->opt |= VAR_53;

 if (VAR_101->quirks & VAR_59)
  VAR_101->opt &= ~VAR_53;
 if (VAR_101->quirks & VAR_66)
  VAR_101->opt |= VAR_53;
 if (VAR_101->quirks & VAR_57)
  VAR_101->opt |= VAR_55;





 if (VAR_101->opt & VAR_56)
  VAR_101->opt &= ~VAR_53;

 if (VAR_101->opt & VAR_53) {
  VAR_109 = FUNC_18(VAR_101);
  if (VAR_109 != 0) {
   if (VAR_101->opt & VAR_89) {
    FUNC_15(VAR_101->tune_req, VAR_30);
    FUNC_15(VAR_101->tune_cmd, VAR_30);
    FUNC_15(VAR_101->tune_data, VAR_30);
   }
   FUNC_3(VAR_101);
   return (VAR_109);
  }
 }

 if (VAR_90 || VAR_96) {
  FUNC_21(VAR_101,
      "%uMHz%s %s VDD:%s%s%s VCCQ: 3.3V%s%s DRV: B%s%s%s %s %s\n",
      VAR_101->max_clk / 1000000,
      (VAR_105 & VAR_36) ? " HS" : "",
      (VAR_108 & VAR_3) ? "8bits" :
   ((VAR_108 & VAR_2) ? "4bits" : "1bit"),
      (VAR_105 & VAR_45) ? " 3.3V" : "",
      (VAR_105 & VAR_44) ? " 3.0V" : "",
      ((VAR_105 & VAR_43) &&
      (VAR_101->opt & VAR_81)) ? " 1.8V" : "",
      (VAR_108 & VAR_17) ? " 1.8V" : "",
      (VAR_108 & VAR_16) ? " 1.2V" : "",
      (VAR_108 & VAR_5) ? "A" : "",
      (VAR_108 & VAR_6) ? "C" : "",
      (VAR_108 & VAR_7) ? "D" : "",
      (VAR_101->opt & VAR_53) ? "DMA" : "PIO",
      (VAR_101->opt & VAR_81) ? "embedded" :
      (VAR_101->opt & VAR_55) ? "non-removable" :
      "removable");
  if (VAR_108 & (VAR_9 | VAR_12 |
      VAR_14 | VAR_11))
   FUNC_21(VAR_101, "eMMC:%s%s%s%s\n",
       (VAR_108 & VAR_9) ? " DDR52" : "",
       (VAR_108 & VAR_12) ? " HS200" : "",
       (VAR_108 & VAR_14) ? " HS400" : "",
       ((VAR_108 &
       (VAR_14 | VAR_11)) ==
       (VAR_14 | VAR_11)) ?
       " HS400ES" : "");
  if (VAR_108 & (VAR_21 | VAR_22 |
      VAR_23 | VAR_20))
   FUNC_21(VAR_101, "UHS-I:%s%s%s%s%s\n",
       (VAR_108 & VAR_21) ? " SDR12" : "",
       (VAR_108 & VAR_22) ? " SDR25" : "",
       (VAR_108 & VAR_23) ? " SDR50" : "",
       (VAR_108 & VAR_20) ? " SDR104" : "",
       (VAR_108 & VAR_19) ? " DDR50" : "");
  if (VAR_101->opt & VAR_89)
   FUNC_21(VAR_101, "Re-tuning count %d secs, mode %d\n",
       VAR_101->retune_count, VAR_101->retune_mode + 1);
  FUNC_19(VAR_101);
 }

 VAR_101->timeout = 10;
 FUNC_6(FUNC_13(VAR_101->bus),
     FUNC_7(FUNC_14(VAR_101->bus)), VAR_32,
     "timeout", VAR_0, &VAR_101->timeout, 0,
     "Maximum timeout for SDHCI transfers (in secs)");
 FUNC_8(&VAR_101->card_task, 0, VAR_95, VAR_101);
 FUNC_9(VAR_99, &VAR_101->card_delayed_task, 0,
  VAR_95, VAR_101);
 FUNC_10(&VAR_101->card_poll_callout, 1);
 FUNC_11(&VAR_101->timeout_callout, &VAR_101->mtx, 0);
 FUNC_11(&VAR_101->retune_callout, &VAR_101->mtx, 0);

 if ((VAR_101->quirks & VAR_70) &&
     !(VAR_101->opt & VAR_55)) {
  FUNC_12(&VAR_101->card_poll_callout,
      VAR_48, VAR_94, VAR_101);
 }

 FUNC_20(VAR_101);

 return (0);
}

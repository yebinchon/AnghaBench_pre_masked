
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct wb_softc {int chip; int ctl_reg; int time_reg; int csr_reg; int reg_1; int reg_timeout; int reg_2; unsigned long timeout_override; int ev_tag; int debug_verbose; int dev; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,struct wb_softc*,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,int ,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int,struct wb_softc*,int ,int ,char*,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,int ,int ,char*,int,unsigned long*,int ,char*) ;
 int FUNC_4 (struct sysctl_oid*) ;
 scalar_t__ FUNC_5 (char*,unsigned long*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 struct wb_softc* FUNC_6 (int ) ;
 struct sysctl_ctx_list* FUNC_7 (int ) ;
 struct sysctl_oid* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (struct wb_softc*,char*) ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_13(device_t VAR_17)
{
 struct wb_softc *VAR_18;
 struct sysctl_ctx_list *VAR_19;
 struct sysctl_oid *VAR_20;
 unsigned long VAR_21;
 uint8_t VAR_22;

 VAR_18 = FUNC_6(VAR_17);
 VAR_18->dev = VAR_17;


 FUNC_9(VAR_17, VAR_6);

 switch (VAR_18->chip) {
 case 129:
 case 128:
  VAR_18->ctl_reg = 0xf3;
  VAR_18->time_reg = 0xf4;
  VAR_18->csr_reg = 0xf7;
  break;
 case 148:
  VAR_18->ctl_reg = 0xf0;
  VAR_18->time_reg = 0xf1;
  VAR_18->csr_reg = 0xf2;
  break;
 default:
  VAR_18->ctl_reg = 0xf5;
  VAR_18->time_reg = 0xf6;
  VAR_18->csr_reg = 0xf7;
  break;
 }

 switch (VAR_18->chip) {
 case 137:
 case 136:
  VAR_22 = FUNC_10(VAR_17, 0x2B) & ~0x10;
  FUNC_11(VAR_17, 0x2B, VAR_22);
  break;
 case 129:

  VAR_22 = FUNC_10(VAR_17, 0x29) & ~0x60;
  VAR_22 |= 0x20;
  FUNC_11(VAR_17, 0x29, VAR_22);
  break;
 case 128:

  VAR_22 = FUNC_10(VAR_17, 0x2b) & ~0x04;
  FUNC_11(VAR_17, 0x2b, VAR_22);
  break;
 case 135:
  VAR_22 = (FUNC_10(VAR_17, 0x2B) & ~0x08) | 0x04;
  FUNC_11(VAR_17, 0x2B, VAR_22);
  break;
 case 140:
 case 139:
  VAR_22 = FUNC_10(VAR_17, 0x2D) & ~0x01;
  FUNC_11(VAR_17, 0x2D, VAR_22);
  VAR_22 = FUNC_10(VAR_17, VAR_18->ctl_reg);
  VAR_22 |= 0x02;

  FUNC_11(VAR_17, VAR_18->ctl_reg, VAR_22);
  break;
 case 133:
  break;
 case 130:
  VAR_22 = FUNC_10(VAR_17, 0x2C) & ~0x80;
  FUNC_11(VAR_17, 0x2C, VAR_22);
  break;
 case 138:
 case 134:
 case 132:
 case 131:
 case 147:
 case 146:
 case 145:
 case 144:
 case 143:
 case 142:
 case 141:
 case 148:






  VAR_22 = FUNC_10(VAR_17, VAR_18->ctl_reg);
  VAR_22 |= 0x02;

  FUNC_11(VAR_17, VAR_18->ctl_reg, VAR_22);
  break;
 default:
  break;
 }


 VAR_18->reg_1 = FUNC_10(VAR_17, VAR_18->ctl_reg);
 VAR_18->reg_timeout = FUNC_10(VAR_17, VAR_18->time_reg);
 VAR_18->reg_2 = FUNC_10(VAR_17, VAR_18->csr_reg);


 if (VAR_11 || (VAR_18->reg_timeout > 0x00))
  FUNC_12(VAR_18, "Before watchdog attach");

 VAR_18->reg_1 &= ~VAR_8;
 VAR_18->reg_1 |= VAR_7;
 FUNC_11(VAR_17, VAR_18->ctl_reg, VAR_18->reg_1);






 VAR_18->reg_2 &= ~(VAR_9|VAR_10);
 FUNC_11(VAR_17, VAR_18->csr_reg, VAR_18->reg_2);


 if (FUNC_5("hw.wbwd.timeout_override", &VAR_21)) {
  if (VAR_21 > 0)
   VAR_18->timeout_override = VAR_21;
 }
 VAR_19 = FUNC_7(VAR_17);
 VAR_20 = FUNC_8(VAR_17);
        FUNC_3(VAR_19, FUNC_4(VAR_20), VAR_5,
     "timeout_override", VAR_1, &VAR_18->timeout_override, 0,
            "Timeout in seconds overriding default watchdog timeout");
        FUNC_1(VAR_19, FUNC_4(VAR_20), VAR_5,
     "debug_verbose", VAR_1, &VAR_18->debug_verbose, 0,
            "Enables extra debugging information");
        FUNC_2(VAR_19, FUNC_4(VAR_20), VAR_5, "debug",
     VAR_4|VAR_0, VAR_18, 0, VAR_12, "A",
            "Selected register information from last change by driver");
        FUNC_2(VAR_19, FUNC_4(VAR_20), VAR_5, "debug_current",
     VAR_4|VAR_0|VAR_2, VAR_18, 0,
      VAR_13, "A",
      "Selected register information (may interfere)");
 FUNC_2(VAR_19, FUNC_4(VAR_20), VAR_5, "force_timeout",
     VAR_3|VAR_1|VAR_2, VAR_18, 0,
     VAR_14, "I", "Enable to force watchdog to fire.");


 VAR_18->ev_tag = FUNC_0(VAR_15, VAR_16, VAR_18,
     0);

 if (VAR_11)
  FUNC_12(VAR_18, "After watchdog attach");

 return (0);
}

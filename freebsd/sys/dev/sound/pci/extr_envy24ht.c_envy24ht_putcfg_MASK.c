
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sc_info {int adcn; int dacn; TYPE_1__* cfg; int dev; } ;
struct TYPE_2__ {int subvendor; int subdevice; int scfg; int acl; int i2s; int spdif; int gpiomask; int gpiodir; int gpiostate; } ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct sc_info *VAR_12)
{
 FUNC_0(VAR_12->dev, "system configuration\n");
 FUNC_1("  SubVendorID: 0x%04x, SubDeviceID: 0x%04x\n",
     VAR_12->cfg->subvendor, VAR_12->cfg->subdevice);
 FUNC_1("  XIN2 Clock Source: ");
 switch (VAR_12->cfg->scfg & VAR_8) {
 case 0x00:
  FUNC_1("24.576MHz(96kHz*256)\n");
  break;
 case 0x40:
  FUNC_1("49.152MHz(192kHz*256)\n");
  break;
 case 0x80:
  FUNC_1("reserved\n");
  break;
 default:
  FUNC_1("illegal system setting\n");
 }
 FUNC_1("  MPU-401 UART(s) #: ");
 if (VAR_12->cfg->scfg & VAR_7)
  FUNC_1("1\n");
 else
  FUNC_1("not implemented\n");
        switch (VAR_12->adcn) {
        case 0x01:
 case 0x02:
                FUNC_1("  ADC #: ");
                FUNC_1("%d\n", VAR_12->adcn);
                break;
        case 0x03:
                FUNC_1("  ADC #: ");
                FUNC_1("%d", 1);
                FUNC_1(" and SPDIF receiver connected\n");
                break;
        default:
                FUNC_1("  no physical inputs\n");
        }
 FUNC_1("  DAC #: ");
 FUNC_1("%d\n", VAR_12->dacn);
 FUNC_1("  Multi-track converter type: ");
 if ((VAR_12->cfg->acl & VAR_0) == 0) {
  FUNC_1("AC'97(SDATA_OUT:");
  if (VAR_12->cfg->acl & VAR_1)
   FUNC_1("packed");
  else
   FUNC_1("split");
  FUNC_1(")\n");
 }
 else {
  FUNC_1("I2S(");
  if (VAR_12->cfg->i2s & VAR_6)
   FUNC_1("with volume, ");
                if (VAR_12->cfg->i2s & VAR_2)
                        FUNC_1("192KHz support, ");
                else
                if (VAR_12->cfg->i2s & VAR_3)
                        FUNC_1("192KHz support, ");
                else
                        FUNC_1("48KHz support, ");
  switch (VAR_12->cfg->i2s & VAR_5) {
  case 131:
   FUNC_1("16bit resolution, ");
   break;
  case 130:
   FUNC_1("18bit resolution, ");
   break;
  case 129:
   FUNC_1("20bit resolution, ");
   break;
  case 128:
   FUNC_1("24bit resolution, ");
   break;
  }
  FUNC_1("ID#0x%x)\n", VAR_12->cfg->i2s & VAR_4);
 }
 FUNC_1("  S/PDIF(IN/OUT): ");
 if (VAR_12->cfg->spdif & VAR_10)
  FUNC_1("1/");
 else
  FUNC_1("0/");
 if (VAR_12->cfg->spdif & VAR_11)
  FUNC_1("1 ");
 else
  FUNC_1("0 ");
 if (VAR_12->cfg->spdif & (VAR_10 | VAR_11))
  FUNC_1("ID# 0x%02x\n", (VAR_12->cfg->spdif & VAR_9) >> 2);
 FUNC_1("  GPIO(mask/dir/state): 0x%02x/0x%02x/0x%02x\n",
     VAR_12->cfg->gpiomask, VAR_12->cfg->gpiodir, VAR_12->cfg->gpiostate);
}

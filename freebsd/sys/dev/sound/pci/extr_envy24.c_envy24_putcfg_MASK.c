
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
 int VAR_12 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct sc_info *VAR_13)
{
 FUNC_0(VAR_13->dev, "system configuration\n");
 FUNC_1("  SubVendorID: 0x%04x, SubDeviceID: 0x%04x\n",
     VAR_13->cfg->subvendor, VAR_13->cfg->subdevice);
 FUNC_1("  XIN2 Clock Source: ");
 switch (VAR_13->cfg->scfg & VAR_9) {
 case 0x00:
  FUNC_1("22.5792MHz(44.1kHz*512)\n");
  break;
 case 0x40:
  FUNC_1("16.9344MHz(44.1kHz*384)\n");
  break;
 case 0x80:
  FUNC_1("from external clock synthesizer chip\n");
  break;
 default:
  FUNC_1("illegal system setting\n");
 }
 FUNC_1("  MPU-401 UART(s) #: ");
 if (VAR_13->cfg->scfg & VAR_8)
  FUNC_1("2\n");
 else
  FUNC_1("1\n");
 FUNC_1("  AC'97 codec: ");
 if (VAR_13->cfg->scfg & VAR_7)
  FUNC_1("not exist\n");
 else
  FUNC_1("exist\n");
 FUNC_1("  ADC #: ");
 FUNC_1("%d\n", VAR_13->adcn);
 FUNC_1("  DAC #: ");
 FUNC_1("%d\n", VAR_13->dacn);
 FUNC_1("  Multi-track converter type: ");
 if ((VAR_13->cfg->acl & VAR_1) == 0) {
  FUNC_1("AC'97(SDATA_OUT:");
  if (VAR_13->cfg->acl & VAR_2)
   FUNC_1("packed");
  else
   FUNC_1("split");
  FUNC_1("|SDATA_IN:");
  if (VAR_13->cfg->acl & VAR_0)
   FUNC_1("packed");
  else
   FUNC_1("split");
  FUNC_1(")\n");
 }
 else {
  FUNC_1("I2S(");
  if (VAR_13->cfg->i2s & VAR_6)
   FUNC_1("with volume, ");
  if (VAR_13->cfg->i2s & VAR_3)
   FUNC_1("96KHz support, ");
  switch (VAR_13->cfg->i2s & VAR_5) {
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
  FUNC_1("ID#0x%x)\n", VAR_13->cfg->i2s & VAR_4);
 }
 FUNC_1("  S/PDIF(IN/OUT): ");
 if (VAR_13->cfg->spdif & VAR_11)
  FUNC_1("1/");
 else
  FUNC_1("0/");
 if (VAR_13->cfg->spdif & VAR_12)
  FUNC_1("1 ");
 else
  FUNC_1("0 ");
 if (VAR_13->cfg->spdif & (VAR_11 | VAR_12))
  FUNC_1("ID# 0x%02x\n", (VAR_13->cfg->spdif & VAR_10) >> 2);
 FUNC_1("  GPIO(mask/dir/state): 0x%02x/0x%02x/0x%02x\n",
     VAR_13->cfg->gpiomask, VAR_13->cfg->gpiodir, VAR_13->cfg->gpiostate);
}

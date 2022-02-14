
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct sc_info {int adcn; int dacn; int dev; TYPE_2__* caps; scalar_t__ speed; scalar_t__* intr; scalar_t__* run; int * dac; TYPE_3__* cfg; int * adc; } ;
struct TYPE_7__ {scalar_t__ subvendor; scalar_t__ subdevice; int scfg; scalar_t__ acl; scalar_t__ i2s; scalar_t__ spdif; TYPE_1__* codec; int gpiostate; int gpiodir; int gpiomask; } ;
struct TYPE_6__ {int fmtlist; } ;
struct TYPE_5__ {int (* init ) (int ) ;int (* create ) (int ,struct sc_info*,int ,int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_3__* VAR_20 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (struct sc_info*) ;
 int FUNC_3 (struct sc_info*,int ) ;
 int FUNC_4 (struct sc_info*,int ) ;
 int FUNC_5 (struct sc_info*,int ) ;
 int VAR_21 ;
 int FUNC_6 (struct sc_info*) ;
 scalar_t__ FUNC_7 (struct sc_info*,int ,int) ;
 int VAR_22 ;
 TYPE_3__* FUNC_8 (struct sc_info*) ;
 int FUNC_9 (struct sc_info*,int ,int ,int ,int ) ;
 int FUNC_10 (struct sc_info*,int ,scalar_t__,int) ;
 int FUNC_11 (struct sc_info*,int,int,int) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int ,int ,scalar_t__,int) ;
 int FUNC_16 (int ,struct sc_info*,int ,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,struct sc_info*,int ,int) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static int
FUNC_20(struct sc_info *VAR_23)
{
 u_int32_t VAR_24;



 int VAR_25;
 u_int32_t VAR_26, VAR_27;
 VAR_23->cfg = ((void*)0);
 for (VAR_25 = 0; VAR_20[VAR_25].subvendor != 0 || VAR_20[VAR_25].subdevice != 0; VAR_25++) {

  VAR_26 = FUNC_13(VAR_23->dev);
  VAR_27 = FUNC_12(VAR_23->dev);
  if (VAR_26 == VAR_20[VAR_25].subvendor && VAR_27 == VAR_20[VAR_25].subdevice) {



   VAR_23->cfg = &VAR_20[VAR_25];
   break;
  }
 }
 if (VAR_23->cfg == ((void*)0)) {

  VAR_23->cfg = FUNC_8(VAR_23);
 }
 VAR_23->adcn = ((VAR_23->cfg->scfg & VAR_1) >> 2) + 1;
 VAR_23->dacn = (VAR_23->cfg->scfg & VAR_2) + 1;

 if (1 ) {
  FUNC_6(VAR_23);
 }


 FUNC_10(VAR_23, VAR_10, VAR_23->cfg->scfg, 1);
 FUNC_10(VAR_23, VAR_3, VAR_23->cfg->acl, 1);
 FUNC_10(VAR_23, VAR_7, VAR_23->cfg->i2s, 1);
 FUNC_10(VAR_23, VAR_11, VAR_23->cfg->spdif, 1);
 FUNC_4(VAR_23, VAR_23->cfg->gpiomask);
 FUNC_3(VAR_23, VAR_23->cfg->gpiodir);
 FUNC_5(VAR_23, VAR_23->cfg->gpiostate);

 if ((VAR_23->cfg->subvendor == 0x3031) && (VAR_23->cfg->subdevice == 0x4553)) {
  FUNC_11(VAR_23, 0x22, 0x00, 0x07);
  FUNC_11(VAR_23, 0x22, 0x04, 0x5f | 0x80);
  FUNC_11(VAR_23, 0x22, 0x05, 0x5f | 0x80);
 }

 for (VAR_25 = 0; VAR_25 < VAR_23->adcn; VAR_25++) {
  VAR_23->adc[VAR_25] = VAR_23->cfg->codec->create(VAR_23->dev, VAR_23, VAR_19, VAR_25);
  VAR_23->cfg->codec->init(VAR_23->adc[VAR_25]);
 }
 for (VAR_25 = 0; VAR_25 < VAR_23->dacn; VAR_25++) {
  VAR_23->dac[VAR_25] = VAR_23->cfg->codec->create(VAR_23->dev, VAR_23, VAR_18, VAR_25);
  VAR_23->cfg->codec->init(VAR_23->dac[VAR_25]);
 }





 if (FUNC_2(VAR_23))
  return VAR_0;


 VAR_23->run[0] = VAR_23->run[1] = 0;
 VAR_23->intr[0] = VAR_23->intr[1] = 0;
 VAR_23->speed = 0;
 VAR_23->caps[0].fmtlist = VAR_21;
 VAR_23->caps[1].fmtlist = VAR_22;
 VAR_24 = FUNC_7(VAR_23, VAR_8, 1);
 FUNC_10(VAR_23, VAR_8, VAR_24 & ~VAR_9, 1);
 VAR_24 = FUNC_7(VAR_23, VAR_8, 1);




 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sc_info {int dev; } ;
struct cfg_info {int free; int subvendor; int subdevice; int scfg; int acl; int i2s; int spdif; int gpiomask; int gpiostate; int gpiodir; int cdti; int cclk; int cs; int cif; int type; int codec; int name; } ;
struct TYPE_2__ {int subvendor; int subdevice; int codec; int name; } ;


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
 TYPE_1__* VAR_12 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct sc_info*,int) ;
 struct cfg_info* FUNC_2 (int,int ,int ) ;

__attribute__((used)) static struct cfg_info *
FUNC_3(struct sc_info *VAR_13)
{
 struct cfg_info *VAR_14;
 int VAR_15;
 int VAR_16;




 VAR_15 = FUNC_1(VAR_13, VAR_6);
 if ((VAR_15 < VAR_3 + 3) || (VAR_15 == 0x78)) {



        VAR_14 = FUNC_2(sizeof(*VAR_14), VAR_10, VAR_11);
        if (VAR_14 == ((void*)0)) {



                return ((void*)0);
        }
        VAR_14->free = 1;


        VAR_14->subvendor = FUNC_1(VAR_13, VAR_9) << 8;
        VAR_14->subvendor += FUNC_1(VAR_13, VAR_9 + 1);
        VAR_14->subdevice = FUNC_1(VAR_13, VAR_8) << 8;
        VAR_14->subdevice += FUNC_1(VAR_13, VAR_8 + 1);
        VAR_14->scfg = 0x0b;
        VAR_14->acl = 0x80;
        VAR_14->i2s = 0xfc;
        VAR_14->spdif = 0xc3;
        VAR_14->gpiomask = 0x21efff;
        VAR_14->gpiostate = 0x7fffff;
        VAR_14->gpiodir = 0x5e1000;
 VAR_14->cdti = 0x40000;
 VAR_14->cclk = 0x80000;
 VAR_14->cs = 0x1000;
 VAR_14->cif = 0x00;
 VAR_14->type = 0x02;

        for (VAR_16 = 0; VAR_12[VAR_16].subvendor != 0 || VAR_12[VAR_16].subdevice != 0;
VAR_16++)
                if (VAR_12[VAR_16].subvendor == VAR_14->subvendor &&
                    VAR_12[VAR_16].subdevice == VAR_14->subdevice)
                        break;
        VAR_14->name = VAR_12[VAR_16].name;
        VAR_14->codec = VAR_12[VAR_16].codec;

  return VAR_14;



 }
 VAR_14 = FUNC_2(sizeof(*VAR_14), VAR_10, VAR_11);
 if (VAR_14 == ((void*)0)) {



  return ((void*)0);
 }
 VAR_14->free = 1;

 VAR_14->subvendor = FUNC_1(VAR_13, VAR_9) << 8;
 VAR_14->subvendor += FUNC_1(VAR_13, VAR_9 + 1);
 VAR_14->subdevice = FUNC_1(VAR_13, VAR_8) << 8;
 VAR_14->subdevice += FUNC_1(VAR_13, VAR_8 + 1);
 VAR_14->scfg = FUNC_1(VAR_13, VAR_5);
 VAR_14->acl = FUNC_1(VAR_13, VAR_0);
 VAR_14->i2s = FUNC_1(VAR_13, VAR_4);
 VAR_14->spdif = FUNC_1(VAR_13, VAR_7);
 VAR_14->gpiomask = FUNC_1(VAR_13, VAR_2) | FUNC_1(VAR_13, VAR_2 + 1) << 8 | FUNC_1(VAR_13, VAR_2 + 2) << 16;


 VAR_14->gpiostate = FUNC_1(VAR_13, VAR_3) | FUNC_1(VAR_13, VAR_3 + 1) << 8 | FUNC_1(VAR_13, VAR_3 + 2) << 16;


 VAR_14->gpiodir = FUNC_1(VAR_13, VAR_1) | FUNC_1(VAR_13, VAR_1 + 1) << 8 | FUNC_1(VAR_13, VAR_1 + 2) << 16;



 for (VAR_16 = 0; VAR_12[VAR_16].subvendor != 0 || VAR_12[VAR_16].subdevice != 0; VAR_16++)
  if (VAR_12[VAR_16].subvendor == VAR_14->subvendor &&
      VAR_12[VAR_16].subdevice == VAR_14->subdevice)
   break;
 VAR_14->name = VAR_12[VAR_16].name;
 VAR_14->codec = VAR_12[VAR_16].codec;

 return VAR_14;
}

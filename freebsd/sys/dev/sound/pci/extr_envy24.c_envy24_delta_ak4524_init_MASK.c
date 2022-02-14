
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct envy24_delta_ak4524_codec {int cs; int num; TYPE_2__* parent; int info; int cdti; int cclk; } ;
struct TYPE_5__ {int dev; TYPE_1__* cfg; } ;
struct TYPE_4__ {int cs; int subvendor; int subdevice; int cif; int type; int cdti; int cclk; } ;


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
 int FUNC_0 (int ,char*) ;
 int VAR_11 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct envy24_delta_ak4524_codec*,int ,int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9(void *VAR_12)
{



 struct envy24_delta_ak4524_codec *VAR_13 = VAR_12;
 if (VAR_13 == ((void*)0))
  return;
 VAR_13->cs = VAR_13->parent->cfg->cs;
 VAR_13->cclk = VAR_13->parent->cfg->cclk;
 VAR_13->cdti = VAR_13->parent->cfg->cdti;
 FUNC_8(VAR_13->info, VAR_13->parent->cfg->type);
 FUNC_5(VAR_13->info, VAR_13->parent->cfg->cif);
 FUNC_7(VAR_13->info,
     VAR_3 | VAR_2 | VAR_1);
 FUNC_6(VAR_13->info, VAR_0);

 if (VAR_13->num == 0)
  FUNC_4(VAR_13->info);


        if (VAR_13->parent->cfg->subvendor == 0x153b && VAR_13->parent->cfg->subdevice == 0x1138 && VAR_13->num == 100) {

                VAR_13->cs = 0x02;
                FUNC_4(VAR_13->info);
                FUNC_0(VAR_13->parent->dev, "6fire rear input init\n");
                FUNC_3(VAR_13, VAR_11, VAR_9, VAR_8, 0x80);

                FUNC_3(VAR_13, VAR_11, VAR_9, VAR_10, 0x02);

        }
}

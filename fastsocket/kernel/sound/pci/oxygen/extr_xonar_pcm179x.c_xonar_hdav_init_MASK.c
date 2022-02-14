
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int anti_pop_delay; int ext_power_bit; int ext_power_int_reg; int ext_power_reg; int output_enable_bit; } ;
struct TYPE_5__ {int dacs; int h6; TYPE_1__ generic; } ;
struct xonar_hdav {int hdmi; TYPE_2__ pcm179x; } ;
struct TYPE_6__ {int dac_channels_mixer; } ;
struct oxygen {int card; TYPE_3__ model; struct xonar_hdav* model_data; } ;


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
 int FUNC_0 (struct oxygen*,int ,int) ;
 int FUNC_1 (struct oxygen*,int ,int) ;
 int FUNC_2 (struct oxygen*,int ,int) ;
 int FUNC_3 (struct oxygen*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct oxygen*) ;
 int FUNC_6 (struct oxygen*,int *) ;
 int FUNC_7 (struct oxygen*) ;
 int FUNC_8 (struct oxygen*) ;

__attribute__((used)) static void FUNC_9(struct oxygen *VAR_12)
{
 struct xonar_hdav *VAR_13 = VAR_12->model_data;

 FUNC_2(VAR_12, VAR_4,
         VAR_6 |
         VAR_5 |
         VAR_7);

 VAR_13->pcm179x.generic.anti_pop_delay = 100;
 VAR_13->pcm179x.generic.output_enable_bit = VAR_1;
 VAR_13->pcm179x.generic.ext_power_reg = VAR_10;
 VAR_13->pcm179x.generic.ext_power_int_reg = VAR_11;
 VAR_13->pcm179x.generic.ext_power_bit = VAR_3;
 VAR_13->pcm179x.dacs = VAR_12->model.dac_channels_mixer / 2;
 VAR_13->pcm179x.h6 = VAR_12->model.dac_channels_mixer > 2;

 FUNC_3(VAR_12);

 FUNC_1(VAR_12, VAR_8,
     VAR_0 | VAR_2);
 FUNC_0(VAR_12, VAR_9, VAR_2);

 FUNC_7(VAR_12);
 FUNC_8(VAR_12);
 FUNC_6(VAR_12, &VAR_13->hdmi);
 FUNC_5(VAR_12);

 FUNC_4(VAR_12->card, "PCM1796");
 FUNC_4(VAR_12->card, "CS5381");
}

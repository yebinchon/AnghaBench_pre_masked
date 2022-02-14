
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int anti_pop_delay; } ;
struct xonar_pcm179x {int h6; int has_cs2000; int broken_i2c; int * cs2000_regs; TYPE_2__ generic; } ;
struct TYPE_3__ {int dac_channels_mixer; } ;
struct oxygen {int card; TYPE_1__ model; struct xonar_pcm179x* model_data; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (struct oxygen*) ;
 int FUNC_2 (struct oxygen*,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct oxygen*) ;
 int FUNC_5 (struct oxygen*) ;

__attribute__((used)) static void FUNC_6(struct oxygen *VAR_10)
{
 struct xonar_pcm179x *VAR_11 = VAR_10->model_data;

 VAR_11->generic.anti_pop_delay = 100;
 VAR_11->h6 = VAR_10->model.dac_channels_mixer > 2;
 VAR_11->has_cs2000 = 1;
 VAR_11->cs2000_regs[VAR_0] = VAR_1;
 VAR_11->broken_i2c = 1;

 FUNC_2(VAR_10, VAR_4,
         VAR_9 |
         VAR_7 |
         FUNC_0(VAR_11->h6 ? VAR_2 : VAR_3) |
         VAR_6 |
         VAR_8 |
         VAR_5);

 FUNC_5(VAR_10);
 FUNC_1(VAR_10);
 FUNC_4(VAR_10);

 FUNC_3(VAR_10->card, "CS2000");
}

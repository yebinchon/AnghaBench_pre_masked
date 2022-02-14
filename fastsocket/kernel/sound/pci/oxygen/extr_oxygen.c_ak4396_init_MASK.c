
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dac_channels_pcm; } ;
struct oxygen {int card; TYPE_1__ model; struct generic_data* model_data; } ;
struct generic_data {int dacs; int** ak4396_regs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct oxygen*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_4)
{
 struct generic_data *VAR_5 = VAR_4->model_data;

 VAR_5->dacs = VAR_4->model.dac_channels_pcm / 2;
 VAR_5->ak4396_regs[0][VAR_0] =
  VAR_3 | VAR_1 | VAR_2;
 FUNC_0(VAR_4);
 FUNC_1(VAR_4->card, "AK4396");
}

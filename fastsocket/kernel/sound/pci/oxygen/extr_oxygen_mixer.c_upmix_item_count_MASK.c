
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dac_channels_pcm; scalar_t__ update_center_lfe_mix; } ;
struct oxygen {TYPE_1__ model; } ;



__attribute__((used)) static unsigned int FUNC_0(struct oxygen *VAR_0)
{
 if (VAR_0->model.dac_channels_pcm < 8)
  return 2;
 else if (VAR_0->model.update_center_lfe_mix)
  return 5;
 else
  return 3;
}

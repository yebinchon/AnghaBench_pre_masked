
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cur_tick; } ;
struct snd_seq_timer {TYPE_1__ tick; } ;
typedef int snd_seq_tick_time_t ;



snd_seq_tick_time_t FUNC_0(struct snd_seq_timer *VAR_0)
{
 return VAR_0->tick.cur_tick;
}

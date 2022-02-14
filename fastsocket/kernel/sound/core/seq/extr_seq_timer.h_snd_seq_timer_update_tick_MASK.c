
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_timer_tick {int resolution; unsigned long fraction; unsigned int cur_tick; } ;



__attribute__((used)) static inline void FUNC_0(struct snd_seq_timer_tick *VAR_0,
          unsigned long VAR_1)
{
 if (VAR_0->resolution > 0) {
  VAR_0->fraction += VAR_1;
  VAR_0->cur_tick += (unsigned int)(VAR_0->fraction / VAR_0->resolution);
  VAR_0->fraction %= VAR_0->resolution;
 }
}

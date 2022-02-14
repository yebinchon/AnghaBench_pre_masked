
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_timer_tick {int resolution; } ;


 int FUNC_0 (struct snd_seq_timer_tick*,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_seq_timer_tick *VAR_0,
           int VAR_1, int VAR_2)
{
 if (VAR_1 < 1000000)
  VAR_0->resolution = (VAR_1 * 1000) / VAR_2;
 else {

  unsigned int VAR_3;
  VAR_3 = VAR_1 % VAR_2;
  VAR_3 = (VAR_3 * 1000) / VAR_2;
  VAR_0->resolution = (VAR_1 / VAR_2) * 1000;
  VAR_0->resolution += VAR_3;
 }
 if (VAR_0->resolution <= 0)
  VAR_0->resolution = 1;
 FUNC_0(VAR_0, 0);
}

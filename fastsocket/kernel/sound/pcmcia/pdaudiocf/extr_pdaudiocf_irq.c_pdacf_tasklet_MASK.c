
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pdacf {int chip_status; unsigned long port; int pcm_frame; int pcm_hwptr; int pcm_size; int pcm_tdone; int pcm_period; int reg_lock; TYPE_1__* pcm_substream; } ;
struct TYPE_3__ {int * runtime; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct snd_pdacf*,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(unsigned long VAR_5)
{
 struct snd_pdacf *VAR_6 = (struct snd_pdacf *) VAR_5;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 if ((VAR_6->chip_status & (VAR_4|VAR_3)) != VAR_3)
  return;

 if (VAR_6->pcm_substream == ((void*)0) || VAR_6->pcm_substream->runtime == ((void*)0) || !FUNC_3(VAR_6->pcm_substream))
  return;

 VAR_10 = FUNC_0(VAR_6->port + VAR_1);
 VAR_11 = FUNC_0(VAR_6->port + VAR_2);

 VAR_7 = VAR_11 - VAR_10;
 if (VAR_7 < 0)
  VAR_7 += 0x10000;
 if (VAR_7 == 0)
  VAR_7 = 0x10000;
 VAR_7 /= VAR_6->pcm_frame;
 if (VAR_7 > 64)
  VAR_7 -= 32;
 VAR_8 = VAR_6->pcm_hwptr + VAR_6->pcm_tdone;
 VAR_8 %= VAR_6->pcm_size;
 VAR_6->pcm_tdone += VAR_7;
 while (VAR_7 > 0) {
  VAR_9 = VAR_6->pcm_size - VAR_8;
  if (VAR_9 > VAR_7)
   VAR_9 = VAR_7;
  FUNC_1(VAR_6, VAR_9, VAR_8);
  VAR_8 += VAR_9;
  VAR_8 %= VAR_6->pcm_size;
  VAR_7 -= VAR_9;
 }

 FUNC_4(&VAR_6->reg_lock);
 while (VAR_6->pcm_tdone >= VAR_6->pcm_period) {
  VAR_6->pcm_hwptr += VAR_6->pcm_period;
  VAR_6->pcm_hwptr %= VAR_6->pcm_size;
  VAR_6->pcm_tdone -= VAR_6->pcm_period;
  FUNC_5(&VAR_6->reg_lock);
  FUNC_2(VAR_6->pcm_substream);
  FUNC_4(&VAR_6->reg_lock);
 }
 FUNC_5(&VAR_6->reg_lock);

}

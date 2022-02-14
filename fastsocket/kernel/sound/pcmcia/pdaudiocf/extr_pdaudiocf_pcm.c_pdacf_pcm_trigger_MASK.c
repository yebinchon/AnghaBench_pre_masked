
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pdacf {int chip_status; TYPE_1__* ak4117; int reg_lock; scalar_t__ pcm_running; int pcm_tdone; int pcm_hwptr; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; } ;
struct TYPE_2__ {int rcs0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;






 unsigned short FUNC_0 (struct snd_pdacf*,int ) ;
 int FUNC_1 (struct snd_pdacf*,int ,unsigned short) ;
 int FUNC_2 (TYPE_1__*,int) ;
 struct snd_pdacf* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_9, int VAR_10)
{
 struct snd_pdacf *VAR_11 = FUNC_3(VAR_9);
 struct snd_pcm_runtime *VAR_12 = VAR_9->runtime;
 int VAR_13, VAR_14 = 0, VAR_15;
 unsigned short VAR_16, VAR_17, VAR_18;

 if (VAR_11->chip_status & VAR_8)
  return -VAR_3;

 switch (VAR_10) {
 case 130:
  VAR_11->pcm_hwptr = 0;
  VAR_11->pcm_tdone = 0;

 case 132:
 case 131:
  VAR_16 = 0;
  VAR_17 = VAR_6;
  VAR_13 = 1;
  VAR_15 = FUNC_2(VAR_11->ak4117, VAR_1|VAR_0);
  break;
 case 129:
 case 133:
 case 128:
  VAR_16 = VAR_6;
  VAR_17 = 0;
  VAR_13 = -1;
  VAR_15 = 0;
  break;
 default:
  return -VAR_4;
 }
 FUNC_4(&VAR_11->reg_lock);
 VAR_11->pcm_running += VAR_13;
 VAR_18 = FUNC_0(VAR_11, VAR_7);
 if (VAR_11->pcm_running) {
  if ((VAR_11->ak4117->rcs0 & VAR_2) || VAR_12->rate != VAR_15) {
   VAR_11->pcm_running -= VAR_13;
   VAR_14 = -VAR_5;
   goto __end;
  }
 }
 VAR_18 &= ~VAR_16;
 VAR_18 |= VAR_17;
 FUNC_1(VAR_11, VAR_7, VAR_18);
      __end:
 FUNC_5(&VAR_11->reg_lock);
 FUNC_2(VAR_11->ak4117, VAR_0);
 return VAR_14;
}

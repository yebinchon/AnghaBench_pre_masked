
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soundscape {scalar_t__ midi_usage; int hw_in_use; int fwlock; } ;
struct snd_hwdep {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct soundscape* FUNC_0 (struct snd_hwdep*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_hwdep * VAR_1, struct file *VAR_2)
{
 register struct soundscape *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;
 int VAR_5;

 FUNC_1(&VAR_3->fwlock, VAR_4);

 if ((VAR_3->midi_usage != 0) || VAR_3->hw_in_use) {
  VAR_5 = -VAR_0;
 } else {
  VAR_3->hw_in_use = 1;
  VAR_5 = 0;
 }

 FUNC_2(&VAR_3->fwlock, VAR_4);
 return VAR_5;
}

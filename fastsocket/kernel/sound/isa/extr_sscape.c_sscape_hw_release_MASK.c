
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soundscape {int fwlock; scalar_t__ hw_in_use; } ;
struct snd_hwdep {int dummy; } ;
struct file {int dummy; } ;


 struct soundscape* FUNC_0 (struct snd_hwdep*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_hwdep * VAR_0, struct file *VAR_1)
{
 register struct soundscape *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->fwlock, VAR_3);
 VAR_2->hw_in_use = 0;
 FUNC_2(&VAR_2->fwlock, VAR_3);
 return 0;
}

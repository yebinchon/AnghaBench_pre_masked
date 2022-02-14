
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sb_csp {int running; TYPE_1__* chip; } ;
struct TYPE_2__ {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_sb_csp * VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 if (!(VAR_3->running & VAR_2))
  return -VAR_0;

 FUNC_1(&VAR_3->chip->reg_lock, VAR_5);
 VAR_4 = FUNC_0(VAR_3->chip, 0x80, 0xff);
 FUNC_2(&VAR_3->chip->reg_lock, VAR_5);
 if (!(VAR_4))
  VAR_3->running |= VAR_1;

 return VAR_4;
}

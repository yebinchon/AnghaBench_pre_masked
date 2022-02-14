
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct snd_mpu401 {scalar_t__ rmidi; int timer_lock; TYPE_1__ timer; } ;


 int FUNC_0 (struct snd_mpu401*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_1)
{
 struct snd_mpu401 *VAR_2 = (struct snd_mpu401 *)VAR_1;
 unsigned long VAR_3;

 FUNC_2(&VAR_2->timer_lock, VAR_3);

 VAR_2->timer.expires = 1 + VAR_0;
 FUNC_1(&VAR_2->timer);
 FUNC_3(&VAR_2->timer_lock, VAR_3);
 if (VAR_2->rmidi)
  FUNC_0(VAR_2);
}

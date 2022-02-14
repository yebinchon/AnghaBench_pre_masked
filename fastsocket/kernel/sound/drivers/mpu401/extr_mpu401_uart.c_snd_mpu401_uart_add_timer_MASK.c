
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long data; scalar_t__ expires; int function; } ;
struct snd_mpu401 {int timer_lock; int timer_invoked; TYPE_1__ timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4 (struct snd_mpu401 *VAR_4, int VAR_5)
{
 unsigned long VAR_6;

 FUNC_2 (&VAR_4->timer_lock, VAR_6);
 if (VAR_4->timer_invoked == 0) {
  FUNC_1(&VAR_4->timer);
  VAR_4->timer.data = (unsigned long)VAR_4;
  VAR_4->timer.function = VAR_3;
  VAR_4->timer.expires = 1 + VAR_2;
  FUNC_0(&VAR_4->timer);
 }
 VAR_4->timer_invoked |= VAR_5 ? VAR_0 :
  VAR_1;
 FUNC_3 (&VAR_4->timer_lock, VAR_6);
}

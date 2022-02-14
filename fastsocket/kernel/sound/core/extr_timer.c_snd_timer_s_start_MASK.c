
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long expires; } ;
struct snd_timer_system_private {unsigned long last_jiffies; int correction; unsigned long last_expires; TYPE_1__ tlist; } ;
struct snd_timer {int sticks; scalar_t__ private_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned long VAR_0 ;

__attribute__((used)) static int FUNC_1(struct snd_timer * VAR_1)
{
 struct snd_timer_system_private *VAR_2;
 unsigned long VAR_3;

 VAR_2 = (struct snd_timer_system_private *) VAR_1->private_data;
 VAR_3 = (VAR_2->last_jiffies = VAR_0);
 if (VAR_2->correction > VAR_1->sticks - 1) {
  VAR_2->correction -= VAR_1->sticks - 1;
  VAR_3++;
 } else {
  VAR_3 += VAR_1->sticks - VAR_2->correction;
  VAR_2->correction = 0;
 }
 VAR_2->last_expires = VAR_2->tlist.expires = VAR_3;
 FUNC_0(&VAR_2->tlist);
 return 0;
}

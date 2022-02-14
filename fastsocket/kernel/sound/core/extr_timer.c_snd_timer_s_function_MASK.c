
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_system_private {long correction; scalar_t__ last_jiffies; scalar_t__ last_expires; } ;
struct snd_timer {struct snd_timer_system_private* private_data; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct snd_timer*,long) ;
 scalar_t__ FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 struct snd_timer *VAR_2 = (struct snd_timer *)VAR_1;
 struct snd_timer_system_private *VAR_3 = VAR_2->private_data;
 unsigned long VAR_4 = VAR_0;
 if (FUNC_1(VAR_4, VAR_3->last_expires))
  VAR_3->correction += (long)VAR_4 - (long)VAR_3->last_expires;
 FUNC_0(VAR_2, (long)VAR_4 - (long)VAR_3->last_jiffies);
}

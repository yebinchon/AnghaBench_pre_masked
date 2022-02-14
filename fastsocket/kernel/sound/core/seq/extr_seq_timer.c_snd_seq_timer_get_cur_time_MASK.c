
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_5__ {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct snd_seq_timer {TYPE_1__ last_update; scalar_t__ running; TYPE_2__ cur_time; } ;
typedef TYPE_2__ snd_seq_real_time_t ;


 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (TYPE_2__*) ;

snd_seq_real_time_t FUNC_2(struct snd_seq_timer *VAR_0)
{
 snd_seq_real_time_t VAR_1;

 VAR_1 = VAR_0->cur_time;
 if (VAR_0->running) {
  struct timeval VAR_2;
  int VAR_3;
  FUNC_0(&VAR_2);
  VAR_3 = (int)(VAR_2.tv_usec - VAR_0->last_update.tv_usec);
  if (VAR_3 < 0) {
   VAR_1.tv_nsec += (1000000 + VAR_3) * 1000;
   VAR_1.tv_sec += VAR_2.tv_sec - VAR_0->last_update.tv_sec - 1;
  } else {
   VAR_1.tv_nsec += VAR_3 * 1000;
   VAR_1.tv_sec += VAR_2.tv_sec - VAR_0->last_update.tv_sec;
  }
  FUNC_1(&VAR_1);
 }

 return VAR_1;
}

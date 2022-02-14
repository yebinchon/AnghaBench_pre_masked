
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct snd_uart16550 {int timer_running; TYPE_1__ buffer_timer; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void FUNC_1(struct snd_uart16550 *VAR_2)
{
 if (!VAR_2->timer_running) {

  VAR_2->buffer_timer.expires = VAR_1 + (VAR_0+255)/256;
  VAR_2->timer_running = 1;
  FUNC_0(&VAR_2->buffer_timer);
 }
}

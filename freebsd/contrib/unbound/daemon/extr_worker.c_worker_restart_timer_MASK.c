
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cfg; } ;
struct worker {int stat_timer; TYPE_2__ env; } ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_3__ {scalar_t__ stat_interval; } ;


 int FUNC_0 (int ,struct timeval*) ;

__attribute__((used)) static void
FUNC_1(struct worker* VAR_0)
{
 if(VAR_0->env.cfg->stat_interval > 0) {
  struct timeval VAR_1;

  VAR_1.tv_sec = VAR_0->env.cfg->stat_interval;
  VAR_1.tv_usec = 0;

  FUNC_0(VAR_0->stat_timer, &VAR_1);
 }
}

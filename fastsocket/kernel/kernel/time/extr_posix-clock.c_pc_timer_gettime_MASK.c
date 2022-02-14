
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct posix_clock_desc {TYPE_2__* clk; } ;
struct k_itimer {int it_clock; } ;
struct itimerspec {int dummy; } ;
typedef int clockid_t ;
struct TYPE_3__ {int (* timer_gettime ) (TYPE_2__*,struct k_itimer*,struct itimerspec*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 scalar_t__ FUNC_0 (int ,struct posix_clock_desc*) ;
 int FUNC_1 (struct posix_clock_desc*) ;
 int FUNC_2 (TYPE_2__*,struct k_itimer*,struct itimerspec*) ;

__attribute__((used)) static void FUNC_3(struct k_itimer *VAR_0, struct itimerspec *VAR_1)
{
 clockid_t VAR_2 = VAR_0->it_clock;
 struct posix_clock_desc VAR_3;

 if (FUNC_0(VAR_2, &VAR_3))
  return;

 if (VAR_3.clk->ops.timer_gettime)
  VAR_3.clk->ops.timer_gettime(VAR_3.clk, VAR_0, VAR_1);

 FUNC_1(&VAR_3);
}

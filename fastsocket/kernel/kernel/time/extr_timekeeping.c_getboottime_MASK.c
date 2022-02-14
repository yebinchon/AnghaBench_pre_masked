
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_5__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_6__ {TYPE_2__ total_sleep_time; TYPE_1__ wall_to_monotonic; } ;


 int FUNC_0 (struct timespec*,scalar_t__,scalar_t__) ;
 TYPE_3__ VAR_0 ;

void FUNC_1(struct timespec *VAR_1)
{
 struct timespec VAR_2 = {
  .tv_sec = VAR_0.wall_to_monotonic.tv_sec +
    VAR_0.total_sleep_time.tv_sec,
  .tv_nsec = VAR_0.wall_to_monotonic.tv_nsec +
    VAR_0.total_sleep_time.tv_nsec
 };

 FUNC_0(VAR_1, -VAR_2.tv_sec, -VAR_2.tv_nsec);
}

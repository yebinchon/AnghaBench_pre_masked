
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int tv_nsec; int tv_sec; } ;
struct TYPE_2__ {int offs_real; struct timespec wall_to_monotonic; } ;


 int FUNC_0 (struct timespec*,int ,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct timespec) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct timespec VAR_1, *VAR_2 = &VAR_0.wall_to_monotonic;

 FUNC_0(&VAR_1, -VAR_2->tv_sec, -VAR_2->tv_nsec);
 VAR_0.offs_real = FUNC_1(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tv64; } ;
struct TYPE_5__ {int timer; TYPE_1__ interval; } ;
struct TYPE_6__ {TYPE_2__ real; } ;
struct k_itimer {TYPE_3__ it; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct k_itimer *VAR_1)
{
 VAR_1->it.real.interval.tv64 = 0;

 if (FUNC_0(&VAR_1->it.real.timer) < 0)
  return VAR_0;
 return 0;
}

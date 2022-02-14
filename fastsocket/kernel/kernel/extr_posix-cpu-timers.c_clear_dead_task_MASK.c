
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union cpu_time_count {int dummy; } cpu_time_count ;
struct TYPE_3__ {int expires; int * task; } ;
struct TYPE_4__ {TYPE_1__ cpu; } ;
struct k_itimer {TYPE_2__ it; int it_clock; } ;


 int FUNC_0 (int ,int ,union cpu_time_count) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct k_itimer *VAR_0, union cpu_time_count VAR_1)
{




 FUNC_1(VAR_0->it.cpu.task);
 VAR_0->it.cpu.task = ((void*)0);
 VAR_0->it.cpu.expires = FUNC_0(VAR_0->it_clock,
          VAR_0->it.cpu.expires,
          VAR_1);
}

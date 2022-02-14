
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srcu_struct {int per_cpu_ref; } ;
struct TYPE_2__ {int * c; } ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(struct srcu_struct *VAR_0, int VAR_1)
{
 FUNC_1();
 FUNC_4();
 FUNC_0(VAR_0->per_cpu_ref, FUNC_3())->c[VAR_1]--;
 FUNC_2();
}

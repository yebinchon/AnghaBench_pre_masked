
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srcu_struct {int completed; int per_cpu_ref; } ;
struct TYPE_2__ {int * c; } ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(struct srcu_struct *VAR_0)
{
 int VAR_1;

 FUNC_2();
 VAR_1 = VAR_0->completed & 0x1;
 FUNC_0();
 FUNC_1(VAR_0->per_cpu_ref, FUNC_4())->c[VAR_1]++;
 FUNC_5();
 FUNC_3();
 return VAR_1;
}

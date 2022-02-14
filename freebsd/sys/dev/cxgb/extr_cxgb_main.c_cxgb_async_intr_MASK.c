
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int slow_intr_task; int tq; } ;
typedef TYPE_1__ adapter_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 adapter_t *VAR_2 = VAR_1;

 FUNC_1(VAR_2, VAR_0, 0);
 (void) FUNC_0(VAR_2, VAR_0);
 FUNC_2(VAR_2->tq, &VAR_2->slow_intr_task);
}

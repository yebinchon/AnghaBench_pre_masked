
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tasklet_struct {unsigned long data; } ;
struct flow_flush_info {TYPE_1__* cache; } ;
struct TYPE_4__ {struct tasklet_struct flush_tasklet; } ;
struct TYPE_3__ {int percpu; } ;


 TYPE_2__* FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct tasklet_struct*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct flow_flush_info *VAR_1 = VAR_0;
 int VAR_2;
 struct tasklet_struct *VAR_3;

 VAR_2 = FUNC_1();
 VAR_3 = &FUNC_0(VAR_1->cache->percpu, VAR_2)->flush_tasklet;
 VAR_3->data = (unsigned long)VAR_1;
 FUNC_2(VAR_3);
}

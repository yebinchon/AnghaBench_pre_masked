
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct worker {int thread_num; TYPE_2__* daemon; int cmd; } ;
struct TYPE_4__ {int num_ports; int * ports; TYPE_1__* cfg; } ;
struct TYPE_3__ {scalar_t__ so_reuseport; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct worker*,TYPE_1__*,int ,int ) ;
 int FUNC_6 (struct worker*) ;

__attribute__((used)) static void*
FUNC_7(void* VAR_0)
{
 struct worker* VAR_1 = (struct worker*)VAR_0;
 int VAR_2 = 0;
 FUNC_2(&VAR_1->thread_num);
 FUNC_4();
 if(!FUNC_5(VAR_1, VAR_1->daemon->cfg,
   VAR_1->daemon->ports[VAR_2], 0))
  FUNC_1("Could not initialize thread");

 FUNC_6(VAR_1);
 return ((void*)0);
}

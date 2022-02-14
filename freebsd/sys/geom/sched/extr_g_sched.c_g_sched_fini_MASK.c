
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_class {int dummy; } ;
struct TYPE_2__ {int gs_mtx; int gs_scheds; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct g_class *VAR_1)
{

 FUNC_3();

 FUNC_0(0, "Unloading...");

 FUNC_1(FUNC_2(&VAR_0.gs_scheds), ("still registered schedulers"));
 FUNC_4(&VAR_0.gs_mtx);
}

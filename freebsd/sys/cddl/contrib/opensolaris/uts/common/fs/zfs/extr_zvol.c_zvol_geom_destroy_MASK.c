
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zv_state; struct g_provider* zv_provider; int zv_queue_mtx; int zv_queue; } ;
typedef TYPE_1__ zvol_state_t ;
struct g_provider {int geom; int * private; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int*,int *,int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(zvol_state_t *VAR_1)
{
 struct g_provider *VAR_2;

 FUNC_0();

 FUNC_4(&VAR_1->zv_queue_mtx);
 VAR_1->zv_state = 1;
 FUNC_5(&VAR_1->zv_queue);
 while (VAR_1->zv_state != 2)
  FUNC_2(&VAR_1->zv_state, &VAR_1->zv_queue_mtx, 0, "zvol:w", 0);
 FUNC_3(&VAR_1->zv_queue_mtx);

 VAR_2 = VAR_1->zv_provider;
 VAR_1->zv_provider = ((void*)0);
 VAR_2->private = ((void*)0);
 FUNC_1(VAR_2->geom, VAR_0);
}

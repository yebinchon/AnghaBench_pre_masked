
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cam_ed {int refcount; TYPE_1__* target; } ;
struct cam_eb {int eb_mtx; } ;
struct TYPE_2__ {struct cam_eb* bus; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct cam_ed *VAR_0)
{
 struct cam_eb *VAR_1 = VAR_0->target->bus;

 FUNC_0(&VAR_1->eb_mtx);
 VAR_0->refcount++;
 FUNC_1(&VAR_1->eb_mtx);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_et {int refcount; struct cam_eb* bus; } ;
struct cam_eb {int eb_mtx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct cam_et *VAR_0)
{
 struct cam_eb *VAR_1 = VAR_0->bus;

 FUNC_0(&VAR_1->eb_mtx);
 VAR_0->refcount++;
 FUNC_1(&VAR_1->eb_mtx);
}

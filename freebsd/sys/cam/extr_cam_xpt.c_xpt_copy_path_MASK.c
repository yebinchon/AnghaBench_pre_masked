
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_path {int * device; int * target; int * bus; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct cam_path *VAR_0, struct cam_path *VAR_1)
{

 *VAR_0 = *VAR_1;
 if (VAR_1->bus != ((void*)0))
  FUNC_0(VAR_1->bus);
 if (VAR_1->target != ((void*)0))
  FUNC_2(VAR_1->target);
 if (VAR_1->device != ((void*)0))
  FUNC_1(VAR_1->device);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_path {int * bus; int * target; int * device; } ;


 int FUNC_0 (struct cam_path*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct cam_path *VAR_1)
{
 FUNC_0(VAR_1, VAR_0, ("xpt_release_path\n"));
 if (VAR_1->device != ((void*)0)) {
  FUNC_2(VAR_1->device);
  VAR_1->device = ((void*)0);
 }
 if (VAR_1->target != ((void*)0)) {
  FUNC_3(VAR_1->target);
  VAR_1->target = ((void*)0);
 }
 if (VAR_1->bus != ((void*)0)) {
  FUNC_1(VAR_1->bus);
  VAR_1->bus = ((void*)0);
 }
}

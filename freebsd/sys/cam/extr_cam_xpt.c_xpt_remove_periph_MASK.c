
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cam_periph {TYPE_1__* path; } ;
struct cam_ed {TYPE_3__* target; int periphs; int generation; } ;
struct TYPE_8__ {int xpt_generation; } ;
struct TYPE_7__ {TYPE_2__* bus; } ;
struct TYPE_6__ {int eb_mtx; } ;
struct TYPE_5__ {struct cam_ed* device; } ;


 int FUNC_0 (int *,struct cam_periph*,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;

void
FUNC_4(struct cam_periph *VAR_3)
{
 struct cam_ed *VAR_4;

 VAR_4 = VAR_3->path->device;
 if (VAR_4 != ((void*)0)) {
  FUNC_2(&VAR_4->target->bus->eb_mtx);
  VAR_4->generation++;
  FUNC_0(&VAR_4->periphs, VAR_3, VAR_0, VAR_1);
  FUNC_3(&VAR_4->target->bus->eb_mtx);
  FUNC_1(&VAR_2.xpt_generation, 1);
 }
}

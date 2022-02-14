
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cam_periph {TYPE_3__* path; int periph_run_task; } ;
struct cam_ed {TYPE_2__* target; int periphs; int generation; } ;
typedef int int32_t ;
struct TYPE_8__ {int xpt_generation; } ;
struct TYPE_7__ {struct cam_ed* device; } ;
struct TYPE_6__ {TYPE_1__* bus; } ;
struct TYPE_5__ {int eb_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct cam_periph*,int ) ;
 int FUNC_1 (int *,int ,int ,struct cam_periph*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;

int32_t
FUNC_5(struct cam_periph *VAR_4)
{
 struct cam_ed *VAR_5;
 int32_t VAR_6;

 FUNC_1(&VAR_4->periph_run_task, 0, VAR_2, VAR_4);
 VAR_5 = VAR_4->path->device;
 VAR_6 = VAR_0;
 if (VAR_5 != ((void*)0)) {
  FUNC_3(&VAR_5->target->bus->eb_mtx);
  VAR_5->generation++;
  FUNC_0(&VAR_5->periphs, VAR_4, VAR_1);
  FUNC_4(&VAR_5->target->bus->eb_mtx);
  FUNC_2(&VAR_3.xpt_generation, 1);
 }

 return (VAR_6);
}

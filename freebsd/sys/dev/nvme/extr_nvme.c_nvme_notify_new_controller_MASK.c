
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_controller {int dummy; } ;
struct TYPE_3__ {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_1__*,struct nvme_controller*) ;

void
FUNC_1(struct nvme_controller *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2[VAR_4].id != VAR_0) {
   FUNC_0(&VAR_2[VAR_4], VAR_3);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mapped; int rid; scalar_t__ irq; } ;
struct TYPE_4__ {int core_idx; } ;
struct TYPE_5__ {TYPE_1__ core_info; int intr_en; } ;
struct siba_devinfo {TYPE_3__ intr; int resources; TYPE_2__ core_id; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int *,int ,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, device_t VAR_2,
     struct siba_devinfo *VAR_3)
{
 int VAR_4;


 if (!VAR_3->core_id.intr_en)
  return (0);


 VAR_3->intr.mapped = 0;
 VAR_3->intr.irq = 0;
 VAR_3->intr.rid = -1;


 VAR_4 = FUNC_0(VAR_1, VAR_2, 0 ,
     &VAR_3->intr.irq);
 if (VAR_4) {
  FUNC_1(VAR_1, "failed mapping interrupt line for core %u: "
      "%d\n", VAR_3->core_id.core_info.core_idx, VAR_4);
  return (VAR_4);
 }
 VAR_3->intr.mapped = 1;


 VAR_3->intr.rid = FUNC_2(&VAR_3->resources, VAR_0,
     VAR_3->intr.irq, VAR_3->intr.irq, 1);

 return (0);
}

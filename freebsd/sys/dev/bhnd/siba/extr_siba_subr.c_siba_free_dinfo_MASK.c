
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_4__ {int mapped; int irq; } ;
struct TYPE_3__ {scalar_t__ intr_en; } ;
struct siba_devinfo {int* cfg_rid; TYPE_2__ intr; TYPE_1__ core_id; int ** cfg_res; int cfg; int resources; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (struct siba_devinfo*,int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

void
FUNC_5(device_t VAR_2, device_t VAR_3, struct siba_devinfo *VAR_4)
{
 FUNC_4(&VAR_4->resources);


 for (u_int VAR_5 = 0; VAR_5 < FUNC_3(VAR_4->cfg); VAR_5++) {
  if (VAR_4->cfg_res[VAR_5] == ((void*)0))
   continue;

  FUNC_1(VAR_2, VAR_1, VAR_4->cfg_rid[VAR_5],
      VAR_4->cfg_res[VAR_5]);

  VAR_4->cfg_res[VAR_5] = ((void*)0);
  VAR_4->cfg_rid[VAR_5] = -1;
 }


 if (VAR_4->core_id.intr_en && VAR_4->intr.mapped) {
  FUNC_0(VAR_2, VAR_3, VAR_4->intr.irq);
  VAR_4->intr.mapped = 0;
 }

 FUNC_2(VAR_4, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct cam_devq {int dummy; } ;
struct TYPE_7__ {int num_vports; int sim_lock; struct cam_devq* devq; scalar_t__ io_in_use; int io_high_watermark; int dev; } ;
typedef TYPE_1__ ocs_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct cam_devq* FUNC_0 (int ) ;
 int FUNC_1 (struct cam_devq*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,char*,int) ;
 int FUNC_9 (TYPE_1__*,int ) ;

int32_t
FUNC_10(ocs_t *VAR_2)
{
 struct cam_devq *VAR_3 = ((void*)0);
 int VAR_4 = 0;
 uint32_t VAR_5 = FUNC_9(VAR_2, VAR_1);

 if (((void*)0) == (VAR_3 = FUNC_0(VAR_5))) {
  FUNC_2(VAR_2->dev, "Can't allocate SIMQ\n");
  return -1;
 }

 VAR_2->devq = VAR_3;

 if (FUNC_5(&VAR_2->sim_lock) == 0) {
  FUNC_4(&VAR_2->sim_lock, "ocs_sim_lock", ((void*)0), VAR_0);
 }

 for (VAR_4 = 0; VAR_4 < (VAR_2->num_vports + 1); VAR_4++) {
  if (FUNC_6(VAR_2, VAR_4)) {
   FUNC_8(VAR_2, "Attach port failed for chan: %d\n", VAR_4);
   goto detach_port;
  }
 }

 VAR_2->io_high_watermark = VAR_5;
 VAR_2->io_in_use = 0;
 return 0;

detach_port:
 while (--VAR_4 >= 0) {
  FUNC_7(VAR_2, VAR_4);
 }

 FUNC_1(VAR_2->devq);

 if (FUNC_5(&VAR_2->sim_lock))
  FUNC_3(&VAR_2->sim_lock);

 return 1;
}

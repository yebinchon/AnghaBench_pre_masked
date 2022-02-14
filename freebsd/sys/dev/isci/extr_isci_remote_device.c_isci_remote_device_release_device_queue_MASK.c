
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ISCI_REMOTE_DEVICE {TYPE_2__* domain; void* release_queued_ccb; int queued_ccbs; } ;
typedef scalar_t__ lun_id_t ;
struct TYPE_4__ {TYPE_1__* controller; } ;
struct TYPE_3__ {void* release_queued_ccbs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 void* VAR_1 ;
 int FUNC_1 (int,char*,char*,struct ISCI_REMOTE_DEVICE*) ;
 int FUNC_2 (struct ISCI_REMOTE_DEVICE*,scalar_t__) ;

void
FUNC_3(
    struct ISCI_REMOTE_DEVICE *VAR_2)
{
 if (FUNC_0(&VAR_2->queued_ccbs)) {
  lun_id_t VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   FUNC_2(VAR_2, VAR_3);
 } else {
  VAR_2->release_queued_ccb = VAR_1;
  VAR_2->domain->controller->release_queued_ccbs = VAR_1;

  FUNC_1(1, "ISCI", "schedule %p for release\n",
      VAR_2);
 }
}

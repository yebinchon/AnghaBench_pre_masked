
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cam_path {int dummy; } ;
struct ISCI_REMOTE_DEVICE {int frozen_lun_mask; int index; TYPE_2__* domain; } ;
typedef int lun_id_t ;
struct TYPE_4__ {TYPE_1__* controller; } ;
struct TYPE_3__ {int sim; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cam_path**,int *,int ,int ,int) ;
 int FUNC_2 (struct cam_path*) ;
 int FUNC_3 (struct cam_path*,int,int ) ;

void
FUNC_4(struct ISCI_REMOTE_DEVICE *VAR_1,
    lun_id_t VAR_2)
{
 if (VAR_1->frozen_lun_mask & (1 << VAR_2)) {
  struct cam_path *VAR_3;

  VAR_1->frozen_lun_mask &= ~(1 << VAR_2);
  FUNC_1(&VAR_3, ((void*)0),
      FUNC_0(VAR_1->domain->controller->sim),
      VAR_1->index, VAR_2);
  FUNC_3(VAR_3, 1, VAR_0);
  FUNC_2(VAR_3);
 }
}

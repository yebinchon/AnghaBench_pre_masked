
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


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cam_path**,int *,int ,int ,int) ;
 int FUNC_2 (struct cam_path*) ;
 int FUNC_3 (struct cam_path*,int) ;

void
FUNC_4(struct ISCI_REMOTE_DEVICE *VAR_0,
    lun_id_t VAR_1)
{
 if (!(VAR_0->frozen_lun_mask & (1 << VAR_1))) {
  struct cam_path *VAR_2;

  FUNC_1(&VAR_2, ((void*)0),
      FUNC_0(VAR_0->domain->controller->sim),
      VAR_0->index, VAR_1);
  FUNC_3(VAR_2, 1);
  FUNC_2(VAR_2);
  VAR_0->frozen_lun_mask |= (1 << VAR_1);
 }
}

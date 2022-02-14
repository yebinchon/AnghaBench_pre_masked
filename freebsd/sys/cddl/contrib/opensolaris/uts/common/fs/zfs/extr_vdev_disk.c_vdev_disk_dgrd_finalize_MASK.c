
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vdev_guid; int vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef int ldi_handle_t ;
typedef int ldi_ev_cookie_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(ldi_handle_t VAR_1, ldi_ev_cookie_t VAR_2,
    int VAR_3, void *VAR_4, void *VAR_5)
{
 vdev_t *VAR_6 = (vdev_t *)VAR_4;




 if (FUNC_1(FUNC_0(VAR_2), VAR_0) != 0)
  return;





 (void) FUNC_2(VAR_6->vdev_spa, VAR_6->vdev_guid, 0);
}

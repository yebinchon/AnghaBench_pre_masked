
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vdev_spa; int vdev_probe_wanted; } ;
typedef TYPE_1__ vdev_t ;
typedef int ldi_handle_t ;
typedef int ldi_ev_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(ldi_handle_t VAR_4, ldi_ev_cookie_t VAR_5,
    int VAR_6, void *VAR_7, void *VAR_8)
{
 vdev_t *VAR_9 = (vdev_t *)VAR_7;




 if (FUNC_2(FUNC_0(VAR_5), VAR_1) != 0)
  return;





 FUNC_3(VAR_9);





 if (VAR_6 != VAR_2) {
  VAR_9->vdev_probe_wanted = VAR_0;
  FUNC_1(VAR_9->vdev_spa, VAR_3);
 }
}

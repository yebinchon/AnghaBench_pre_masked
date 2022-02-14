
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vdev_spa; void* vdev_remove_wanted; TYPE_2__* vdev_tsd; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_6__ {void* vd_ldi_offline; } ;
typedef TYPE_2__ vdev_disk_t ;
typedef int ldi_handle_t ;
typedef int ldi_ev_cookie_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(ldi_handle_t VAR_4, ldi_ev_cookie_t VAR_5, void *VAR_6,
    void *VAR_7)
{
 vdev_t *VAR_8 = (vdev_t *)VAR_6;
 vdev_disk_t *VAR_9 = VAR_8->vdev_tsd;




 if (FUNC_2(FUNC_0(VAR_5), VAR_1) != 0)
  return (VAR_2);
 VAR_9->vd_ldi_offline = VAR_0;
 FUNC_3(VAR_8);





 FUNC_4(VAR_8->vdev_spa, VAR_8);
 VAR_8->vdev_remove_wanted = VAR_0;
 FUNC_1(VAR_8->vdev_spa, VAR_3);

 return (VAR_2);
}

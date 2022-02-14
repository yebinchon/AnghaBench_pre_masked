
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vdev_nonrot; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint16_t ;
struct g_consumer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct g_consumer*,int*) ;

__attribute__((used)) static void
FUNC_1(vdev_t *VAR_2, struct g_consumer *VAR_3)
{
 int VAR_4;
 uint16_t VAR_5;

 VAR_4 = FUNC_0("GEOM::rotation_rate", VAR_3, &VAR_5);
 if (VAR_4 == 0 && VAR_5 == 1)
  VAR_2->vdev_nonrot = VAR_1;
 else
  VAR_2->vdev_nonrot = VAR_0;
}

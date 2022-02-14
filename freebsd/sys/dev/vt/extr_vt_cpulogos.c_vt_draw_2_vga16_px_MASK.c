
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vt_axis_t ;
struct vt_device {TYPE_1__* vd_driver; } ;
struct TYPE_2__ {int (* vd_setpixel ) (struct vt_device*,scalar_t__,scalar_t__,int ) ;} ;


 int FUNC_0 (struct vt_device*,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (struct vt_device*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (unsigned char) ;

__attribute__((used)) static void
FUNC_3(struct vt_device *VAR_0, vt_axis_t VAR_1, vt_axis_t VAR_2,
    unsigned char VAR_3)
{

 VAR_0->vd_driver->vd_setpixel(VAR_0, VAR_1, VAR_2, FUNC_2(VAR_3 >> 4));
 VAR_0->vd_driver->vd_setpixel(VAR_0, VAR_1 + 1, VAR_2, FUNC_2(VAR_3 & 0xf));
}

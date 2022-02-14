
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_device {scalar_t__ vd_timer_armed; } ;


 int FUNC_0 (struct vt_device*) ;
 int FUNC_1 (struct vt_device*,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct vt_device *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0;

 VAR_2 = FUNC_0(VAR_1);


 if (VAR_2)
  FUNC_1(VAR_1, 0);
 else
  VAR_1->vd_timer_armed = 0;
}

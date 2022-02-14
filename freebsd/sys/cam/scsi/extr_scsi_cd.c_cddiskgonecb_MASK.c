
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disk {scalar_t__ d_drv1; } ;
struct cam_periph {int dummy; } ;


 int FUNC_0 (struct cam_periph*) ;

__attribute__((used)) static void
FUNC_1(struct disk *VAR_0)
{
 struct cam_periph *VAR_1;

 VAR_1 = (struct cam_periph *)VAR_0->d_drv1;
 FUNC_0(VAR_1);
}

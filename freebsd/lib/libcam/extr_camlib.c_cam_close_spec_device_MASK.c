
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_device {int fd; } ;


 int FUNC_0 (int) ;

void
FUNC_1(struct cam_device *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->fd >= 0) {
  FUNC_0(VAR_0->fd);
  VAR_0->fd = -1;
 }
}

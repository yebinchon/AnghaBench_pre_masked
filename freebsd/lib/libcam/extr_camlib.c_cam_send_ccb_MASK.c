
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;
struct cam_device {int fd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,union ccb*) ;

int
FUNC_1(struct cam_device *VAR_1, union ccb *VAR_2)
{
 return(FUNC_0(VAR_1->fd, VAR_0, VAR_2));
}

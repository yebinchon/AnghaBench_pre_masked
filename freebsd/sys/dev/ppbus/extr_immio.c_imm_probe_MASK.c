
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpoio_data {int vpo_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct vpoio_data*) ;

int
FUNC_1(device_t VAR_0, struct vpoio_data *VAR_1)
{
 int VAR_2;


 VAR_1->vpo_dev = VAR_0;


 if ((VAR_2 = FUNC_0(VAR_1))) {
  return (VAR_2);
 }

 return (0);
}

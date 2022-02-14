
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpoio_data {int vpo_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct vpoio_data*) ;

int
FUNC_1(device_t VAR_1, struct vpoio_data *VAR_2)
{
 int VAR_3;


 VAR_2->vpo_dev = VAR_1;




 VAR_0;


 if ((VAR_3 = FUNC_0(VAR_2))) {
  return (VAR_3);
 }

 return (0);
}

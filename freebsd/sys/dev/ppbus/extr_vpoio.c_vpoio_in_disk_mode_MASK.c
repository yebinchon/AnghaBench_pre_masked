
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpoio_data {int vpo_dev; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int*) ;

__attribute__((used)) static int
FUNC_2(struct vpoio_data *VAR_1)
{
 device_t VAR_2 = FUNC_0(VAR_1->vpo_dev);
 int VAR_3;

 FUNC_1(VAR_2, VAR_1->vpo_dev, VAR_0, &VAR_3);

 return (VAR_3);
}

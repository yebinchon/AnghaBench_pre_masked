
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpoio_data {int vpo_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,void*,int ,int) ;
 int FUNC_2 (int ,int ,int ,int*) ;
 int VAR_3 ;

__attribute__((used)) static char
FUNC_3(struct vpoio_data *VAR_4, int VAR_5)
{
 VAR_0;

 device_t VAR_6 = FUNC_0(VAR_4->vpo_dev);
 int VAR_7, VAR_8;
 FUNC_1(VAR_3, 2,
   VAR_1, (void *)&VAR_7,
   VAR_2, VAR_5);

 FUNC_2(VAR_6, VAR_4->vpo_dev, VAR_3, &VAR_8);

 if (VAR_8)
  return (0);

 return(VAR_7);
}

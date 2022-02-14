
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpoio_data {int vpo_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int) ;
 int FUNC_2 (int ,int ,int ,int*) ;
 int VAR_2 ;

__attribute__((used)) static char
FUNC_3(struct vpoio_data *VAR_3, int VAR_4, int VAR_5)
{
 VAR_0;
 device_t VAR_6 = FUNC_0(VAR_3->vpo_dev);
 int VAR_7;


 FUNC_1(VAR_2, 1,
   VAR_1, 1 << VAR_4 | 1 << VAR_5);

 FUNC_2(VAR_6, VAR_3->vpo_dev, VAR_2, &VAR_7);

 return (VAR_7);
}

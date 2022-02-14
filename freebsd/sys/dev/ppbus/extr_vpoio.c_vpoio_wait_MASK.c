
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpoio_data {int vpo_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int ,void*,int ,int) ;
 int FUNC_2 (int ,int ,int ,int*) ;
 scalar_t__ FUNC_3 (int ,int,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;

__attribute__((used)) static char
FUNC_5(struct vpoio_data *VAR_6, int VAR_7)
{
 VAR_0;

 device_t VAR_8 = FUNC_0(VAR_6->vpo_dev);
 int VAR_9, VAR_10;
 FUNC_1(VAR_5, 2,
   VAR_2, (void *)&VAR_9,
   VAR_3, VAR_7);

 FUNC_2(VAR_8, VAR_6->vpo_dev, VAR_5, &VAR_10);

 if (VAR_10)
  return (0);

 return(VAR_9);
}

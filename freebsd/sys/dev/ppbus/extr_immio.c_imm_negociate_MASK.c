
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpoio_data {int vpo_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int ,int) ;
 int FUNC_5 (int ,int ,int ,int*) ;

__attribute__((used)) static int
FUNC_6(struct vpoio_data *VAR_4)
{
 VAR_0;
 device_t VAR_5 = FUNC_2(VAR_4->vpo_dev);
 int VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_5))
  VAR_6 = 0;
 else if (FUNC_1(VAR_5))
  VAR_6 = 1;
 else
  return (0);
 FUNC_4(VAR_3, 1,
   VAR_1, VAR_6);

 FUNC_5(VAR_5, VAR_4->vpo_dev, VAR_3, &VAR_7);

 return (VAR_7);
}

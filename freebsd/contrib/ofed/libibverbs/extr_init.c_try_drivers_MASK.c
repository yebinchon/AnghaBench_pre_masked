
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_sysfs_dev {int dummy; } ;
struct ibv_driver {struct ibv_driver* next; } ;
struct ibv_device {int dummy; } ;


 struct ibv_driver* VAR_0 ;
 struct ibv_device* FUNC_0 (struct ibv_driver*,struct ibv_sysfs_dev*) ;

__attribute__((used)) static struct ibv_device *FUNC_1(struct ibv_sysfs_dev *VAR_1)
{
 struct ibv_driver *VAR_2;
 struct ibv_device *VAR_3;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
  VAR_3 = FUNC_0(VAR_2, VAR_1);
  if (VAR_3)
   return VAR_3;
 }

 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cuse_dev_entered {void* per_file_handle; struct cuse_dev* cdev; } ;
struct cuse_dev {int dummy; } ;


 struct cuse_dev_entered* FUNC_0 () ;

void *
FUNC_1(struct cuse_dev *VAR_0)
{
 struct cuse_dev_entered *VAR_1;

 VAR_1 = FUNC_0();
 if (VAR_1 == ((void*)0) || VAR_1->cdev != VAR_0)
  return (((void*)0));

 return (VAR_1->per_file_handle);
}

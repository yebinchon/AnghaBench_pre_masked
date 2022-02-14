
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cuse_dev_entered {void* per_file_handle; struct cuse_dev* cdev; } ;
struct cuse_dev {int dummy; } ;


 int VAR_0 ;
 struct cuse_dev_entered* FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,void**) ;

void
FUNC_2(struct cuse_dev *VAR_2, void *VAR_3)
{
 struct cuse_dev_entered *VAR_4;

 VAR_4 = FUNC_0();
 if (VAR_4 == ((void*)0) || VAR_4->cdev != VAR_2)
  return;

 VAR_4->per_file_handle = VAR_3;
 FUNC_1(VAR_1, VAR_0, &VAR_3);
}

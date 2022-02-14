
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_ooffset_t ;
struct vm_object {int dummy; } ;
struct ttm_buffer_object {TYPE_1__* bdev; int kref; } ;
struct ttm_bo_driver {int (* verify_access ) (struct ttm_buffer_object*) ;} ;
struct ttm_bo_device {int vm_lock; } ;
struct TYPE_4__ {int td_ucred; } ;
struct TYPE_3__ {struct ttm_bo_driver* driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct vm_object* FUNC_1 (struct ttm_buffer_object*,int ,int *,scalar_t__,int,int ,int ) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ttm_buffer_object*) ;
 int FUNC_8 (struct ttm_buffer_object**) ;
 struct ttm_buffer_object* FUNC_9 (struct ttm_bo_device*,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (int) ;

int
FUNC_11(struct ttm_bo_device *VAR_5, vm_ooffset_t *VAR_6, vm_size_t VAR_7,
    struct vm_object **VAR_8, int VAR_9)
{
 struct ttm_bo_driver *VAR_10;
 struct ttm_buffer_object *VAR_11;
 struct vm_object *VAR_12;
 int VAR_13;

 FUNC_5(&VAR_5->vm_lock);
 VAR_11 = FUNC_9(VAR_5, FUNC_0(*VAR_6), FUNC_0(VAR_7));
 if (FUNC_2(VAR_11 != ((void*)0)))
  FUNC_4(&VAR_11->kref);
 FUNC_6(&VAR_5->vm_lock);

 if (FUNC_10(VAR_11 == ((void*)0))) {
  FUNC_3("[TTM] Could not find buffer object to map\n");
  return (-VAR_0);
 }

 VAR_10 = VAR_11->bdev->driver;
 if (FUNC_10(!VAR_10->verify_access)) {
  VAR_13 = -VAR_1;
  goto out_unref;
 }
 VAR_13 = VAR_10->verify_access(VAR_11);
 if (FUNC_10(VAR_13 != 0))
  goto out_unref;

 VAR_12 = FUNC_1(VAR_11, VAR_2, &VAR_4,
     VAR_7, VAR_9, 0, VAR_3->td_ucred);
 if (VAR_12 == ((void*)0)) {
  VAR_13 = -VAR_0;
  goto out_unref;
 }



 *VAR_6 = 0;
 *VAR_8 = VAR_12;
 return 0;
out_unref:
 FUNC_8(&VAR_11);
 return VAR_13;
}

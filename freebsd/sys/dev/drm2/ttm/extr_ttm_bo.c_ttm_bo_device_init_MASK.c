
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ttm_bo_global {int device_list_mutex; int device_list; } ;
struct ttm_bo_driver {int dummy; } ;
struct ttm_bo_device {int need_dma32; int device_list; int fence_lock; scalar_t__ val_seq; struct ttm_bo_global* glob; int * dev_mapping; int ddestroy; int wq; int addr_space_mm; int addr_space_rb; int man; struct ttm_bo_driver* driver; int vm_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ,int ,struct ttm_bo_device*) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *,char*,int *,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int FUNC_10 (struct ttm_bo_device*,int ) ;
 int VAR_4 ;
 int FUNC_11 (struct ttm_bo_device*,int ,int ) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct ttm_bo_device *VAR_5,
         struct ttm_bo_global *VAR_6,
         struct ttm_bo_driver *VAR_7,
         uint64_t VAR_8,
         bool VAR_9)
{
 int VAR_10 = -VAR_0;

 FUNC_7(&VAR_5->vm_lock, "ttmvml");
 VAR_5->driver = VAR_7;

 FUNC_5(VAR_5->man, 0, sizeof(VAR_5->man));





 VAR_10 = FUNC_11(VAR_5, VAR_2, 0);
 if (FUNC_12(VAR_10 != 0))
  goto out_no_sys;

 FUNC_1(&VAR_5->addr_space_rb);
 VAR_10 = FUNC_3(&VAR_5->addr_space_mm, VAR_8, 0x10000000);
 if (FUNC_12(VAR_10 != 0))
  goto out_no_addr_mm;

 FUNC_2(VAR_3, &VAR_5->wq, 0,
     VAR_4, VAR_5);
 FUNC_0(&VAR_5->ddestroy);
 VAR_5->dev_mapping = ((void*)0);
 VAR_5->glob = VAR_6;
 VAR_5->need_dma32 = VAR_9;
 VAR_5->val_seq = 0;
 FUNC_6(&VAR_5->fence_lock, "ttmfence", ((void*)0), VAR_1);
 FUNC_8(&VAR_6->device_list_mutex);
 FUNC_4(&VAR_5->device_list, &VAR_6->device_list);
 FUNC_9(&VAR_6->device_list_mutex);

 return 0;
out_no_addr_mm:
 FUNC_10(VAR_5, 0);
out_no_sys:
 return VAR_10;
}

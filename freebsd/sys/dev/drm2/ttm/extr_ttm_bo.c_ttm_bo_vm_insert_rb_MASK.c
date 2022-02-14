
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {int addr_space_rb; } ;


 int FUNC_0 (int ,int *,struct ttm_buffer_object*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ttm_buffer_object *VAR_1)
{
 struct ttm_bo_device *VAR_2 = VAR_1->bdev;


 FUNC_0(VAR_0, &VAR_2->addr_space_rb, VAR_1);
}

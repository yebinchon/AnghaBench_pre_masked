
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vm_object {int dummy; } ;
struct ttm_placement {int dummy; } ;
struct ttm_buffer_object {int dummy; } ;
struct ttm_bo_device {int dummy; } ;
typedef enum ttm_bo_type { ____Placeholder_ttm_bo_type } ttm_bo_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 struct ttm_buffer_object* FUNC_1 (int,int ,int) ;
 size_t FUNC_2 (struct ttm_bo_device*,unsigned long,int) ;
 int FUNC_3 (struct ttm_bo_device*,struct ttm_buffer_object*,unsigned long,int,struct ttm_placement*,int ,int,struct vm_object*,size_t,int *,int *) ;

int FUNC_4(struct ttm_bo_device *VAR_3,
   unsigned long VAR_4,
   enum ttm_bo_type VAR_5,
   struct ttm_placement *VAR_6,
   uint32_t VAR_7,
   bool VAR_8,
   struct vm_object *VAR_9,
   struct ttm_buffer_object **VAR_10)
{
 struct ttm_buffer_object *VAR_11;
 size_t VAR_12;
 int VAR_13;

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_0, VAR_1 | VAR_2);
 VAR_12 = FUNC_2(VAR_3, VAR_4, sizeof(struct ttm_buffer_object));
 VAR_13 = FUNC_3(VAR_3, VAR_11, VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9, VAR_12,
     ((void*)0), ((void*)0));
 if (FUNC_0(VAR_13 == 0))
  *VAR_10 = VAR_11;

 return VAR_13;
}

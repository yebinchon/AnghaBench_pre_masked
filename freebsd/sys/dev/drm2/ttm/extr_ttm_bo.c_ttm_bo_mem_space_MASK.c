
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct ttm_placement {int num_placement; int num_busy_placement; int * busy_placement; int * placement; } ;
struct ttm_mem_type_manager {scalar_t__ has_type; TYPE_1__* func; scalar_t__ use_type; } ;
struct ttm_mem_reg {size_t mem_type; size_t placement; int * mm_node; } ;
struct TYPE_4__ {int placement; } ;
struct ttm_buffer_object {TYPE_2__ mem; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;
struct TYPE_3__ {int (* get_node ) (struct ttm_mem_type_manager*,struct ttm_buffer_object*,struct ttm_placement*,struct ttm_mem_reg*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct ttm_mem_type_manager*,struct ttm_buffer_object*,struct ttm_placement*,struct ttm_mem_reg*) ;
 int FUNC_1 (struct ttm_buffer_object*,size_t,struct ttm_placement*,struct ttm_mem_reg*,int,int) ;
 int FUNC_2 (struct ttm_mem_type_manager*,size_t,int ,size_t*) ;
 size_t FUNC_3 (struct ttm_mem_type_manager*,int ,size_t) ;
 int FUNC_4 (size_t*,int ,int ) ;
 int FUNC_5 (int ,size_t*) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct ttm_buffer_object *VAR_5,
   struct ttm_placement *VAR_6,
   struct ttm_mem_reg *VAR_7,
   bool VAR_8,
   bool VAR_9)
{
 struct ttm_bo_device *VAR_10 = VAR_5->bdev;
 struct ttm_mem_type_manager *VAR_11;
 uint32_t VAR_12 = VAR_4;
 uint32_t VAR_13 = 0;
 bool VAR_14 = 0;
 bool VAR_15 = 0;
 bool VAR_16 = 0;
 int VAR_17, VAR_18;

 VAR_7->mm_node = ((void*)0);
 for (VAR_17 = 0; VAR_17 < VAR_6->num_placement; ++VAR_17) {
  VAR_18 = FUNC_5(VAR_6->placement[VAR_17],
      &VAR_12);
  if (VAR_18)
   return VAR_18;
  VAR_11 = &VAR_10->man[VAR_12];

  VAR_15 = FUNC_2(VAR_11,
      VAR_12,
      VAR_6->placement[VAR_17],
      &VAR_13);

  if (!VAR_15)
   continue;

  VAR_13 = FUNC_3(VAR_11, VAR_5->mem.placement,
        VAR_13);




  FUNC_4(&VAR_13, VAR_6->placement[VAR_17],
    ~VAR_3);

  if (VAR_12 == VAR_4)
   break;

  if (VAR_11->has_type && VAR_11->use_type) {
   VAR_14 = 1;
   VAR_18 = (*VAR_11->func->get_node)(VAR_11, VAR_5, VAR_6, VAR_7);
   if (FUNC_6(VAR_18))
    return VAR_18;
  }
  if (VAR_7->mm_node)
   break;
 }

 if ((VAR_15 && (VAR_12 == VAR_4)) || VAR_7->mm_node) {
  VAR_7->mem_type = VAR_12;
  VAR_7->placement = VAR_13;
  return 0;
 }

 if (!VAR_14)
  return -VAR_0;

 for (VAR_17 = 0; VAR_17 < VAR_6->num_busy_placement; ++VAR_17) {
  VAR_18 = FUNC_5(VAR_6->busy_placement[VAR_17],
      &VAR_12);
  if (VAR_18)
   return VAR_18;
  VAR_11 = &VAR_10->man[VAR_12];
  if (!VAR_11->has_type)
   continue;
  if (!FUNC_2(VAR_11,
      VAR_12,
      VAR_6->busy_placement[VAR_17],
      &VAR_13))
   continue;

  VAR_13 = FUNC_3(VAR_11, VAR_5->mem.placement,
        VAR_13);




  FUNC_4(&VAR_13, VAR_6->busy_placement[VAR_17],
    ~VAR_3);


  if (VAR_12 == VAR_4) {
   VAR_7->mem_type = VAR_12;
   VAR_7->placement = VAR_13;
   VAR_7->mm_node = ((void*)0);
   return 0;
  }

  VAR_18 = FUNC_1(VAR_5, VAR_12, VAR_6, VAR_7,
      VAR_8, VAR_9);
  if (VAR_18 == 0 && VAR_7->mm_node) {
   VAR_7->placement = VAR_13;
   return 0;
  }
  if (VAR_18 == -VAR_2)
   VAR_16 = 1;
 }
 VAR_18 = (VAR_16) ? -VAR_2 : -VAR_1;
 return VAR_18;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct ttm_buffer_object {int type; int num_pages; int sg; TYPE_2__* ttm; int mutex; struct ttm_bo_global* glob; struct ttm_bo_device* bdev; } ;
struct ttm_bo_global {int dummy_read_page; } ;
struct ttm_bo_device {TYPE_1__* driver; scalar_t__ need_dma32; } ;
struct TYPE_5__ {int sg; } ;
struct TYPE_4__ {TYPE_2__* (* ttm_tt_create ) (struct ttm_bo_device*,int,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (struct ttm_bo_device*,int,int,int ) ;
 TYPE_2__* FUNC_3 (struct ttm_bo_device*,int,int,int ) ;



 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ttm_buffer_object *VAR_6, bool VAR_7)
{
 struct ttm_bo_device *VAR_8 = VAR_6->bdev;
 struct ttm_bo_global *VAR_9 = VAR_6->glob;
 int VAR_10 = 0;
 uint32_t VAR_11 = 0;

 FUNC_0(&VAR_6->mutex);
 VAR_6->ttm = ((void*)0);

 if (VAR_8->need_dma32)
  VAR_11 |= VAR_3;

 switch (VAR_6->type) {
 case 130:
  if (VAR_7)
   VAR_11 |= VAR_5;
 case 129:
  VAR_6->ttm = VAR_8->driver->ttm_tt_create(VAR_8, VAR_6->num_pages << VAR_2,
            VAR_11, VAR_9->dummy_read_page);
  if (FUNC_4(VAR_6->ttm == ((void*)0)))
   VAR_10 = -VAR_1;
  break;
 case 128:
  VAR_6->ttm = VAR_8->driver->ttm_tt_create(VAR_8, VAR_6->num_pages << VAR_2,
            VAR_11 | VAR_4,
            VAR_9->dummy_read_page);
  if (FUNC_4(VAR_6->ttm == ((void*)0))) {
   VAR_10 = -VAR_1;
   break;
  }
  VAR_6->ttm->sg = VAR_6->sg;
  break;
 default:
  FUNC_1("[TTM] Illegal buffer object type\n");
  VAR_10 = -VAR_0;
  break;
 }

 return VAR_10;
}

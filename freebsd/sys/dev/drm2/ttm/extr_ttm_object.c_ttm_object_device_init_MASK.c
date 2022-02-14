
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_object_device {int object_hash; int object_count; int object_lock; struct ttm_mem_global* mem_glob; } ;
struct ttm_mem_global {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (struct ttm_object_device*,int ) ;
 struct ttm_object_device* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *,char*) ;

struct ttm_object_device *FUNC_5(struct ttm_mem_global
       *VAR_2,
       unsigned int VAR_3)
{
 struct ttm_object_device *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0, VAR_1);
 VAR_4->mem_glob = VAR_2;
 FUNC_4(&VAR_4->object_lock, "ttmdo");
 FUNC_0(&VAR_4->object_count, 0);
 VAR_5 = FUNC_1(&VAR_4->object_hash, VAR_3);

 if (VAR_5 == 0)
  return VAR_4;

 FUNC_2(VAR_4, VAR_0);
 return ((void*)0);
}

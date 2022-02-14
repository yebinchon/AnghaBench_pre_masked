
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_open_hash {int dummy; } ;
struct drm_hash_item {int dummy; } ;


 int VAR_0 ;
 struct drm_hash_item* FUNC_0 (struct drm_open_hash*,unsigned long) ;

int FUNC_1(struct drm_open_hash *VAR_1, unsigned long VAR_2,
       struct drm_hash_item **VAR_3)
{
 struct drm_hash_item *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 *VAR_3 = VAR_4;
 return 0;
}

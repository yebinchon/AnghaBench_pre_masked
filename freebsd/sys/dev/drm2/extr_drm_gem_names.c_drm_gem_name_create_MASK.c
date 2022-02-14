
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_gem_names {int lock; int unr; } ;
struct drm_gem_name {int name; void* ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct drm_gem_name*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_gem_name*,int ) ;
 int FUNC_3 (struct drm_gem_names*,int) ;
 int VAR_4 ;
 struct drm_gem_name* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct drm_gem_names *VAR_5, void *VAR_6, uint32_t *VAR_7)
{
 struct drm_gem_name *VAR_8;

 if (*VAR_7 != 0) {
  return (-VAR_0);
 }

 VAR_8 = FUNC_4(sizeof(struct drm_gem_name), VAR_2, VAR_3);
 FUNC_5(&VAR_5->lock);
 VAR_8->name = FUNC_1(VAR_5->unr);
 if (VAR_8->name == -1) {
  FUNC_6(&VAR_5->lock);
  FUNC_2(VAR_8, VAR_2);
  return (-VAR_1);
 }
 *VAR_7 = VAR_8->name;
 VAR_8->ptr = VAR_6;
 FUNC_0(FUNC_3(VAR_5, VAR_8->name), VAR_8, VAR_4);
 FUNC_6(&VAR_5->lock);
 return (0);
}

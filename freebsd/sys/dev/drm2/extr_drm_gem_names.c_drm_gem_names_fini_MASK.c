
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_names {int hash_mask; int unr; int * names_hash; int lock; } ;
struct drm_gem_name {int dummy; } ;


 struct drm_gem_name* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_gem_names*,struct drm_gem_name*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct drm_gem_names *VAR_1)
{
 struct drm_gem_name *VAR_2;
 int VAR_3;

 FUNC_5(&VAR_1->lock);
 for (VAR_3 = 0; VAR_3 <= VAR_1->hash_mask; VAR_3++) {
  while ((VAR_2 = FUNC_0(&VAR_1->names_hash[VAR_3])) != ((void*)0)) {
   FUNC_2(VAR_1, VAR_2);
   FUNC_5(&VAR_1->lock);
  }
 }
 FUNC_6(&VAR_1->lock);
 FUNC_4(&VAR_1->lock);
 FUNC_3(VAR_1->names_hash, VAR_0, VAR_1->hash_mask);
 FUNC_1(VAR_1->unr);
}

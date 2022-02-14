
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_names_head {int dummy; } ;
struct drm_gem_names {int hash_mask; struct drm_gem_names_head* names_hash; } ;



__attribute__((used)) static struct drm_gem_names_head *
FUNC_0(struct drm_gem_names *VAR_0, int VAR_1)
{

 return (&VAR_0->names_hash[VAR_1 & VAR_0->hash_mask]);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct drm_gem_ptr_match_arg {scalar_t__ res; void* ptr; } ;
struct drm_gem_names {int dummy; } ;


 int FUNC_0 (struct drm_gem_names*,int ,struct drm_gem_ptr_match_arg*) ;
 int VAR_0 ;

uint32_t
FUNC_1(struct drm_gem_names *VAR_1, void *VAR_2)
{
 struct drm_gem_ptr_match_arg VAR_3;

 VAR_3.res = 0;
 VAR_3.ptr = VAR_2;
 FUNC_0(VAR_1, VAR_0, &VAR_3);
 return (VAR_3.res);
}
